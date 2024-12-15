def valid_date(date):
    if date == '':
        return False
    else:
        date = date.split('-')
        if len(date)!= 3:
            return False
        else:
            if date[0] == '' or date[1] == '' or date[2] == '':
                return False
            else:
                month = int(date[0])
                day = int(date[1])
                year = int(date[2])
                if month < 1 or month > 12:
                    return False
                else:
                    if (month == 2 and (day < 1 or day > 29)):
                        return False
                    elif month in [4, 6, 9, 11] and (day < 1 or day > 30):
                        return False
                    elif day < 1 or day > 31:
                        return False
                    else:
                        if year < 1900 or year > 2020:
                            return False
                        return True