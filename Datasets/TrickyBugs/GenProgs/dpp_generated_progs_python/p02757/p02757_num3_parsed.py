def count_substrings():
    N, P = map(int, input().split())
    S = input()

    count = 0
    dp = [0] * P
    dp[0] = 1
    curr = 0
    power = 1

    for i in range(N - 1, -1, -1):
        curr = (curr + int(S[i]) * power) % P
        dp[curr] += 1
        count += dp[curr]
        power = (power * 10) % P

    print(count)

count_substrings()