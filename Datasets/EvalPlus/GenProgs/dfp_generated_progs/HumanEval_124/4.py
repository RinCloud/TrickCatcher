def valid_date(date):
    # Check if the date string is empty
    if not date:
        return False
    
    # Split the date string into month, day, and year
    date_parts = date.split('-')
    if len(date_parts) != 3:
        return False
    
    month, day, year = date_parts
    
    # Check if month is a valid number between 1 and 12
    if not month.isdigit() or int(month) < 1 or int(month) > 12:
        return False
    
    # Check if day is a valid number between 1 and 31, depending on the month
    if not day.isdigit() or int(day) < 1 or int(day) > 31:
        return False
    
    # Check if year is a valid number
    if not year.isdigit():
        return False
    
    # Convert month, day, and year to integers
    month = int(month)
    day = int(day)
    year = int(year)
    
    # Check if the number of days is valid for the given month
    if month in [1, 3, 5, 7, 8, 10, 12]:
        if day < 1 or day > 31:
            return False
    elif month in [4, 6, 9, 11]:
        if day < 1 or day > 30:
            return False
    elif month == 2:
        # Check if the year is a leap year
        if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
            if day < 1 or day > 29:
                return False
        else:
            if day < 1 or day > 28:
                return False
    
    return True