# Plan
To minimize the fatigue level, we will try to teleport whenever it is more efficient than walking.
We will calculate the fatigue increase for walking and teleporting separately and then choose the minimum of the two.

1. Read the input values N, A, B
2. Read the coordinate values X
3. Initialize the total fatigue increase to 0
4. Loop through the coordinate values, starting from the second town
    - Calculate the distance to walk from the previous town to the current town (delta)
    - Calculate the fatigue increase for walking by multiplying delta with A
    - Calculate the fatigue increase for teleporting by multiplying B with the number of towns visited since the last teleport
    - Choose the minimum of the fatigue increase for walking and teleporting
    - Update the total fatigue increase by adding the chosen minimum
5. Print the total fatigue increase