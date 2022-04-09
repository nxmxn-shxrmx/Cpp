from itertools import combinations
 
n,l,r,x = map(int,input().split())
 
a = list(map(int,input().split()))
 
c = 0
 
for i in range(2,n+1):
	for j in combinations(a,i):
		if max(j) - min(j) >= x and l <= sum(j) <= r:
			c += 1
 
print(c)