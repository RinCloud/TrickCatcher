from collections import deque

N, K = map(int, input().split())
jewels = list(map(int, input().split()))

max_sum = 0

# iterate through all possible combinations of operations
for left_take in range(min(K, N) + 1):
    for right_take in range(min(K - left_take, N - left_take) + 1):

        # create a new dequeue from the original one
        dq = deque(jewels)

        sum_jewels = 0

        # perform left takes
        for _ in range(left_take):
            if dq:
                sum_jewels += dq.popleft()

        # perform right takes
        for _ in range(right_take):
            if dq:
                sum_jewels += dq.pop()

        # perform additional operations if there are any remaining
        for _ in range(K - left_take - right_take):

            # calculate the maximum value of remaining jewels
            max_value = max(dq)

            # remove it from the dequeue
            dq.remove(max_value)

            # add it to the sum of jewels
            sum_jewels += max_value

        # update the maximum sum of jewels
        max_sum = max(max_sum, sum_jewels)

print(max_sum)