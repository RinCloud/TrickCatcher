def bf(planet1, planet2):
    planet_list = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn",
                   "Uranus", "Neptune"]
    
    if planet1 not in planet_list or planet2 not in planet_list:
        return ()
    
    else:
        a = planet_list.index(planet1)
        b = planet_list.index(planet2)
        
        if a == b or abs(a - b) == 1:
            return ()
        
        start = min(a, b)
        end = max(a, b)
        
        result = planet_list[start+1:end]
        return tuple(result)