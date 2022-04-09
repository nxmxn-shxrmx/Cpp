for _ in range(int(input())):
    i = 1
    c = int(input())
    while True:
        a = (bin(i)[2:].replace('1','7'))
        j = int(a.replace('0','4'))
        if j % c == 0:
            break
        i+=1
    print(j)