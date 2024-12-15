def words_string(s):
    return list(filter(None, re.split('[, ]', s)))