import sys

def can_complete_jobs(N, jobs):
    current_time = 0
    
    for job in jobs:
        time_to_complete = job[0]
        deadline = job[1]
        
        if current_time + time_to_complete > deadline:
            return 'No'
        
        current_time += time_to_complete
    
    return 'Yes'

def main():
    # Read input
    N = int(input())
    jobs = []
    for _ in range(N):
        A, B = map(int, input().split())
        jobs.append((A, B))
    
    # Calculate result
    result = can_complete_jobs(N, jobs)
    
    # Print result
    print(result)

if __name__ == '__main__':
    main()