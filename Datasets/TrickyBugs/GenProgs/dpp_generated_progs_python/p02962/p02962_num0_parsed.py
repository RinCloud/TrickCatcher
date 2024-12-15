import sys

# Read input from Standard Input
s = input().strip()
t = input().strip()

# If t is longer than s, print -1 and exit
if len(t) > len(s):
    print("-1")
    sys.exit()

# Check if there exists i such that the concatenation of i copies of t is a substring of the concatenation of any number of copies of s
for i in range(len(s)//len(t), -1, -1):
    if len(t*i) <= len(s) and t*i in s:
        print(i)
        sys.exit()

# If no such i exists, print 0
print("0")