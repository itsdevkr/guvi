n=int(input())
a=list(map(int,input().split()))
l=[]
for i in range(len(a)):
	l.append(a.count(a[i]))
#print(l)
new_list=[]
for i in range(len(l)):
	if l[i]>1:
		new_list.append(a[i])
	elif l[i]==1:
		j=i
		j=j+1
		if j==len(l)-1:
			print("unique")
#print(new_list)
new_list=set(new_list)
r=list(new_list)
r.sort()
for k in range(len(r)):
	print(r[k],end=" ")
