from itertools import permutations
n = input()

l = sorted(n)

g= list(permutations(l))
h = []
print(len(set(g)))
for i in g:
    f = "".join(i)
    if f not in h:
        print(f)
        h.append(f)






