def can_complete_jobs(n, jobs):
    jobs.sort(key=lambda x: x[1]) # sort jobs by deadline
    time = 0
    for job in jobs:
        time += job[0] # add the time it takes to complete the job
        if time > job[1]: # if the completion time exceeds the deadline
            return "No" # return No
    return "Yes" # if all jobs can be completed within the deadlines, return Yes

n = int(input())
jobs = []
for _ in range(n):
    a, b = map(int, input().split())
    jobs.append((a, b))

print(can_complete_jobs(n, jobs))