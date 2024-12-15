def count_integers(N, X, A):
   #To store the binary representation of X and Ai
    X_binary = bin(int(X))[2:]
    A_binary = [bin(int(a))[2:] for a in A]
    
    #To calculate the length of the longest binary number possible
    max_length = max(len(X_binary), max(len(a) for a in A_binary))
    
    #To add leading zeroes to X_binary and A_binary
    X_binary = X_binary.zfill(max_length)
    A_binary = [a.zfill(max_length) for a in A_binary]
    
    #To keep track of the counts of each number
    counts = {}
    
    #To iterate through each digit position from the rightmost to the leftmost
    for i in range(max_length - 1, -1, -1):
        #To calculate the value of the current bit position
        bit_value = 2**(max_length - 1 - i)
        
        #To store the XOR result if X_bit is 0 or 1
        xor_result_0 = []
        xor_result_1 = []
        
        #To iterate through each number in A_binary
        for a in A_binary:
            #To check if the bit at the current position is 0 or 1
            if a[i] == '0':
                #If the bit is 0, the result of XOR operation will be the same number
                xor_result_0.append(a)
            else:
                #If the bit is 1, the result of XOR operation will be the opposite number
                xor_result_1.append(a)
        
        #To check if the bit at the current position in X is 1
        if X_binary[i] == '1':
            #If the bit is 1, we can perform XOR operations on xor_result_1
            xor_result_1 = xor_result_1 + xor_result_0
        else:
            #If the bit is 0, we can perform XOR operations on xor_result_0
            xor_result_0 = xor_result_0 + xor_result_1
        
        #To store the unique values in xor_result_0 and xor_result_1
        unique_values = set(xor_result_0 + xor_result_1)
        
        #To update the counts of each number in the unique values
        for value in unique_values:
            if value in counts:
                counts[value] += 1
            else:
                counts[value] = 1
    
    #To count the number of integers not exceeding X
    count = sum(1 for value in counts.keys() if int(value, 2) <= int(X, 2))
    
    return count % 998244353

#To get the input from the user
N, X = map(int, input().split())
A = []
for _ in range(N):
    A.append(input())

#To print the output
print(count_integers(N, X, A))