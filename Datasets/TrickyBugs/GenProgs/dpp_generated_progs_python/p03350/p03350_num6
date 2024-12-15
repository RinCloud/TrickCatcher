def main():
    # Read inputs
    n, k = map(int, input().split())
    strings = [input() for _ in range(n+1)]

    # Initialize the result as an empty string
    result = ""

    # Start with the longest string
    for i in range(2 ** n - 1, -1, -1):
        # Check if the string is a subsequence of K or more different strings
        count = 0
        for j in range(n+1):
            if strings[j][i] == "1":
                count += 1

        # If the count is greater than or equal to K, update the result
        if count >= k:
            result = "1" + result if i != 0 else "0" + result

    # Print the result
    print(result)


if __name__ == "__main__":
    main()