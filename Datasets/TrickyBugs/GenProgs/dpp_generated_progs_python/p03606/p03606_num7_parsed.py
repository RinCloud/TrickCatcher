# get the number of groups of audiences
N = int(input())

# initialize the total number of people
total_people = 0

# iterate over each group
for _ in range(N):
    # get the starting seat and ending seat of the group
    l, r = map(int, input().split())

    # calculate the number of people in this group
    num_people = r - l + 1

    # add the number of people in this group to the total number of people
    total_people += num_people

# print the total number of people sitting at the theater
print(total_people)