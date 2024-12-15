## PLAN ##

1. Read the integers N and SkewerMealData from the standard input.
2. Calculate the number of ways Snuke can make a Skewer Meal using the given SkewerMealData.
3. Print the result modulo 10^9+7.

4. Define a function `skewer_meal_ways(N: int, data: List[Tuple[int, int]]) -> int` that takes integer N and list of tuple data as arguments and returns the number of ways to make a Skewer Meal.
	1. Initialize a variable `total_ways` to zero.
	2. Iterate over the range from 0 to N-1 with variable `i`.
		1. For each `i`, iterate over the range from `i+1` to N with variable `j`.
			1. For each `j`, calculate the number of ways by adding `((data[i][0] + data[j][0]) * (data[i][1] + data[j][1]))` to `total_ways`.
			2. Calculate the number of ways by subtracting `(data[i][0] * data[i][1] + data[j][0] * data[j][1])` from `total_ways`.
	3. Return `total_ways`.

5. Call the function `skewer_meal_ways(N, SkewerMealData)` and pass the given inputs to it.
6. Print the result modulo 10^9+7.