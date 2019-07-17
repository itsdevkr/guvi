n,k=map(int,input().split())
a=list(map(int,input().split()))

b=set(a)
b.sort(reverse=True)
print(b)
c=list(b)

print(c[-k])
