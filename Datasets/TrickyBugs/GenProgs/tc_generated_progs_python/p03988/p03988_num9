Here is a repaired code

from collections import Counter
n=int(input())
a=list(map(int,input().split()))
a.sort()
I,A=min(a),max(a)
c=Counter(a)
p=print
e=exit
if c[A]==1 or c[I]>A%2+1 or I*2>A:
    p("Impossible")  # Wrong indentation and 1 keyword missing, this have to be inside the if
for i in range(I+1,A+1):
    if not(i in c and c[i]>=2):
        e(p("Impossible"))  # Wrong indentation, this have to be inside the if
p("Possible")