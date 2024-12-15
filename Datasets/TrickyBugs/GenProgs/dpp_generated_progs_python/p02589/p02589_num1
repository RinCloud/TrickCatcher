# Start of the program
def main():
    # Read the input
    N = int(input())
    strings = []
    for _ in range(N):
        strings.append(input())

    # Count the number of pairs where Limak can obtain one string from the other
    count = 0
    for i in range(N):
        for j in range(i + 1, N):
            string1 = strings[i]
            string2 = strings[j]
            
            # Check if one string can be obtained from the other
            if len(string1) <= len(string2) and string2.startswith(string1):
                count += 1
            if len(string2) <= len(string1) and string1.startswith(string2):
                count += 1

    # Print the result
    print(count)

# Call the main function
if __name__ == "__main__":
    main()