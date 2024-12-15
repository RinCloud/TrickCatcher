A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())

# order in decreasing order of serving time
order = sorted([(A, "ABC Don"), (B, "ARC Curry"), (C, "AGC Pasta"), (D, "APC Ramen"), (E, "ATC Hanbagu")], reverse=True)

# time variables
time = 0
delivery_time = 0

# iterate over each dish in the order
for dish_time, dish_name in order:
    # calculate the time for this dish to be delivered
    required_time = ((time + 9) // 10) * 10 + dish_time

    # check if order can be placed at this time or if we need to wait for the previous dish to be delivered
    if required_time > delivery_time:
        delivery_time = required_time
    else:
        delivery_time += dish_time

    # update the current time
    time = delivery_time

# print the earliest possible time for the last dish to be delivered
print(delivery_time)