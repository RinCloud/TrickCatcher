import math

def count_possible_values(N, X, D):
    if D == 0:
        if X == 0:
            return 1
        else:
            return N+1  # Include the case where Takahashi takes none

    if X == 0:
        return N+1  # Include the case where Aoki takes none

    S = math.gcd(X, D)
    min_S = min(S, -S)
    max_S = N * max(X + X - min_S * D, X - X - min_S * D) // 2

    T = X // D
    count = max_S // T

    if min_S % T == 0:
        count += 1

    return count

N, X, D = map(int, input().split())
print(count_possible_values(N, X, D))