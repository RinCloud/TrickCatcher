def maximize_letters():
    N = int(input())  # Read the length of string
    S = input()  # Read the string
    
    max_letters = 0  # Variable to store the maximum number of different letters
    
    for i in range(1, N):
        X = set(S[:i])  # Letters in X
        Y = set(S[i:])  # Letters in Y
        
        common_letters = X.intersection(Y)  # Letters common to both X and Y
        num_letters = len(common_letters)  # Number of different letters common to both X and Y
        
        max_letters = max(max_letters, num_letters)  # Update the maximum number of different letters
    
    print(max_letters)  # Print the result

maximize_letters()