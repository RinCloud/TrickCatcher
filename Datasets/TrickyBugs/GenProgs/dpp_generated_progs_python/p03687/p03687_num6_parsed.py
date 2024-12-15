# Approach:
- Initialize a variable `count` to 0
- Iterate until the length of string `s` is greater than 1
  - Initialize a variable `i` to 0
  - While `i` is less than the length of `s` - 1
    - If the `i`-th character of `s` is not equal to the `(i+1)`-th character of `s`, remove the character at index `i` or `(i+1)` from `s`
    - Increment `count` by 1
    - Increment `i` by 1
- Print `count`