def is_multiply_prime(a):
    if a < 100:
        for i in range(2, 10):
            for j in range(2, 10):
                for k in range(2, 10):
                    if i != j and i != k and j != k:
                        if i * j * k == a:
                            return True
        return False