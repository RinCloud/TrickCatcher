# Solution

## Approach
To determine if the string `w` is beautiful, we need to check if each lowercase letter of the English alphabet occurs an even number of times in `w`. We can achieve this by counting the frequency of each letter in `w` and then checking if all the frequencies are even.

## Steps
1. Initialize a dictionary `freq` to store the frequency of each lowercase letter.
2. Iterate through each character `c` in `w`.
   - If `c` is not already in `freq`, add `c` as a key with a value of 1.
   - Otherwise, increment the value of `c` in `freq` by 1.
3. Check if all the values in `freq` are even.
   - If all values are even, print "Yes".
   - Otherwise, print "No".

## Complexity Analysis
The time complexity for this approach is O(n), where n is the length of the string `w`. This is because we iterate through each character of `w` once to count the frequency of each letter. The space complexity is also O(n) because we store the frequency of each letter in a dictionary.