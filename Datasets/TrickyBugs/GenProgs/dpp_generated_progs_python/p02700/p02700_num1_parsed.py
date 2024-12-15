# Takahashi and Aoki's Monster Battle

A, B, C, D = map(int, input().split())

while A > 0 and C > 0:
    # Takahashi attacks
    C -= B
    
    # Check if Aoki lost
    if C <= 0:
        print("Yes")
        exit()
    
    # Aoki attacks
    A -= D
    
    # Check if Takahashi lost
    if A <= 0:
        print("No")
        exit()