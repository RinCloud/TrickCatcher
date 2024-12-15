# In the following program, we will first take input the 3x3 grid and save it in a list of lists.
# Then, we will check if any of the rows, columns or diagonals have all three numbers marked.
# If yes, we will print "Yes" else we will print "No".

def bingo_card():
    # Taking input the 3x3 grid
    a = []
    for _ in range(3):
        row = list(map(int, input().split()))
        a.append(row)

    n = int(input()) # Taking input the number of chosen numbers
    chosen_numbers = []
    for _ in range(n):
        chosen = int(input())
        chosen_numbers.append(chosen)

    # Checking for a bingo
    for row in a:
        if set(row) <= set(chosen_numbers):
            return "Yes"

    for col in range(3):
        if {a[i][col] for i in range(3)} <= set(chosen_numbers):
            return "Yes"

    if {(a[i][i] if i < 3 else None) for i in range(3)} <= set(chosen_numbers):
        return "Yes"

    if {(a[i][2 - i] if i < 3 else None) for i in range(3)} <= set(chosen_numbers):
        return "Yes"

    return "No"

# Testing the function
print(bingo_card())