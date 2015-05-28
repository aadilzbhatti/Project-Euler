def collatz(n):
        if (n == 1):
                return 1
        elif (n % 2 == 0):
                return 1 + collatz(n/2)
        else:
                return 1 + collatz(3*n+1)


maxCol = 0
maxVal = 0
for i in range(1, 1000000):
	if (collatz(i) > maxCol):
		maxCol = collatz(i)
		maxVal = i

print(collatz(maxVal))
print(maxVal)