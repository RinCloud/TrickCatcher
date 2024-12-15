def valid_date(date):
    # step 1: check if the date string is not empty
    if not date:
        return False
    
    # step 2: get the day, month, and year from the date string
    parts = date.split('-')
    if len(parts) != 3:
        return False
    month = int(parts[0])
    day = int(parts[1])
    year = int(parts[2])
    
    # step 3: check if the month is valid
    if month < 1 or month > 12:
        return False
    
    # step 4: check if the day is valid based on the month
    if month in [1, 3, 5, 7, 8, 10, 12]:
        if day < 1 or day > 31:
            return False
    elif month in [4, 6, 9, 11]:
        if day < 1 or day > 30:
            return False
    elif month == 2:
        if day < 1 or day > 29:
            return False
    
    # step 5: check if the date is in the format mm-dd-yyyy
    if len(parts[0]) != 2 or len(parts[1]) != 2 or len(parts[2]) != 4:
        return False
    
    # if all the above conditions are satisfied, return True
    return True