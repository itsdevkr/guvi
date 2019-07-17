n=int(input())
a=list(map(int,input().split()))
l=[]
for i in range(len(a)):
	if a[i]!=i:
		j=i
		j=j+1
		if j==len(a):
			print("-1")
	if a[i]==i:
		l.append(a[i])
for i in range(len(l)):
	print(l[i],end=" ")
