# Python program to find the lexicographically smallest
# string that can be obtained after K operations

# Function to get the lexicographically smallest string
def get_smallest_string(S, N, K):
    
    # Find the reverse of string S
    T = S[::-1]
    
    # Concatenate S and T
    U = S + T
    
    # Repeat K operations
    for i in range(K):
        # Get the substring of length N
        S = U[:N]
        
        # Update U by concatenating S and T
        U = S + T
        
    return S

# Driver code
if __name__ == "__main__":
    N, K = map(int, input().split())
    S = input().strip()
    
    # Call the function and print the result
    result = get_smallest_string(S, N, K)
    print(result)