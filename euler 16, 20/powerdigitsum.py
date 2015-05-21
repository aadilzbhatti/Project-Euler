def num_digits(n):
	if (n < 10):
		return 1
	else: return 1 + num_digits(n / 10)

def fact(n):
	if (n == 1):
		return 1
	else: return n * fact(n - 1)

def power_digit_sum(n):
	if (n < 10):
		return n
	else: return n % 10 + power_digit_sum(n / 10)

print(power_digit_sum(2**1000)))
print(power_digit_sum(fact(100)))