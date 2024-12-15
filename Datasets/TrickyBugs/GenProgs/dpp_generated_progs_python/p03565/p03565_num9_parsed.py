import sys

def main():
    S = sys.stdin.readline().strip()
    T = sys.stdin.readline().strip()

    n_s = len(S)
    n_t = len(T)
    res = ""

    # Iterate over all possible positions to start the substring match
    for i in range(n_s - n_t + 1):
        j = 0
        found = True
        
        # Check if substring starting at position i matches T
        while j < n_t:
            if S[i+j] == "?" or S[i+j] == T[j]:
                j += 1
            else:
                found = False
                break
        
        # If substring matches T and S is lexicographically smaller than existing result, update the result
        if found and (res == "" or S[:i] + T + S[i+n_t:] < res):
            res = S[:i] + T + S[i+n_t:]
    
    if res != "":
        print(res)
    else:
        print("UNRESTORABLE")

if __name__ == "__main__":
    main()