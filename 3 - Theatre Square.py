dimen = input()

r1 = 0
r2 = 0

n = int(dimen.split()[0])
m = int(dimen.split()[1])
a = int(dimen.split()[2])
#n,m,a = map(int, input().split())

if m%a == 0 :
    r1 = m//a
else:
    r1 = m//a + 1

if n%a == 0:
    r2 = n//a
else:
    r2= n//a +1


print(r1*r2)