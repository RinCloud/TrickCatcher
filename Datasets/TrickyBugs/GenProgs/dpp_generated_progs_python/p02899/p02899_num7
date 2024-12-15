# Given the number of students in the class, N, and the number of students in the classroom when each student entered, we need to reconstruct the order in which the students entered the classroom.

# We can create a dictionary to store the student numbers as keys and the corresponding number of students in the classroom as the value.

# We can then sort the dictionary based on the number of students in the classroom in ascending order.

# Finally, we can print out the student numbers in the order they entered the classroom.

N = int(input())
A = list(map(int, input().split()))

students = {}

for i in range(N):
    students[i+1] = A[i]

sorted_students = sorted(students.items(), key=lambda x: x[1])

for student in sorted_students:
    print(student[0], end=' ')