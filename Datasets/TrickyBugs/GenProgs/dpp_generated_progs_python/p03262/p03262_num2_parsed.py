# Introduction
1. There are N cities on a number line. The i-th city is located at coordinate x<i>.
2. We need to calculate D, s.t. we can travel from initial coordinate X to coordinate Xi with steps of D.
3. And need to find the maximum value of D that enables you to visit all the cities.

# Approach
1. We need to find the distance between each city and coordinate X.
2. The maximum value of D should be the greatest common divisor (GCD) of the distances between all the cities and coordinate X.

# To Do
1. Get the input values for N and X.
2. Get the coordinates of the cities.
3. Find the distance between each city and coordinate X.
4. Find the GCD of all the distances.
5. Print the maximum value of D.