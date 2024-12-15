# Program:

N = int(input()) # Number of Skewer Meal Packs

packs = [] # List to store the packs

for _ in range(N):
    A, B = map(int, input().split()) # Get the A and B values
    packs.append((A, B)) # Add the pack to the list

ans = 0 # Variable to store the final answer

for i in range(N):
    for j in range(i+1, N):
        a1, b1 = packs[i] # Get the first pack
        a2, b2 = packs[j] # Get the second pack
        
        # Calculate the number of ways to put the beef on skewers
        # Total a1+a2 beef, have to choose a1
        w1 = (a1 * (a1 + 1) // 2) + (a2 * (a2 + 1) // 2)
        
        # Calculate the number of ways to put the green pepper on skewers
        # Total b1+b2 green pepper, have to choose b1
        w2 = (b1 * (b1 + 1) // 2) + (b2 * (b2 + 1) // 2)
        
        # Multiply the number of ways to put beef and green pepper
        # Multiply by 2 to account for different sets of skewers
        ans += w1 * w2 * 2
        
        # Modulo the answer
        ans %= (10**9 + 7)

# Print the final answer
print(ans)