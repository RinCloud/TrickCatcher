def anti_shuffle(s):
    if s == '':
        return s
    else:
        s_list = s.split()
        new_s_list = []
        for word in s_list:
            sorted_word = ''.join(sorted(word))
            new_s_list.append(sorted_word)
        return ' '.join(new_s_list)