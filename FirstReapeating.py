t=int(input())
a=list(map(int,input().split()))
l=[]
for i in range(len(a)):
	l.append(a.count(a[i]))
#print(l)
for i in l:
	if l[i]==2:
		c=l.index(2)
		print(a[c])
		break
	else:
		print("unique")
		break
