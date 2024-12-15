import sys

def get_min_distance(A, B, Q, shrines, temples, queries):
    inf = float("inf")
    min_distance = []
    
    shrines.insert(0, -inf)
    shrines.append(inf)
    temples.insert(0, -inf)
    temples.append(inf)
    
    for i in range(Q):
        x = queries[i]
        min_dist = inf
        
        left_shrine_index = bisect_right(shrines, x)
        left_temple_index = bisect_right(temples, x)
        
        for shrine_index in [left_shrine_index-1, left_shrine_index]:
            for temple_index in [left_temple_index-1, left_temple_index]:
                dist = abs(shrines[shrine_index] - x) + abs(shrines[shrine_index] - temples[temple_index])
                min_dist = min(min_dist, dist)
        
        for shrine_index in [left_shrine_index-1, left_shrine_index]:
            for temple_index in [left_temple_index-1, left_temple_index]:
                dist = abs(temples[temple_index] - x) + abs(shrines[shrine_index] - temples[temple_index])
                min_dist = min(min_dist, dist)
                
        min_distance.append(min_dist)
    
    return min_distance

def main():
    input_data = sys.stdin.readlines()
    
    A, B, Q = map(int, input_data[0].split())
    shrines = [int(x) for x in input_data[1:A+1]]
    temples = [int(x) for x in input_data[A+1:B+A+1]]
    queries = [int(x) for x in input_data[B+A+1:]]
    
    result = get_min_distance(A, B, Q, shrines, temples, queries)
    
    for res in result:
        print(res)

if __name__ == '__main__':
    main()