ss=""

while True:

    try:n  = input().strip()
    except EOFError:break 
    ss+=n

d = eval(ss)

l = list(d.values())

li = []
s = set()
for i in d:

    for j in d[i]:

        s.add(j)

li = sorted(list(s))

c = 0
d2 = {}

while(len(l)!=0):
    l2 = []

    for i in l:
        for j in i:
            l2.append(j)

    d2 = {i:l2.count(i) for i in li}
    m = max(d2,key = d2.get)
    l3 = []
    for i in l:

        if m not in i:
            l3.append(i)

    l = l3
    c+=1
print(c)

