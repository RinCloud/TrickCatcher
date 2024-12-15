# Reading the input
N = int(input())

# Initializing the count of people sitting at the theater
num_people = 0

# Looping through each group of audience
for _ in range(N):
    l_i, r_i = map(int, input().split())
    num_people += r_i - l_i + 1

# Printing the total number of people sitting at the theater
print(num_people)