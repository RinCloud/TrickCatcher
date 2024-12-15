def is_possible(n, a, b, c, d, s):
    # Check if there are rocks that prevent the players from reaching their destinations
    if "#" in s[a - 1:c] or "#" in s[b - 1:d]:
        return "No"

    # Check if Snuke can reach C before Fnuke reaches D
    if c < d:
        # Check if there is an empty square between Snuke and Fnuke
        if "#" in s[b - 2:d - 1]:
            return "No"
        else:
            return "Yes"
    else:
        # Check if there is an empty square between Snuke and Fnuke
        if "#" in s[b - 2:d - 1]:
            return "No"
        # Check if there is an empty square between C and D
        elif "." in s[d - 2:c]:
            return "Yes"
        else:
            return "No"


n, a, b, c, d = map(int, input().split())
s = input()

print(is_possible(n, a, b, c, d, s))