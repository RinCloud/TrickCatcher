#include <iostream>
#include <vector>
#include <map>

const int MOD = 998244353;
const long long int BASE = 1000000000000000000;

void addEdge(std::map<long long int, int>& vertices, const long long int& u, const long long int& v) {
    vertices[u]++;
    vertices[v]++;
}

long long int modPow(long long int base, long long int exponent) {
    long long int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

int main() {
    int N;
    std::cin >> N;

    std::map<long long int, int> vertices;
    std::vector<int> X_edges, Y_edges, Z_edges;

    // Read X edges
    int M1;
    std::cin >> M1;
    for (int i = 0; i < M1; i++) {
        int u, v;
        std::cin >> u >> v;
        X_edges.push_back(u);
        X_edges.push_back(v);
    }

    // Read Y edges
    int M2;
    std::cin >> M2;
    for (int i = 0; i < M2; i++) {
        int u, v;
        std::cin >> u >> v;
        Y_edges.push_back(u);
        Y_edges.push_back(v);
    }

    // Read Z edges
    int M3;
    std::cin >> M3;
    for (int i = 0; i < M3; i++) {
        int u, v;
        std::cin >> u >> v;
        Z_edges.push_back(u);
        Z_edges.push_back(v);
    }

    // Build graph W
    for (int i = 0; i < M1; i += 2) {
        for (int j = 0; j < M2; j += 2) {
            addEdge(vertices, X_edges[i] + N * (Y_edges[j] + N * Z_edges[0]), X_edges[i + 1] + N * (Y_edges[j] + N * Z_edges[0]));
        }
        for (int j = 0; j < M3; j += 2) {
            addEdge(vertices, X_edges[i] + N * (Y_edges[0] + N * Z_edges[j]), X_edges[i + 1] + N * (Y_edges[0] + N * Z_edges[j]));
        }
    }

    for (int i = 0; i < M2; i += 2) {
        for (int j = 0; j < M1; j += 2) {
            addEdge(vertices, X_edges[j] + N * (Y_edges[i] + N * Z_edges[0]), X_edges[j] + N * (Y_edges[i + 1] + N * Z_edges[0]));
        }
        for (int j = 0; j < M3; j += 2) {
            addEdge(vertices, X_edges[0] + N * (Y_edges[i] + N * Z_edges[j]), X_edges[0] + N * (Y_edges[i + 1] + N * Z_edges[j]));
        }
    }
    
    for (int i = 0; i < M3; i += 2) {
        for (int j = 0; j < M1; j += 2) {
            addEdge(vertices, X_edges[j] + N * (Y_edges[0] + N * Z_edges[i]), X_edges[j] + N * (Y_edges[0] + N * Z_edges[i + 1]));
        }
        for (int j = 0; j < M2; j += 2) {
            addEdge(vertices, X_edges[0] + N * (Y_edges[j] + N * Z_edges[i]), X_edges[0] + N * (Y_edges[j] + N * Z_edges[i + 1]));
        }
    }

    long long int totalWeight = 0;
    for (const auto& vertex : vertices) {
        totalWeight = (totalWeight + modPow(BASE, vertex.first)) % MOD;
    }

    std::cout << totalWeight << std::endl;

    return 0;
}