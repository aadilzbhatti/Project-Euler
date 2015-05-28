def multiples_3_and_5(n)
	count35 = 0
	count15 = 0
	n.times do |i|
		if i % 3 == 0
			count35+=i
		elsif i % 5 == 0
			count35+=i
		elsif i % 15 == 0
			count15+=i
		end
	end
	puts (count35 - count15)
end

multiples_3_and_5(1000)