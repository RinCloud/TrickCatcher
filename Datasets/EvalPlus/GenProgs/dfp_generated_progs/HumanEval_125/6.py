def split_words(txt):
    '''
    Given a string of words, return a list of words split on whitespace, if no whitespaces exists in the text you
    should split on commas ',' if no commas exists you should return the number of lower-case letters with odd order in the
    alphabet, ord('a') = 0, ord('b') = 1, ... ord('z') = 25
    Examples
    split_words("Hello world!") ➞ ["Hello", "world!"]
    split_words("Hello,world!") ➞ ["Hello", "world!"]
    split_words("abcdef") == 3 
    '''
    words = txt.split()
    if len(words) == 1:
        words = txt.split(',')
    if len(words) == 1:
        odd_count = sum(1 for x in txt if x.islower() and ord(x) % 2 == 1)
        return odd_count
    else:
        return words