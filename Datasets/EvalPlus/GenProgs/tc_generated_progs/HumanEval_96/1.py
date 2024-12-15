def count_up_to(n):
    prime_list = []
    for i in range(2, n):
        prime = True
        for j in range(2, i):
            if i % j == 0:
                prime = False
                break
        if prime:
            prime_list.append(i)
    return prime_list