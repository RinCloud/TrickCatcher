from typing import List

def minimum_subarrays(n: int, arr: List[int]) -> int:
    subarrays = 1
    for i in range(1, n):
        if arr[i] != arr[i-1]:
            subarrays += 1
    return subarrays


if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    result = minimum_subarrays(n, arr)
    print(result)