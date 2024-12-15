def valid_date(date):
    """You have to write a function which validates a given date string and
    returns True if the date is valid otherwise False.
    The date is valid if all of the following rules are satisfied:
    1. The date string is not empty.
    2. The number of days is not less than 1 or higher than 31 days for months 1,3,5,7,8,10,12. And the number of days is not less than 1 or higher than 30 days for months 4,6,9,11. And, the number of days is not less than 1 or higher than 29 for the month 2.
    3. The months should not be less than 1 or higher than 12.
    4. The date should be in the format: mm-dd-yyyy
    for example: 
    valid_date('03-11-2000') => True
    valid_date('15-01-2012') => False
    valid_date('04-0-2040') => False
    valid_date('06-04-2020') => True
    valid_date('06/04/2020') => False
    """
    # Check if the date string is not empty
    if not date:
        return False
    
    # Split the date string into month, day, and year
    parts = date.split('-')
    
    # Check if there are three parts: month, day, and year
    if len(parts) != 3:
        return False
    
    # Extract month, day, and year
    month = parts[0]
    day = parts[1]
    year = parts[2]
    
    # Check if the month is valid (between 1 and 12)
    if not 1 <= int(month) <= 12:
        return False
    
    # Check if the day is valid based on the month
    if month in ["01", "03", "05", "07", "08", "10", "12"]:
        if not 1 <= int(day) <= 31:
            return False
    elif month in ["04", "06", "09", "11"]:
        if not 1 <= int(day) <= 30:
            return False
    elif month == "02":
        # Check for leap year
        if int(year) % 4 == 0:
            if int(year) % 100 == 0:
                if int(year) % 400 == 0:
                    if not 1 <= int(day) <= 29:
                        return False
                else:
                    if not 1 <= int(day) <= 28:
                        return False
            else:
                if not 1 <= int(day) <= 29:
                    return False
        else:
            if not 1 <= int(day) <= 28:
                return False
    
    return True