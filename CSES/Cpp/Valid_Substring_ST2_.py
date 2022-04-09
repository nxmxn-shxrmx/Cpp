n = input()

r = 0
l = 0
maxz = 0
for i in range(len(n)):
    
    if n[i]=='(':
        l +=1
    
    else:
        r+=1
        
    if(l==r):
        
        maxz = max(maxz,2*r)
    elif (r>l):
        
        l = 0
        r = 0
        
r = 0
l =0
for i in range(len(n)-1,-1,-1):
    if n[i]=='(':
        l+=1
    else:
        r+=1
    if l ==r:
        maxz = max(maxz,2*l)
    elif l>r:
        r = 0
        l = 0
        
print(maxz)