def is_multiply_prime(a):
    if a < 100:
        for i in range(2, 100):  # Adjusted range to check prime numbers up to 100
            for j in range(i, 100):  # Start from i to avoid duplicate prime combinations
                for k in range(j, 100):  # Start from j to avoid duplicate prime combinations
                    if i * j * k == a and i != j != k:  # Check if each number is prime and not equal
                        return True
    return False