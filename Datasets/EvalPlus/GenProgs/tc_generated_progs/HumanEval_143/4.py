def words_in_sentence(sentence):
    primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31]
    words = sentence.split()
    
    return ' '.join(word for word in words if len(word) in primes)