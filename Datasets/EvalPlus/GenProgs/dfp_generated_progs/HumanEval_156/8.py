def int_to_mini_roman(number):
    roman_dict = {
        1000: 'm',
        900: 'cm',
        500: 'd',
        400: 'cd',
        100: 'c',
        90: 'xc',
        50: 'l',
        40: 'xl',
        10: 'x',
        9: 'ix',
        5: 'v',
        4: 'iv',
        1: 'i'
    }
    
    result = ''
    for key in roman_dict.keys():
        while number >= key:
            result += roman_dict[key]
            number -= key
    
    return result.lower()