# Plan:
* Start with no cuts
* Iterate over each row and column
* If the current square is white, increase the number of white squares in the current block
* If the number of white squares in the current block exceeds K, increment the number of cuts needed and start a new block
* Print the number of cuts needed