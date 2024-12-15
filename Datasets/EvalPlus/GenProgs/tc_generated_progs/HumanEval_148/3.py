def bf(planet1, planet2):
    planet_list = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn",
                   "Uranus", "Neptune"]
    if planet1 not in planet_list or planet2 not in planet_list:
        return ()
    else:
        if planet1 < planet2:
            a = planet_list.index(planet1)
            b = planet_list.index(planet2)
            if a > b:
                a, b = b, a
            return tuple(planet_list[a+1:b])
        else:
            return tuple(planet_list[planet_list.index(planet2)+1:planet_list.index(planet1)])