N = int(input())
 
i = 2
 
while not N == 1:
 
	  fm = 0
 
	  while N % i == 0:
 
	  	    #fm += 1
	  	    fm = fm + 1
 
	  	    #N /= i
	  	    N = N / i
 
	  if fm:
	  	 print(i, end = '')
	  	 print("^", end = '')
	  	 print(fm, end = '')
	  	 print("", end = ' ')
	  i = i + 1 	 
