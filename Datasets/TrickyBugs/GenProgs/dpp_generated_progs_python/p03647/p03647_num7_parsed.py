'''
Approach:
We need to find if there exist two boat services that can be used to go from Island 1 to Island N. 
We will iterate through all possible pairs of boat services and check if there is any common island between them. 
If there is, then it is possible to go from Island 1 to Island N using these two boat services.
'''

def is_possible(N: int, M: int, services: List[Tuple[int, int]]) -> str:
    # Create a set of all islands
    islands = set(range(2, N))
    
    # Iterate over all possible pairs of boat services
    for i in range(M):
        for j in range(i+1, M):
            # Get the islands connected by the current pair of boat services
            (a1, b1) = services[i]
            (a2, b2) = services[j]
            
            # Check if there is any common island between the two pairs of boat services
            if a1 in (a2, b2) or b1 in (a2, b2):
                return "POSSIBLE"
    
    return "IMPOSSIBLE"
                