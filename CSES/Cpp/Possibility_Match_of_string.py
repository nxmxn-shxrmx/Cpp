n = int(input())

while(n):
    
    a = input()
    b = input()

    x = a.lower()
    y = b.lower()

    z = sorted(x)
    for i in y:

        if i not in z:
            print("NO")
            break
        else:
            z.remove(i)

    else:
        for i in a:

            if i.isupper():
                if i not in b:
                    print("NO")
                    break 

        else:
            print("YES")

            
    
    n-=1