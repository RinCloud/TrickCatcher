def count_verdicts(N, verdicts):
    count_AC = count_WA = count_TLE = count_RE = 0
    
    for verdict in verdicts:
        if verdict == "AC":
            count_AC += 1
        elif verdict == "WA":
            count_WA += 1
        elif verdict == "TLE":
            count_TLE += 1
        elif verdict == "RE":
            count_RE += 1
    
    print(f"AC x {count_AC}")
    print(f"WA x {count_WA}")
    print(f"TLE x {count_TLE}")
    print(f"RE x {count_RE}")

# Get input
N = int(input())
verdicts = []
for _ in range(N):
    verdicts.append(input())

# Call the function
count_verdicts(N, verdicts)