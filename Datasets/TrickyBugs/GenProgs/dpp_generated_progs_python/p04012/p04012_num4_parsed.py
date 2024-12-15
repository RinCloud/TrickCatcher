w = input().strip()

def is_beautiful(w):
    letters = [0] * 26
    
    for char in w:
        index = ord(char) - ord('a')
        letters[index] += 1
    
    for count in letters:
        if count % 2 != 0:
            return False
    
    return True

if is_beautiful(w):
    print("Yes")
else:
    print("No")