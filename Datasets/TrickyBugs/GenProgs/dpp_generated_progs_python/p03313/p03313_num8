import sys

def solve(N, A):
  ans = []
  for K in range(1, 2**N):
    max_sum = 0
    for i in range(K):
      for j in range(i+1, K+1):
        if i | j <= K:
          max_sum = max(max_sum, A[i] + A[j])
    ans.append(max_sum)
  return ans

def main():
  # read inputs
  N = int(input().strip())
  A = list(map(int, input().strip().split()))

  # solve the problem
  ans = solve(N, A)

  # print the result
  for val in ans:
    print(val)

main()