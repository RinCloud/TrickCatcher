def triples_sum_to_zero(l: list):
    for i in range(len(l)-2):
        for j in range(i+1, len(l)-1):
            for k in range(j+1, len(l)):
                if l[i] + l[j] + l[k] == 0:
                    return True
    return False