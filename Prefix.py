n=int(input())
a=list(map(str,input().split()))
prefix=input()
c=0
i=0
for item in a:
	if item[i:len(prefix)]==prefix:
		c=c+1
print(c)
