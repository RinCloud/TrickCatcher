def valid_date(date):
    if not date: # check if date is empty
        return False
    
    # split the date string into month, day, and year components
    components = date.split('-')
    if len(components) != 3: # date should have 3 components
        return False
    
    # check if month is between 1 and 12
    month = int(components[0])
    if month < 1 or month > 12:
        return False
    
    # check if day is between 1 and 31 for certain months
    day = int(components[1])
    if month in [1, 3, 5, 7, 8, 10, 12]:
        if day < 1 or day > 31:
            return False
    
    # check if day is between 1 and 30 for certain months
    if month in [4, 6, 9, 11]:
        if day < 1 or day > 30:
            return False
    
    # check if day is between 1 and 29 for February
    if month == 2:
        if day < 1 or day > 29:
            return False
    
    # check if year is a valid positive integer
    year = int(components[2])
    if year <= 0:
        return False
    
    # if all checks pass, the date is valid
    return True