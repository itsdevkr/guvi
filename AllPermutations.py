from itertools import permutations
s=input()
s=list(s)
perm=permutations(s)
a=[]
for j in list(perm):
	a.append(''.join(list(j)))
b=list(set(a))
c=[]
for i in range(len(b)):
	c.append(b[i])
c.sort()
for i in range(len(c)):
	print(c[i])
