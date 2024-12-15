def is_multiply_prime(a):
    if a < 100:
        for i in range(2, 100):  # Change the range to 100
            for j in range(2, 100):  # Change the range to 100
                for k in range(2, 100):  # Change the range to 100
                    if i != j and j != k and i != k:  # Check that i, j, and k are distinct
                        if i * j * k == a:
                            return True
        return False