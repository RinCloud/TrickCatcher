def image_contains_template(n, m, a, b):
    for i in range(n-m+1):
        for j in range(n-m+1):
            match = True
            for p in range(m):
                for q in range(m):
                    if a[i+p][j+q] != b[p][q]:
                        match = False
                        break
                if not match:
                    break
            if match:
                return "Yes"
    return "No"

n, m = map(int, input().split())
a = [input() for _ in range(n)]
b = [input() for _ in range(m)]
print(image_contains_template(n, m, a, b))