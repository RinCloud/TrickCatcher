def will_it_fly(q,w):
    if q == q[::-1] and sum(q) <= w:
        return True
    else:
        return False