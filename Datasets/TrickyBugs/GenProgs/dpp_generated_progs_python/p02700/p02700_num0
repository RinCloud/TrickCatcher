'''
Take inputs A, B, C, D
Iterate until one of the monsters' health becomes 0 or below:
     Takahashi attacks Aoki
     Decrease Aoki's health by Takahashi's strength
     If Aoki's health is 0 or below, break the loop
     Aoki attacks Takahashi
     Decrease Takahashi's health by Aoki's strength
     If Takahashi's health is 0 or below, break the loop
If Takahashi's health is 0 or below, print "No"
Else, print "Yes"
'''
A, B, C, D = map(int, input().split())

while True:
    C -= B
    if C <= 0:
        print("Yes")
        break
    A -= D
    if A <= 0:
        print("No")
        break