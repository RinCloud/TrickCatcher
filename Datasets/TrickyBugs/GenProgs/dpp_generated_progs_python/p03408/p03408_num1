# Prompt

Takahashi has N blue cards and M red cards. A string is written on each card. The string written on the i-th blue card is s_i, and the string written on the i-th red card is t_i.

Takahashi will now announce a string, and then check every card. Each time he finds a blue card with the string announced by him, he will earn 1 yen (the currency of Japan); each time he finds a red card with that string, he will lose 1 yen.

Here, we only consider the case where the string announced by Takahashi and the string on the card are exactly the same. For example, if he announces `atcoder`, he will not earn money even if there are blue cards with `atcoderr`, `atcode`, `btcoder`, and so on. (On the other hand, he will not lose money even if there are red cards with such strings, either.)

At most how much can he earn on balance?

Note that the same string may be written on multiple cards.

# Plan

To solve this problem, we will iterate over each card, count the number of blue cards and reduce that value by the number of red cards. Finally, we will print the result.

1. Read the integer value for N.
2. Create an empty counter to store the blue cards.
3. Iterate N times and for each iteration, read the string value and increment the value in the counter dictionary.
4. Read the integer value for M.
5. Create an empty counter to store the red cards.
6. Iterate M times and for each iteration, read the string value and increment the value in the counter dictionary.
7. Set the variable max_balance to 0.
8. For each item in the blue cards counter dictionary, retrieve the value and minimize it with the value in the red cards counter dictionary.
9. If the minimized value is greater than the current max_balance, update it with the minimized value.
10. Print the final value of max_balance.