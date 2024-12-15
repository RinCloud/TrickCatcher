'''
def main():
    N, M = map(int, input().split())

    red_ball = [1] + [0] * (N - 1)
    box_count = [1] * N

    for _ in range(M):
        x, y = map(int, input().split())
        x -= 1
        y -= 1

        if red_ball[x]:
            red_ball[y] = 1

        box_count[x] -= 1
        box_count[y] += 1

        if box_count[x] == 0:
            red_ball[x] = 0

    count = sum(red_ball)
    print(count)

if __name__ == '__main__':
    main()
'''