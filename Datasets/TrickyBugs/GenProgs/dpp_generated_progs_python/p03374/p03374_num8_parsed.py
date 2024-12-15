def sushi_counter():
  N, C = map(int, input().split())
  sushi = [list(map(int, input().split())) for _ in range(N)]

  sushi_sum = [0]*(N+1)
  energy_sum = [0]*(N+1)

  for i in range(N):
      sushi_sum[i+1] = sushi_sum[i] + sushi[i][1]
      energy_sum[i+1] = energy_sum[i] + sushi[i][0]

  return_sushi = [0]*(N+1)
  max_sushi = 0
  for i in range(N+1):
      max_sushi = max(max_sushi, sushi_sum[i]-energy_sum[i])
      return_sushi[i] = max_sushi

  max_sushi = 0
  for i in range(N, -1, -1):
      max_sushi = max(max_sushi, sushi_sum[-1]-sushi_sum[i]-(C-energy_sum[-1]+energy_sum[i]))
      return_sushi[i] = max(return_sushi[i], max_sushi)
  
  return max(return_sushi)

print(sushi_counter())