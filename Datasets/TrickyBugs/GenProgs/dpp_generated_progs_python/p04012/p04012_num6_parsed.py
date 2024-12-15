import collections

def is_beautiful(w):
    counter = collections.Counter(w)
    for count in counter.values():
        if count % 2 != 0:
            return "No"
    return "Yes"

w = input().strip()
print(is_beautiful(w))