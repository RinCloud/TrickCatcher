import sys

def calculate_min_fatigue(N, A, B, X):
    # calculate minimum possible total increase of fatigue level
    min_fatigue = 0
    
    for i in range(N-1):
        distance = X[i+1] - X[i]
        
        # calculate fatigue level for walking
        walking_fatigue = A * distance
        
        # calculate fatigue level for teleporting
        teleport_fatigue = B
        
        # choose minimum fatigue level between walking and teleporting
        min_fatigue += min(walking_fatigue, teleport_fatigue)
    
    return min_fatigue

# read input from STDIN
input_line = sys.stdin.readline().strip()
N, A, B = map(int, input_line.split())

input_line = sys.stdin.readline().strip()
X = list(map(int, input_line.split()))

# calculate and print the minimum possible total increase of fatigue level
print(calculate_min_fatigue(N, A, B, X))