# READ INPUT
N = int(input())
h = list(map(int, input().split()))

# INITIALIZE COUNT OF WATERING OPERATIONS
watering_operations = 0

# LOOP THROUGH EACH FLOWER
for i in range(N):
    # GET THE DIFFERENCE BETWEEN CURRENT HEIGHT AND DESIRED HEIGHT
    difference = h[i] - h[i-1] if i > 0 else h[i]

    # INCREASE THE WATERING OPERATIONS BY DIFFERENCE IF DIFFERENCE IS POSITIVE
    if difference > 0:
        watering_operations += difference

# PRINT THE RESULT
print(watering_operations)