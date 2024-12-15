# Given the initial state of each device and the number of balls processed, we need to determine the state of each device after K balls are processed.

# To do this, we can simulate the process of ball movement through the devices. We'll keep track of the current state of each device and simulate the movement of balls according to the rules mentioned in the problem.

# Let's start by reading the input values.

N, K = map(int, input().split())
S = input()

# Next, we'll initialize an array to store the current state of each device. We'll also keep track of the index of the leftmost device.

devices = list(S)
leftmost_device = 0

# Now, we can simulate the movement of balls through the devices.

for _ in range(K):
    # If the leftmost device is in state A and a ball is inserted from the left side, it will throw out the ball from the left side and change its state to B.
    if devices[leftmost_device] == 'A':
        devices[leftmost_device] = 'B'
        leftmost_device += 1

    # If the leftmost device is in state B and a ball is inserted from the left side, it will throw out the ball from the right side and change its state to A.
    elif devices[leftmost_device] == 'B':
        devices[leftmost_device] = 'A'
        leftmost_device -= 1

# Finally, we can print the state of each device.

print(''.join(devices))