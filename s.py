from math import sqrt, pow
sz = 100005
h=0
isPrime = [True for i in range(sz + 1)]
def sieve():
  isPrime[0] = isPrime[1] = False

  for i in range(2, int(sqrt(sz)) + 1, 1):
    if (isPrime[i]):
      for j in range(i * i, sz, i):
        isPrime[j] = False
def findPrimesD(d,dig):
  left = int(pow(10, d - 1))
  right = int(pow(10, d) - 1)
  l = []
  c = 0

  for i in range(left, right + 1, 1):
    if (isPrime[i]):
        if str(i).count(dig)>c:
            c = str(i).count(dig)
            h = i
        elif str(i).count(dig)==c:
            h += i
    
sieve()
d = int(input())
dig = input()
l = findPrimesD(d,dig)
print(h)
