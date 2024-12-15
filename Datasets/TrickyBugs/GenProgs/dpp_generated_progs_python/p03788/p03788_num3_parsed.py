N, K = map(int, input().split())
S = input()

# Initialize list to store current state of each device
devices = list(S)

# Loop through each ball
for _ in range(K):
    # Iterate through each device
    for i in range(N):
        # If device is in state A
        if devices[i] == 'A':
            # If ball is coming from left
            if i > 0 and devices[i-1] == 'B':
                devices[i-1] = 'A'
                devices[i] = 'B'
            # If ball is coming from right
            elif i < N-1 and devices[i+1] == 'B':
                devices[i+1] = 'A'
                devices[i] = 'B'
        # If device is in state B (reverse conditions from state A)
        elif devices[i] == 'B':
            if i > 0 and devices[i-1] == 'A':
                devices[i-1] = 'B'
                devices[i] = 'A'
            elif i < N-1 and devices[i+1] == 'A':
                devices[i+1] = 'B'
                devices[i] = 'A'

# Print final state of each device
print(''.join(devices))

