import math
import time

curr = time.clock()

def num_divisors(n):
	count = 2
	lim = int(math.ceil(math.sqrt(n)))
	for i in range(2, lim):
		if (n % i == 0):
			count += 1
			if (i != n / i):
				count += 1
	return count 


def triangle(n):
	return (n * (n + 1)) / 2

i = 1
lim = 500
while(True):
	if (num_divisors(triangle(i)) > lim):
		print(triangle(i))
		print(time.clock() - curr)
		break
	else: i+=1


