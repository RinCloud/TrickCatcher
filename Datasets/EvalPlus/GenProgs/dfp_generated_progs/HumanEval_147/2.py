from itertools import combinations
def get_max_triples(n):
    """
    You are given a positive integer n. You have to create an integer array a of length n.
        For each i (1 ≤ i ≤ n), the value of a[i] = i * i - i + 1.
        Return the number of triples (a[i], a[j], a[k]) of a where i < j < k, 
    and a[i] + a[j] + a[k] is a multiple of 3.
    Example :
        Input: n = 5
        Output: 1
        Explanation: 
        a = [1, 3, 7, 13, 21]
        The only valid triple is (1, 7, 13).
    """
    
    # Create the integer array a
    a = [i * i - i + 1 for i in range(1, n+1)]
    
    # Find all possible triples using combinations
    triples = list(combinations(a, 3))
    
    # Count the number of triples where the sum is a multiple of 3
    count = 0
    for triple in triples:
        if sum(triple) % 3 == 0:
            count += 1
    
    return count