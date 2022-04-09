n = int(input())

for i in range(n+1):
  a  =0
  for j in range(i+1):
    a|=j
  print(i," ",a)

