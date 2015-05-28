def num_digits(n):
	count = 0
	while (n > 0):
		count+=1
		n = n / 10
	return count

def fibSum(n):
	F = [0] * n
	F[0] = 0
	F[1] = 1
	print(F[0])
	print(F[1])
	for i in range(2, n):
		F[i] = F[i - 1] + F[i - 2]
		print(num_digits(F[i]))
		if (num_digits(F[i]) == 1000):
			print(i)
			break

print(fibSum(100000))