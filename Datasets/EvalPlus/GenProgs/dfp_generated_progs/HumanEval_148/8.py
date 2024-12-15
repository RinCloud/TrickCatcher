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
    elif planet1 == planet2:
        return ()
    else:
        orbit1 = planets[planet1]
        orbit2 = planets[planet2]
        if orbit1 > orbit2:
            orbit1, orbit2 = orbit2, orbit1
        result = []
        for planet, orbit in planets.items():
            if orbit > orbit1 and orbit < orbit2:
                result.append(planet)
        return tuple(result)