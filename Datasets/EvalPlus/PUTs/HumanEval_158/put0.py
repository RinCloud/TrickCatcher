
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    find_max(["aaaaaaa", "bb" ,"cc"]) == ""aaaaaaa"
    """
    max_word = None
    max_unique = 0
    for word in words:
        unique = len(set(word))
        if unique > max_unique:
            max_unique = unique
            max_word = word
        elif unique == max_unique:
            if word < max_word:
                max_word = word
    return max_word
