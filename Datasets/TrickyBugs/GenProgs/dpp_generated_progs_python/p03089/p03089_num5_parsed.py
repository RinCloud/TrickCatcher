def create_sequence(N, b):
    a = []
    for i in range(N):
        a.insert(b[i]-1, i+1)
    return a

def is_possible(N, b):
    a = create_sequence(N, b)
    if a == b:
        return True
    return False

def main():
    N = int(input())
    b = list(map(int, input().split()))
    
    if is_possible(N, b):
        sequence = create_sequence(N, b)
        for num in sequence:
            print(num)
    else:
        print(-1)

if __name__ == "__main__":
    main()