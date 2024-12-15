# Plan

To collect all the balls, we need to activate each robot in a specific order. The order in which we activate the robots is crucial. 

1. First, we need to sort the balls based on their coordinates in ascending order. 
2. Then, we need to count the number of type A and type B robots required to collect each ball.
3. We need to calculate the factorial of the number of type A robots and the number of type B robots separately.
4. The total number of possible orders is the product of the factorials of the number of type A robots and the number of type B robots.

Let's implement this plan in code.