# Python program to find minimum number of characters need to be changed

def min_characters_change(S, T):
    min_changes = float('inf')
    
    for i in range(len(S) - len(T) + 1):
        changes = 0
        for j in range(len(T)):
            if S[i+j] != T[j]:
                changes += 1
        min_changes = min(min_changes, changes)
        
    return min_changes

# Driver code
if __name__ == "__main__":
    S = input().strip()
    T = input().strip()
    
    print(min_characters_change(S, T))