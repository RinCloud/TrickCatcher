def bf(planet1, planet2):
    planets = {
        "Mercury": 1,
        "Venus": 2,
        "Earth": 3,
        "Mars": 4,
        "Jupiter": 5,
        "Saturn": 6,
        "Uranus": 7,
        "Neptune": 8
    }
    if planet1 not in planets or planet2 not in planets:
        return ()
    
    start = planets[planet1]
    end = planets[planet2]
    
    if start > end:
        start, end = end, start
    
    result = []
    for planet, orbit in planets.items():
        if start < orbit < end:
            result.append(planet)
    
    return tuple(result)