from itertools import permutations
s=input()
s=list(s)
perm=permutations(s)
for j in list(perm):
	print(''.join(list(j)))
