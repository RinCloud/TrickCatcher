"""
def process_devices(N, K, S):
    # initialize the state of each device
    devices = list(S)
    
    for _ in range(K):
        # put a ball into the leftmost device
        devices[0] = 'A'
        
        # loop through each device
        for i in range(N-1):
            if devices[i] == 'A':
                # if the device is in state A, throw out the ball from the same side
                devices[i] = 'B'
            else:
                # if the device is in state B, throw out the ball from the other side
                devices[i] = 'A'
                devices[i+1] = 'B'
        
        # if the last device is in state B, throw out the ball from the other side
        if devices[N-1] == 'B':
            devices[N-1] = 'A'
        
    return ''.join(devices)


# read the input from standard input
N, K = map(int, input().split())
S = input()

# process the devices
result = process_devices(N, K, S)

# print the result
print(result)

"""