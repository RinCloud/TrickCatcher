# Takahashi's monster stats
T_Health, T_Strength = map(int, input().split())
# Aoki's monster stats
A_Health, A_Strength = map(int, input().split())

while T_Health > 0 and A_Health > 0:
    # Takahashi's attack
    A_Health -= T_Strength
    
    # Check if Aoki's monster has fallen
    if A_Health <= 0:
        print("Yes")
        break
    
    # Aoki's attack
    T_Health -= A_Strength
    
    # Check if Takahashi's monster has fallen
    if T_Health <= 0:
        print("No")
        break