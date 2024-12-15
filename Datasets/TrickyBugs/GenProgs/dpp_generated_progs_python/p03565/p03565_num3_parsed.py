import sys

def main():
    # Read the input from standard input
    s = input().strip()
    t = input().strip()

    n = len(s)
    m = len(t)

    # Start from the end and try to match the string T
    for i in range(n - m, -1, -1):
        match = True
        for j in range(m):
            if s[i + j] != '?' and s[i + j] != t[j]:
                match = False
                break
        
        if match:
            # Found a match, replace the '?' characters with string T
            ans = s[:i] + t + s[i + m:]
            
            # Replace any remaining '?' characters with 'a'
            ans = ans.replace('?', 'a')

            print(ans)
            sys.exit()

    # If no match is found
    print('UNRESTORABLE')

if __name__ == '__main__':
    main()