def valid_date(date):
    if not date:
        return False
    
    date_parts = date.split('-')
    if len(date_parts) != 3:
        return False
    
    month = int(date_parts[0])
    day = int(date_parts[1])
    year = int(date_parts[2])
    
    if month < 1 or month > 12:
        return False
    
    if month in [1, 3, 5, 7, 8, 10, 12]:
        if day < 1 or day > 31:
            return False
    elif month in [4, 6, 9, 11]:
        if day < 1 or day > 30:
            return False
    elif month == 2:
        if day < 1 or day > 29:
            return False
    
    return True