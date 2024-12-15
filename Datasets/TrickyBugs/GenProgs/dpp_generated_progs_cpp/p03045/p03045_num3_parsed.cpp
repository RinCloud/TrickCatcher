#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    // adjacency list representation of the graph
    vector<vector<int>> graph(N + 1);
    
    for (int i = 0; i < M; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        
        // add edges in both directions since the graph is undirected
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    // to keep track of the visited cards
    vector<bool> visited(N + 1, false);
    
    // to keep track of the minimum cost required to visit each card
    vector<int> cost(N + 1, 0);
    
    // to store the queue for BFS traversal
    queue<int> cardQueue;
    
    // starting BFS traversal from card 1
    cardQueue.push(1);
    visited[1] = true;
    
    while (!cardQueue.empty()) {
        int currentCard = cardQueue.front();
        cardQueue.pop();
        
        for (int neighbour : graph[currentCard]) {
            if (!visited[neighbour]) {
                // increment the cost of visiting the neighbour card
                cost[neighbour] = cost[currentCard] + 1;
                
                // mark the neighbour card as visited
                visited[neighbour] = true;
                
                // add the neighbour card to the queue for further traversal
                cardQueue.push(neighbour);
            }
        }
    }
    
    // the minimum total cost required to determine all cards is the maximum cost
    // among all the cards
    int minCost = *max_element(cost.begin(), cost.end());
    
    cout << minCost << endl;
    
    return 0;
}