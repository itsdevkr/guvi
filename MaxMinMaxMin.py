# your code goes here
n=int(input())
ns=input().split()
a=[]
for k in range(n):
    kk=int(ns[k])
    a.append(kk)
#print(a)
b=a[::-1]
#print(b)
bb=list()
for i in range(0,len(a),1):
    bb.append(b[i])
    bb.append(a[i])
bb=bb[:len(a)]
for item in range(len(bb)):
    print(bb[item],end=" ")
    
