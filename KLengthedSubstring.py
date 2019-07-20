s,k=map(str,input().split())
k=int(k)
kk=k
a=0
my=[]
for i in range(len(s)):
	c=s[a:k]
	#print(c)
	if len(c)==kk:
		my.append(c)
	a=a+1
	k=k+1

print(" ".join(my))
