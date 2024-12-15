# Program

N = int(input())
verdicts = []
for i in range(N):
    verdicts.append(input())

counts = {
    "AC": 0,
    "WA": 0,
    "TLE": 0,
    "RE": 0
}

for verdict in verdicts:
    counts[verdict] += 1

print("AC x", counts["AC"])
print("WA x", counts["WA"])
print("TLE x", counts["TLE"])
print("RE x", counts["RE"])