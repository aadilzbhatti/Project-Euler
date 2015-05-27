def largest_prime_factor(n)
	factor = 1
	n.times do |i = 2|
		if n % i == 0
			factor *= i
			if factor == n
				return i
			end
		end 
	end
end

lim = 600851475143
puts largest_prime_factor(lim)