# Approach:

We will iterate through each operation and update the integers on the cards accordingly. To optimize the process, we will iterate in reverse order, starting from the last operation.

For each operation, we will check the maximum possible sum of the integers on the cards after updating with the current operation. If the sum increases, we update the integers accordingly. This way, we ensure that we choose the best cards and operations to maximize the sum.

Finally, we print the maximum possible sum of the integers on the cards after all the operations.

# Program: