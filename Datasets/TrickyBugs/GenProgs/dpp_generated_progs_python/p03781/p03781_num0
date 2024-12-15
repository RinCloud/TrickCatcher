def earliest_possible_time(X):
    time = 0
    position = 0
    jump_length = 1

    while position != X:
        if position > X:
            position -= jump_length
        else:
            position += jump_length

        jump_length += 1
        time += 1

    return time

X = int(input())
print(earliest_possible_time(X))