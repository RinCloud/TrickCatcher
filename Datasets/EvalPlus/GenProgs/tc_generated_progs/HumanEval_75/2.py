def is_multiply_prime(a):
    if a < 100:
        for i in range(2, 10):
            for j in range(2, 10):
                for k in range(2, 10):
                    if i != j and j != k and k != i:  # Ensure unique prime numbers
                        if i * j * k == a:
                            return True
        return False