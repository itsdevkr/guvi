s=list(map(str,input().split()))
news=[]
olds=[]
for i in range(len(s)):
	if (i+1)%2!=0:
		news.append(s[i])
	else:
		olds.append(s[i])
#print(news)
for i in range(len(news)):
	news[i]=news[i][::-1]
#print(news)
#result=[]
for i in range(len(s)):
	#result.extend(news[i])
	#result.extend(olds[i])
#print(result)	
	print(news[i],end=" ")
	print(olds[i],end=" ")
#print(olds)
#print(s)
