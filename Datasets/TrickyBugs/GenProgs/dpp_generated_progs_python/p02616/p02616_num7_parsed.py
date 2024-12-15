import sys

MOD = 10**9 + 7

def main():
    # Read inputs
    N, K = map(int, input().split())
    A = list(map(int, input().split()))

    # Sort the list in ascending order
    A.sort()

    # If K is equal to N, then the maximum product is the product of all elements modulo MOD
    if K == N:
        product = 1
        for num in A:
            product *= num % MOD
            product %= MOD
        print(product)
        return

    # If K is odd and the first element is positive, it should be included in the product
    if K % 2 == 1 and A[-1] > 0:
        product = A[-1] % MOD
        A.pop()
        K -= 1

    # Initialize pointers
    left = 0
    right = N - 1

    # Accumulate the maximum product from both ends
    product = 1
    while K > 0:
        # Take the larger absolute value from both ends
        if abs(A[left]) >= abs(A[right]):
            product *= A[left] % MOD
            left += 1
        else:
            product *= A[right] % MOD
            right -= 1

        # Update K
        K -= 1

    print(product % MOD)

if __name__ == "__main__":
    main()