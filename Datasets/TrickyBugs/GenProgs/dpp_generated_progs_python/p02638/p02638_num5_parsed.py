# Given are integers N and K, and a prime number P. Find the number, modulo P, of directed graphs G with N vertices that satisfy below. Here, the vertices are distinguishable from each other.
# * G is a tournament, that is, G contains no duplicated edges or self-loops, and exactly one of the edges u\to v and v\to u exists for any two vertices u and v.
# * The in-degree of every vertex in G is at most K.
# * For any four distinct vertices a, b, c, and d in G, it is not the case that all of the six edges a\to b, b\to c, c\to a, a\to d, b\to d, and c\to d exist simultaneously.

from math import factorial

def count_graphs(N, K, P):
    # Calculate number of graphs using the formula:
    # (N! * pow((N - K - 1)!, N - K)) % P
    num_graphs = (factorial(N) * pow(factorial(N - K - 1), N - K, P)) % P
    return num_graphs

# Read input values
N, K, P = map(int, input().split())

# Calculate and print the number of graphs
num_graphs = count_graphs(N, K, P)
print(num_graphs)