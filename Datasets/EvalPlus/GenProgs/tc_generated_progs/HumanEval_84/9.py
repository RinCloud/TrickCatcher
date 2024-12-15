def solve(N):
    """Given a positive integer N, return the total sum of its digits in binary.
    
    Example
        For N = 1000, the sum of digits will be 1 the output should be "1".
        For N = 150, the sum of digits will be 6 the output should be "110".
        For N = 147, the sum of digits will be 12 the output should be "1100".
    
    Variables:
        @N integer
             Constraints: 0 ≤ N ≤ 10000.
    Output:
         a string of binary number
    """
    if N < 10:
        return bin(N)[2:]  # Return the binary representation directly if N is a single digit
    else:
        total_sum = 0
        for i in str(N):
            total_sum += int(i)
        return bin(total_sum)[2:]  # Return the binary representation of the sum of the digits in N.