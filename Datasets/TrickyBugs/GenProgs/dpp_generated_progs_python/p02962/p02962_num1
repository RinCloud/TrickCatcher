import sys

def max_i(s, t):
    ls = len(s)
    lt = len(t)

    if t in s:
        # If t is already a substring of s, the maximum value of i is infinity
        return -1
    elif set(t) - set(s):
        # If there are any characters in t that are not present in s, the maximum value of i is 0
        return 0
    else:
        # Find the maximum value of i
        max_i = 0
        for i in range(1, min(ls // lt + 2, lt + 1)):
            j = 0
            while j + i * lt <= ls:
                temp_s = s[j: j + i * lt]
                if t * i in temp_s:
                    max_i = i
                    j += i * lt
                else:
                    break

        return max_i

if __name__ == "__main__":
    s = sys.stdin.readline().strip()
    t = sys.stdin.readline().strip()
    result = max_i(s, t)
    print(result)