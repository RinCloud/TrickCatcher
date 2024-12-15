n, m = map(int, input().split())

max_Scc_groups = min(n, m // 2)
remaining_c_pieces = m - (2 * max_Scc_groups)

max_Scc_groups += remaining_c_pieces // 4

print(max_Scc_groups)
