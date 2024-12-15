import sys

def solve(N, jobs):
    sorted_jobs = sorted(jobs, key=lambda x: x[1])
    time = 0
    for job in sorted_jobs:
        time += job[0]
        if time > job[1]:
            return 'No'
    return 'Yes'

if __name__ == "__main__":
    input_data = sys.stdin.read().splitlines()
    N = int(input_data[0])
    jobs = [tuple(map(int, x.split())) for x in input_data[1:]]
    print(solve(N, jobs))