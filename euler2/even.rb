def even_fib(n)
	t1 = 0
	t2 = 1
	count = 0
	while t1 < n
		sum = t2 + t1
		t1 = t2
		t2 = sum
		if t1 % 2 == 0
			count += t1
		end
	end
	return count
end

puts even_fib(4000000)