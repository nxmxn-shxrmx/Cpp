def implementAPI(l):
    ans = []
    reg = []
    login = []
    pasw = {}
    for i in l:
        l1 = i.split()
        if (l1[0]=='register' and (l1[1] not in reg)):
            reg.append(l1[1])
            pasw[l1[1]] = l1[2]
            ans.append('Registered Successfully')
        elif (l1[0]=='login' and (l1[1] in reg) and (l1[1] not in login) and l1[2]==pasw[l1[1]]):
            login.append(l1[1])
            ans.append('Logged In Successfully')
        elif (l1[0]=='logout' and (l1[1] in login)):
            ans.append('Logged Out Successfully')
        else:
            if (l1[0]=='register'):
                ans.append('Username already exists')
            elif(l1[0]=='login'):
                ans.append('login unsuccessfull')
            else:
                ans.append('logout unsuccessfull')
            # else:
            #     ans.append(f'{l[0]} Unsuccessfull')
    return ans
                


n = int(input())
l=[]
while n:
    n -= 1
    s = input()
    l.append(s)
print(implementAPI(l))