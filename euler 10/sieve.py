import time
import math

curr = time.time()

LIM = 2000000

def primes(n):
	limit = int(math.ceil(math.sqrt(n)))
	isPrime = [False] * (n + 1)

	for i in range(limit):
		for j in range(limit):
			k = 4*i**2 + j**2
			if k <= n and (k % 12 == 1 or k % 12 == 5):
				isPrime[k] = not isPrime[k]
			
			k = 3*i**2 + j**2
			if k <= n and k % 12 == 7:
				isPrime[k] = not isPrime[k]

			k = 3*i**2 - j**2
			if k <= n and i > j and k % 12 == 11:
				isPrime[k] = not isPrime[k]

	for i in range(5, limit):
		if (isPrime[i]):
			for c in range(i**2, limit, i**2):
				if (isPrime[c]): isPrime[c] = False

	primes = [2, 3]

	for x in range(len(isPrime)):
		if (isPrime[x] and x >= 5):
			primes.append(x)

	return primes

def sum(arr):
	count = 0
	for i in range(len(arr)):
		count += arr[i]
	return count

print(sum(primes(LIM))) # --> 142913828922
print(time.time() - curr) # --> 2.27972197533