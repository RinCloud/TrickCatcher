def main():
    # Read input values
    N = int(input())
    D, X = map(int, input().split())
    A = [int(input()) for _ in range(N)]
    
    # Calculate the number of chocolate pieces prepared
    total_chocolates = X
    
    for i in range(N):
        remaining_days = D-1
        total_chocolates += remaining_days // A[i] + 1
    
    print(total_chocolates)

if __name__ == '__main__':
    main()