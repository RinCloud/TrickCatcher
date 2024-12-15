def valid_date(date):
    if date == '':
        return False
    else:
        date = date.split('-')
        if len(date)!= 3:
            return False
        else:
            month = int(date[0])
            day = int(date[1])
            year = int(date[2])
            
            if month < 1 or month > 12:
                return False
            
            if month in [1, 3, 5, 7, 8, 10, 12]:
                if day < 1 or day > 31:
                    return False
            elif month in [4, 6, 9, 11]:
                if day < 1 or day > 30:
                    return False
            elif month == 2:
                if year % 4 == 0:
                    if day < 1 or day > 29:
                        return False
                else:
                    if day < 1 or day > 28:
                        return False
            
            if year < 1900 or year > 2020:
                return False
            
            return True