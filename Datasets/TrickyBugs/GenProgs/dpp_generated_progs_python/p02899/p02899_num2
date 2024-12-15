'''
# Approach:

* We are given the record of number of students in the classroom when each student entered the classroom.
* The student number is same as the index of the record array (1-based indexing).
* We need to reconstruct the order in which the students entered the classroom.

* We can create an empty array to hold the order of students.
* We iterate over the record array, from the last entry to the first entry.
* We insert each student number at the index equal to the number of students already present in the classroom.
* Since we iterate from the last entry to the first entry, we'll get the order of students in reverse.

# Steps:
1. Read input values of N and record.
2. Initialize an empty array order to hold the order of students.
3. Iterate over the record array from the last entry to the first entry.
	1. Get the student number (index + 1).
	2. Insert the student number in the order array at the index equal to the number of students already present in the classroom.
4. Print the order array in reverse.

'''

N = int(input())
record = list(map(int, input().split()))

order = []
for i in range(N - 1, -1, -1):
    order.insert(record[i] - 1, i + 1)

print(*order[::-1])