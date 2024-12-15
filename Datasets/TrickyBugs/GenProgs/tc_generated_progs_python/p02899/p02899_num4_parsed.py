N = int(input())
A = list(map(int, input().split()))

student_numbers = {m:i+1 for i,m in enumerate(A)}
reconstructed_order = [student_numbers[i+1] for i in range(N)]
print(*reconstructed_order)
