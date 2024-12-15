# PROBLEM DESCRIPTION:
# Two students of AtCoder Kindergarten are fighting over candy packs.
# There are three candy packs, each of which contains a, b, and c candies, respectively.
# Teacher Evi is trying to distribute the packs between the two students so that each student gets the same number of candies. Determine whether it is possible.
# Note that Evi cannot take candies out of the packs, and the whole contents of each pack must be given to one of the students.

# CONSTRAINTS:
# * 1 ≦ a, b, c ≦ 100

# INPUT:
# The input is given from Standard Input in the following format:
# a b c

# OUTPUT:
# If it is possible to distribute the packs so that each student gets the same number of candies, print `Yes`. Otherwise, print `No`.

# EXAMPLES:

# INPUT:
# 10 30 20

# OUTPUT:
# Yes

# INPUT:
# 30 30 100

# OUTPUT:
# No

# INPUT:
# 56 25 31

# OUTPUT:
# Yes

a, b, c = map(int, input().split())
diff = max(a, b, c) - min(a, b, c)
print('Yes' if diff % 2 == 0 and diff // 2 <= min(a, b, c) else 'No')
