def int_to_mini_roman(number):
    roman_numerals = {1000: 'm', 900: 'cm', 500: 'd', 400: 'cd', 100: 'c', 90: 'xc',
                      50: 'l', 40: 'xl', 10: 'x', 9: 'ix', 5: 'v', 4: 'iv', 1: 'i'}
    result = ''
    for num in roman_numerals:
        while number >= num:
            result += roman_numerals[num]
            number -= num
    return result.lower()