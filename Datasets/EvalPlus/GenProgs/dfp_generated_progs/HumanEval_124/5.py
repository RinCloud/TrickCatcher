import re
def valid_date(date):
    # check if the date string is not empty
    if date == '':
        return False
    
    # check if the date is in the format mm-dd-yyyy
    if not re.match(r'\d{2}-\d{2}-\d{4}', date):
        return False
    
    # extract the month, day, and year from the date string
    month, day, year = map(int, date.split('-'))
    
    # check if the month is between 1 and 12
    if month < 1 or month > 12:
        return False
    
    # check if the day is valid for the given month and year
    if month == 2:
        # check for leap year for February
        if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
            if day < 1 or day > 29:
                return False
        else:
            if day < 1 or day > 28:
                return False
    elif month in [4, 6, 9, 11]:
        if day < 1 or day > 30:
            return False
    else:
        if day < 1 or day > 31:
            return False
    
    # if all checks pass, return True
    return True