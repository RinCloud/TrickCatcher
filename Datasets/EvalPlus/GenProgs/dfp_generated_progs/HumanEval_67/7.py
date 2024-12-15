def fruit_distribution(s, n):
    """
    Given a string that represents the total number of apples and oranges in a fruit basket,
    and an integer that represents the total number of fruits in the basket,
    return the number of mango fruits in the basket.
    Args:
    - s: a string that represents the total number of apples and oranges in the basket
    - n: an integer that represents the total number of fruits in the basket
    Returns:
    - the number of mango fruits in the basket (n - apples - oranges)
    """
    # Split the string into words
    words = s.split()
    # Initialize variables
    apples = 0
    oranges = 0
    # Iterate through the words
    for word in words:
        # Check if the word is "apples" or "oranges"
        if word == "apples":
            # Get the previous word and convert it to an integer
            apples = int(words[words.index(word) - 1])
        elif word == "oranges":
            # Get the previous word and convert it to an integer
            oranges = int(words[words.index(word) - 1])
    # Calculate the number of mango fruits
    mangoes = n - apples - oranges
    return mangoes