# Program

def count_verdicts(N, S):
    AC = 0
    WA = 0
    TLE = 0
    RE = 0
    for i in range(N):
        if S[i] == 'AC':
            AC += 1
        elif S[i] == 'WA':
            WA += 1
        elif S[i] == 'TLE':
            TLE += 1
        elif S[i] == 'RE':
            RE += 1
    
    print(f'AC x {AC}')
    print(f'WA x {WA}')
    print(f'TLE x {TLE}')
    print(f'RE x {RE}')


if __name__ == "__main__":
    N = int(input())
    S = []
    for _ in range(N):
        verdict = input()
        S.append(verdict)
    
    count_verdicts(N, S)