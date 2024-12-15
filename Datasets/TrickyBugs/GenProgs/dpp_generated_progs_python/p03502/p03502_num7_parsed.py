n = int(input())

def is_harshad(n):
    if n % sum(map(int, str(n))) == 0:
        return "Yes"
    else:
        return "No"

print(is_harshad(n))