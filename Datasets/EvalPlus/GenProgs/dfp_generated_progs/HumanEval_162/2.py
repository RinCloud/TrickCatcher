import hashlib
def string_to_md5(text):
    """
    Given a string 'text', return its md5 hash equivalent string.
    If 'text' is an empty string, return None.
    """
    if text == "":
        return None
    
    md5_hash = hashlib.md5(text.encode()).hexdigest()
    return md5_hash