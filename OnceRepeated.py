n=int(input())
s=list(map(int,input().split()))
a=[]
for i in range(len(s)):
	a.append(s.count(s[i]))
#print(a)
for i in range(len(a)):
	if a[i]==1:
		print(s[i])
		break
