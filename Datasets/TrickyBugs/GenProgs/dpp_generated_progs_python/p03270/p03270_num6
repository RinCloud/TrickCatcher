# First, we'll define a function to calculate the combination of n choose k under a modulo m.
def nCr(n, k, m):
    num = 1
    den = 1
    for i in range(k):
        num *= (n-i)
        den *= (i+1)
        num %= m
        den %= m
    return (num*pow(den, m-2, m)) % m

# Next, we'll get the inputs for K and N.
K, N = map(int, input().split())

# We'll initialize an empty list to store the answers.
answers = []

# For each i=2,3,...,2K, we'll calculate the number of combinations satisfying the condition.
for i in range(2, 2*K+1):
    # We'll initialize the answer for the current i as 0.
    current_answer = 0
    # We'll iterate through all possible values of j
    for j in range((i+1)//2):
        # We'll calculate the number of ways to choose j sides that sum up to i-j.
        # We'll multiply it by nCr(N, j) to account for the different ways to distribute the remaining sides.
        current_answer += nCr(N, j, 998244353) * pow(K-1, N-j, 998244353)
        current_answer %= 998244353
    # We'll append the current answer to the answers list.
    answers.append(current_answer)

# Finally, we'll print the answers.
for answer in answers:
    print(answer)