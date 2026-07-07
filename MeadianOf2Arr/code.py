a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=sorted(a+b)
mid=len(c)//2
if len(c)%2==0:
    midnu=(c[mid-1]+c[mid])//2
else:
    midnu=c[mid]
print(midnu)
