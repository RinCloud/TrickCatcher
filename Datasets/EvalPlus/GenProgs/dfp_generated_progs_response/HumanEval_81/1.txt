def numerical_letter_grade(grades):
    letter_grades = []
    for grade in grades:
        if grade == 4.0:
            letter_grades.append('A+')
        elif grade > 3.7:
            letter_grades.append('A')
        elif grade > 3.3:
            letter_grades.append('A-')
        elif grade > 3.0:
            letter_grades.append('B+')
        elif grade > 2.7:
            letter_grades.append('B')
        elif grade > 2.3:
            letter_grades.append('B-')
        elif grade > 2.0:
            letter_grades.append('C+')
        elif grade > 1.7:
            letter_grades.append('C')
        elif grade > 1.3:
            letter_grades.append('C-')
        elif grade > 1.0:
            letter_grades.append('D+')
        elif grade > 0.7:
            letter_grades.append('D')
        elif grade > 0.0:
            letter_grades.append('D-')
        else:
            letter_grades.append('E')
    return letter_grades