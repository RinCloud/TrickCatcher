def valid_date(date):
    if date == '':
        return False
    else:
        date = date.split('-')
        if len(date)!= 3 or any(not i.isdigit() for i in date):
            return False
        else:
            month, day, year = map(int, date)
            if month < 1 or month > 12:
                return False
            elif month in [1, 3, 5, 7, 8, 10, 12]:
                if day < 1 or day > 31:
                    return False
            elif month in [4, 6, 9, 11]:
                if day < 1 or day > 30:
                    return False
            elif month == 2:
                if day < 1 or day > 29:
                    return False
            else:
                return False
            if year < 1900 or year > 2020:
                return False
            
            return True