def minimum_stool_height(N, heights):
    stools = [0] * N
    for i in range(N-2, -1, -1):
        if heights[i] > heights[i+1]:
            stools[i] = stools[i+1] + 1
    return sum(stools)

if __name__ == "__main__":
    N = int(input().strip())
    heights = list(map(int, input().strip().split()))
    result = minimum_stool_height(N, heights)
    print(result)