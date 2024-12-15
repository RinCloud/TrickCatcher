import math
def find_zero(xs: list):
    """
    find_zero find x such that poly(x) = 0.
    """
    if len(xs) % 2 != 0:
        raise ValueError("The list of coefficients must have even length.")
    n = len(xs) - 1
    while True:
        # Generate a random x value within the range (-10, 10)
        x = random.uniform(-10, 10)
        # Evaluate the polynomial at the generated x value
        result = poly(xs, x)
        # Check if the result is close to zero (within a small tolerance)
        if abs(result) < 0.0001:
            return x