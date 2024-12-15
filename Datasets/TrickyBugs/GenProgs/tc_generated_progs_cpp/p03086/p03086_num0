#include <stdio.h>
#include <stdbool.h>

// Function to check if a character is an ACGT character
bool isACGT(char ch) {
    return ch == 'A' || ch == 'C' || ch == 'G' || ch == 'T';
}

int main(void)
{
    int maxACGTLength = 0;  // Variable to store the length of the longest ACGT string
    int currentACGTLength = 0;  // Variable to store the length of the current ACGT string
    char s[11];  // Variable to store the input string
    
    scanf("%s",s);
    
    // Iterate through each character in the string
    for (int i = 0; i < 10; i++) {
        // If the character is an ACGT character, increment the length of the current ACGT string
        if (isACGT(s[i])) {
            currentACGTLength++;
        } 
        // If the character is not an ACGT character, update the maxACGTLength if necessary and reset the currentACGTLength to 0
        else {
            if (currentACGTLength > maxACGTLength) {
                maxACGTLength = currentACGTLength;
            }
            currentACGTLength = 0;
        }
    }
 
    // Update the maxACGTLength if necessary (to handle the case when the longest ACGT string is at the end of the input string)
    if (currentACGTLength > maxACGTLength) {
        maxACGTLength = currentACGTLength;
    }
  
    printf("%d\n", maxACGTLength);
    return 0;
}