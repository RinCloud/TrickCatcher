"""
import sys

# Read the N and H from input
N, H = map(int, input().split())

# Initialize the counter for number of attacks
attacks = 0

# Read the attack and damage values for each katana
for _ in range(N):
    a, b = map(int, input().split())

    # If the damage of wielding the katana is greater than or equal to the target damage, increment attacks by 1
    if a >= H:
        attacks += 1

    # If the damage of throwing the katana is greater than the damage of wielding it,
    # and if the number of times the katana is thrown is enough to reach the target damage,
    # increment attacks by the minimum number of times the katana needs to be thrown
    elif b > a and (H - a) % (b - a) == 0:
        attacks += (H - a) // (b - a)
        break

    # If the damage of throwing the katana is greater than the damage of wielding it,
    # and if the number of times the katana is thrown is not enough to reach the target damage,
    # increment attacks by the minimum number of times the katana needs to be thrown, plus 1 more attack to wield the katana
    elif b > a:
        attacks += (H - a) // (b - a) + 1
        break

    # If neither the wielding or throwing conditions are met, increment attacks by 1
    else:
        attacks += 1

# Print the minimum number of attacks required
print(attacks)
"""