s=input()
l=list(s)
l=l[::-1]
for i in range(len(l)):
	print(''.join(l[i]),end="")
