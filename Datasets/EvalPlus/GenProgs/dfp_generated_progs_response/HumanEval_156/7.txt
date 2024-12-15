def int_to_mini_roman(number):
    roman_numeral = ''
    numerals = [('m', 1000), ('cm', 900), ('d', 500), ('cd', 400), ('c', 100), ('xc', 90), ('l', 50), ('xl', 40),
                ('x', 10), ('ix', 9), ('v', 5), ('iv', 4), ('i', 1)]
    
    if number > 1000 or number < 1:
        return 'Invalid number'
    
    for numeral, value in numerals:
        while number >= value:
            roman_numeral += numeral
            number -= value
            
    return roman_numeral.lower()