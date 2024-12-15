def tri(n):
    def tri_helper(n):
        if n == 0:
            return 1
        elif n == 1:
            return 3
        elif n == 2:
            return 2
        elif n % 2 == 0:
            return 1 + n / 2
        else:
            return tri_helper(n - 1) + tri_helper(n - 2) + tri_helper(n - 3)
    return [tri_helper(i) for i in range(n + 1)]