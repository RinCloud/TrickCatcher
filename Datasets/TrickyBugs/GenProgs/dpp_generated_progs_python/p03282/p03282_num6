import sys

def main():
    S = input().strip()
    K = int(input().strip())
    
    count = 0
    for i in range(len(S)):
        if S[i] != '1':
            count += int(S[i]) * (pow(10, K) - pow(10, K-1))
        else:
            count += pow(10, K-1)
    
    print(S[count-1])

if __name__ == "__main__":
    main()