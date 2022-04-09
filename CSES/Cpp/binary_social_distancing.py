

def new_func(n):
    c = 0
    for i in range(1,2**n):
        s = bin(i)[2:]

        if s.count("1")==1:
            c+=1
        else:
        
            for j in range(len(s)-1):
                if(s[j]=="1"):
                    if s[j]==s[j+1]:
                        break
            else:
                c+=1
                
    print(c)


n = int(input())
new_func(n)


