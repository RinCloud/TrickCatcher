def bf(planet1, planet2):
    planets = ('Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune')
    if planet1 not in planets or planet2 not in planets:
        return ()
    index1 = planets.index(planet1)
    index2 = planets.index(planet2)
    if index1 == index2:
        return ()
    start = min(index1, index2) + 1
    end = max(index1, index2)
    result = planets[start:end]
    return tuple(result)