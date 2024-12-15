def min_balls(N, K, A):
    count = {}
    for i in A:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1
    
    if len(count) <= K:
        return 0
    
    sorted_count = sorted(count.values())
    total = sum(sorted_count[:len(count)-K])
    
    return total