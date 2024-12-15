def words_in_sentence(sentence):
    """
    You are given a string representing a sentence,
    the sentence contains some words separated by a space,
    and you have to return a string that contains the words from the original sentence,
    whose lengths are prime numbers,
    the order of the words in the new string should be the same as the original one.
    Example 1:
        Input: sentence = "This is a test"
        Output: "is"
    Example 2:
        Input: sentence = "lets go for swimming"
        Output: "go for"
    Constraints:
        * 1 <= len(sentence) <= 100
        * sentence contains only letters
    """
    # Get the list of prime numbers up to the maximum length of a word possible
    primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31]
    # Split the sentence into words
    words = sentence.split()
    # Filter the words based on their lengths being prime numbers
    prime_words = [word for word in words if len(word) in primes]
    # Return the filtered words as a single string separated by space
    return ' '.join(prime_words)