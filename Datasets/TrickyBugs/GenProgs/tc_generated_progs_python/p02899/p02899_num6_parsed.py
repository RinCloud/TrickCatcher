def reconstruct_order():
  N = int(input())
  A = list(map(int, input().split()))

  order = {m:i+1 for i, m in enumerate(A)}
  sorted_order = sorted(order.keys(), key=lambda x: order[x])
  
  for student in sorted_order:
    print(student, end=' ')

reconstruct_order()