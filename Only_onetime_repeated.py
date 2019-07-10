a=list(map(int,input().split()))
l=[]
for i in range(len(a)):
	l.append(a.count(a[i]))
for i in range(len(l)):
	if l[i]==1:
		print(a[i])
		break
