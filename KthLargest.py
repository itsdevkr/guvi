n,k=map(int,input().split())
a=list(map(int,input().split()))

b=set(a)
bb=sorted(b, reverse=False)
#print(bb)
c=list(bb)

print(c[-k])
