def sort_array(arr):
    # Define a helper function to count the number of ones in the binary representation of a number
    def count_ones(num):
        return bin(num).count('1')
    
    # Sort the array using the count_ones function as the key
    return sorted(arr, key=lambda x: (count_ones(x), x))