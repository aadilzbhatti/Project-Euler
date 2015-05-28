import time

curr = time.time()

def even_fib_sum(n):
	count = 0
	F = [0] * n
	F[0] = 0
	F[1] = 1
	for i in range(2, n):
		F[i] = F[i - 1] + F[i - 2]
		if F[i] % 2 == 0:
			count += F[i]
	return count

lim = 4000000
print(even_fib_sum((lim)))
print(time.time() - curr)