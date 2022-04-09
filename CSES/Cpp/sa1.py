t = int(input())

for _ in range(t):

    n = int(input())
    m =n
    b = 0

    l = []

    while(n):

        h = input()
        s = int(h,2)

        l.append(s)

        n-=1

    while(b in l):
        b+=1

    a = bin(b)[2:]

    print("0"*(m-len(a))+a)





