def triples_sum_to_zero(l: list):
    """
    triples_sum_to_zero takes a list of integers as an input.
    it returns True if there are three distinct elements in the list that
    sum to zero, and False otherwise.
    """
    def two_sum(nums, target):
        complements = {}
        for num in nums:
            complement = target - num
            if complement in complements:
                return True
            complements[num] = complement
        return False
    
    n = len(l)
    if n < 3:
        return False
    
    for i in range(n-2):
        for j in range(i+1, n-1):
            complement = -l[i] - l[j]
            if two_sum(l[j+1:], complement):
                return True
            
    return False