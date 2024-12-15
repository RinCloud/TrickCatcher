import sys

def main():
    # read input from STDIN
    n, m = map(int, sys.stdin.readline().strip().split())
    votes = list(map(int, sys.stdin.readline().strip().split()))
    
    # sort the votes in descending order
    votes.sort(reverse=True)
    
    # calculate the minimum number of votes required
    threshold = sum(votes) // (4 * m)
    
    # check if M popular items can be selected
    if votes[m-1] >= threshold:
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()