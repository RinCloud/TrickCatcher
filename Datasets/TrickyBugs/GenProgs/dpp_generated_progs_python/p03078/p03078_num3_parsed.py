import sys

def main():
    # Read input
    x, y, z, k = map(int, sys.stdin.readline().split())
    a = list(map(int, sys.stdin.readline().split()))
    b = list(map(int, sys.stdin.readline().split()))
    c = list(map(int, sys.stdin.readline().split()))

    # Create a list to store the sums of deliciousness
    sums = []
  
    # Iterate over all possible combinations and calculate the sum of deliciousness
    for i in range(x):
        for j in range(y):
            for l in range(z):
                sums.append(a[i] + b[j] + c[l])

    # Sort the sums in descending order
    sums.sort(reverse=True)
  
    # Print the first k sums
    for i in range(k):
        print(sums[i])

if __name__ == '__main__':
    main()