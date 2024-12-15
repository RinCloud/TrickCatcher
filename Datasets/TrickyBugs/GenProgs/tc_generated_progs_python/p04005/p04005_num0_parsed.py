A, B, C = map(int, input().split())

# Calculate the six possible differences
diff1 = abs(A * B - C)
diff2 = abs(A * C - B)
diff3 = abs(B * C - A)

# Print the minimum difference
print(min(diff1, diff2, diff3))
