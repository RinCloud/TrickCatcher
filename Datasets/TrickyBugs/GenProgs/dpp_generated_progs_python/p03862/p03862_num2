import sys

def min_operations(n, x, boxes):
    operations = 0
    
    for i in range(1, n):
        total_candies = boxes[i-1] + boxes[i]
        
        if total_candies > x:
            extra_candies = total_candies - x
            candies_to_eat = min(extra_candies, boxes[i])
            boxes[i] -= candies_to_eat
            operations += candies_to_eat
    
    return operations

if __name__ == "__main__":
    n, x = map(int, input().split())
    boxes = list(map(int, input().split()))
    
    result = min_operations(n, x, boxes)
    
    print(result)