def TFA(n)
	i = 2
	lines = []
	while not n == 1
		  fm = 0
		  while n % i == 0
		  	     fm += 1
		  	     n /= i
		  end
		  if fm != 0
		  	 out = i.to_s + "^" + fm.to_s
		  	 lines.append(out)
		  end
		  i += 1
	end
	lines
end	

n = ARGV[0].to_i
    out = TFA(n)    
	for i in out
		print(i,"\n")
	end	
