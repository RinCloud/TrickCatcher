def get_closest_vowel(word):
    """You are given a word. Your task is to find the closest vowel that stands between 
    two consonants from the right side of the word (case sensitive).
    
    Vowels in the beginning and ending doesn't count. Return empty string if you didn't
    find any vowel that met the above condition. 
    You may assume that the given string contains English letters only.
    Example:
    get_closest_vowel("yogurt") ==> "u"
    get_closest_vowel("FULL") ==> "U"
    get_closest_vowel("quick") ==> ""
    get_closest_vowel("ab") ==> ""
    """
    vowels = ['a', 'e', 'i', 'o', 'u']
    for i in range(len(word)-2, 0, -1):
        if word[i] in vowels and word[i+1].lower() not in vowels and word[i-1].lower() not in vowels:
            return word[i]
    return ""