import time
import math

curr = time.time()

def sieve(n):
	A = [True] * n
	A[0] = A[1] = False
	limit = int(math.ceil(math.sqrt(n)))
	for i in range(2, limit):
		if A[i]:
			for j in range(i**2, n, i):
				A[j] = False

	primes = []
	for i in range(len(A)):
		if A[i]:
			primes.append(i)
			print(i)

	return primes
	

lim = 2000000	
print(sum(sieve(lim)))
print(time.time() - curr)			

