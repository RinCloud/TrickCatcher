# Introduction
1. We have given three values N, K, A (sequence of N integers).
2. We have another sequence of N*K integers.
- X=(X_0, X_1, ..., X_(N*K-1))
  - Pair X_{i \times N + j}=A_j holds for (0<=i<=K-1, 0<=j<=N-1)
3. We have an empty sequence s.
4. For each i=0,1,2,...,N*K-1, Snuke will perform the following operations:
  - If s does not contain X_i, add X_i to the end of s.
  - If s does contain X_i, repeatedly delete an element from the end of s until s no longer contains X_i.

# Approach
1. Create a set s_set containing elements of s.
2. Iterate for each i in range(N*K):
   - if X_i not in s_set, add X_i in s_set.
   - If s_set contains X_i, then delete the element from s_set until the last element not in s_set.
3. Iterate a in A:
   - If a in s, add a in s_sorted.
4. Print elements of s_sorted.
   
# To do
1. Implement the empty_set function which returns a set without any elements.
2. Implement the append_set function which adds an item in the set.
3. Implement the iterate_X function which returns iterate for each i in range(N*K).
4. Implement the iterate_A function which returns iterate for a in A.
5. Implement the main function which implements the above approach.