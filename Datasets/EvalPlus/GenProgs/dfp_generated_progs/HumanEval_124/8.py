def valid_date(date):
    if len(date) == 10:
        month, day, year = date.split('-')
        if len(month) == 2 and len(day) == 2 and len(year) == 4:
            if month.isdigit() and day.isdigit() and year.isdigit():
                month = int(month)
                day = int(day)
                year = int(year)
                if month >= 1 and month <= 12:
                    if month in [1, 3, 5, 7, 8, 10, 12] and day >= 1 and day <= 31:
                        return True
                    elif month in [4, 6, 9, 11] and day >= 1 and day <= 30:
                        return True
                    elif month == 2:
                        if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
                            if day >= 1 and day <= 29:
                                return True
                            else:
                                return False
                        else:
                            if day >= 1 and day <= 28:
                                return True
                            else:
                                return False
    return False