def main():
    # Read the input values
    n, m = map(int, input().split())
    s = input()
    operations = []
    for _ in range(m):
        l, r = map(int, input().split())
        operations.append((l, r))
    
    # Get the number of possible values
    result = get_possible_values(n, m, s, operations)
    
    # Print the result modulo 1000000007
    print(result % 1000000007)
