n=int(input())
ar=list(map(int,input().split()))
m=0
arr=[]
for i in ar:
    if i not in arr:
        arr.append(i)
    elif i in arr:
        if len(arr)>m:
            m=len(arr)
            in1=arr.index(i) 
            arr.append(i)
            arr=arr[in1+1:]
if len(arr)>m:
    m=len(arr)
print(m) 
