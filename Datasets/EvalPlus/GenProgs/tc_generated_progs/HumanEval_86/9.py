def anti_shuffle(s):
    if s == '':
        return s
    else:
        s_list = s.split()
        for i in range(len(s_list)):
            s_list[i] = ''.join(sorted(s_list[i]))  # sort characters in each word
        return ' '.join(s_list)