'''
Approach:
1. Create an empty set to store the occupied chairs.
2. Sort the people's preferences based on their R_i values in descending order.
3. Iterate through each person's preference from the last person to the first person.
   - If the coordinate of the chair is already occupied by someone, skip to the next chair.
   - Otherwise, occupy the chair and add it to the set of occupied chairs.
   - If the coordinate of the chair is less than the person's L_i value, increment the counter for additional chairs.
4. Print the counter for additional chairs.

Time complexity analysis:
- Sorting the people's preferences takes O(N*log(N)) time.
- Iterating through each person's preference takes O(N) time.
- Occupying a chair and checking if it's already occupied takes O(1) time.
- Therefore, the overall time complexity of this approach is O(N*log(N)).

Let's implement this approach.
'''

def minimum_additional_chairs(N, M, preferences):
    occupied_chairs = set()
    preferences.sort(key=lambda x: x[1], reverse=True)  # Sort based on R_i values in descending order

    additional_chairs = 0

    for preference in preferences:
        L_i, R_i = preference
        for i in range(L_i, R_i):
            if i not in occupied_chairs:
                occupied_chairs.add(i)
                break
        else:
            additional_chairs += 1

    return additional_chairs

# Read input
N, M = map(int, input().split())
preferences = [tuple(map(int, input().split())) for _ in range(N)]

# Calculate and print the minimum required number of additional chairs
print(minimum_additional_chairs(N, M, preferences))