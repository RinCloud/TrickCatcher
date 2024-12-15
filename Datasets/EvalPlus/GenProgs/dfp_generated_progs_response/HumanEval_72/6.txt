def will_it_fly(q, w):
    return q == q[::-1] and sum(q) <= w