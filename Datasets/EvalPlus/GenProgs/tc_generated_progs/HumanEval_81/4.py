def numerical_letter_grade(grades):
    grades = grades or []
    if not grades:
        return []
    letter_grades = [0] * len(grades)
    for i, grade in enumerate(grades):
        if grade == 4.0:
            letter_grades[i] = 'A+'
        elif grade > 3.7:
            letter_grades[i] = 'A'
        elif grade > 3.3:
            letter_grades[i] = 'A-'
        elif grade > 3.0:
            letter_grades[i] = 'B+'
        elif grade > 2.7:
            letter_grades[i] = 'B'
        elif grade > 2.3:
            letter_grades[i] = 'B-'
        elif grade > 2.0:
            letter_grades[i] = 'C+'
        elif grade > 1.7:
            letter_grades[i] = 'C'
        elif grade > 1.3:
            letter_grades[i] = 'C-'
        elif grade > 1.0:
            letter_grades[i] = 'D+'
        elif grade > 0.7:
            letter_grades[i] = 'D'
        elif grade >= 0.0:
            letter_grades[i] = 'D-'
        else:
            letter_grades[i] = 'E'
    return letter_grades