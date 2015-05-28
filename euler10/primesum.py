import math
import time

primes = [2, 3, 5, 7, 11]
def isPrime(num):
	lim = int(math.ceil(math.sqrt(num)))

	if (num in primes):
		return True

	for i in primes:
		if (num % i == 0):
			return False
	primes.append(num)
	return True

def primeSum(n):
	sum = 0
	for i in range(2, n):
		if (isPrime(i)):
			sum += i
	return sum

lim = 2000000
curr = time.clock()
print(primeSum(lim))
print(time.clock() - curr) # --> 7682.112774
