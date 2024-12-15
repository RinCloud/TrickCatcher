#include<bits/stdc++.h>
using namespace std;
 
// Function to find the parent
// of a node
// using path compression technique
int find(int parent[], int node)
{
    if (parent[node] != node)
    {
        parent[node] = find(parent, parent[node]);
    }
    return parent[node];
}
 
// Function to perform union
// on two nodes
void unionOp(int parent[], int rank[], int node1, int node2)
{
    node1 = find(parent, node1);
    node2 = find(parent, node2);
 
    // Attach smaller rank tree
    // under root of high rank tree
    if (rank[node1] < rank[node2])
    {
        parent[node1] = node2;
    }
    else if (rank[node1] > rank[node2])
    {
        parent[node2] = node1;
    }
 
    // If ranks are same, then make one
    // as root and increment the rank
    // by one
    else
    {
        parent[node2] = node1;
        rank[node1]++;
    }
}

// Function to check if graph
// is connected or not
bool isConnected(int parent[], int n)
{
    int count = 0, check = 0;
    for (int i = 0; i < n; i++)
    {
        if (parent[i] == i)
        {
            count++;
            check = i;
        }
    }
    // If there is more than one
    // component, or graph is not connnected
    if (count > 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
 
// Function to check if given clues
// form the connected graph
bool checkClues(vector<pair<int, pair<int, int>>> clues, int n)
{
    // Sort the clues
    sort(clues.begin(), clues.end());
 
    // Initialize the parent and rank array
    int *parent = new int[n];
    int *rank = new int[n];
 
    // Initialize the parent array
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
 
    // Traverse the clue array
    for (int i = 0; i < clues.size(); i++)
    {
        int node1 = clues[i].second.first;
        int node2 = clues[i].second.second;
 
        // If two nodes are not connected,
        // call the unionOp on them
        if (find(parent, node1) !=
            find(parent, node2))
        {
            unionOp(parent, rank, node1, node2);
        }
    }
 
    // Check if graph is connected or not
    return isConnected(parent, n);
}
 
// Function to solve the problem
string solve(int n, int m, int q,
            vector<vector<int>> queries)
{
    // If number of edges is not equal to n-1,
    // graph cannot be a tree
    if (m != n - 1)
    {
        return "No";
    }
 
    // Vector to store the clues
    vector<pair<int, pair<int, int>>> clues;
 
    // Traverse the queries array
    for (int i = 0; i < q; i++)
    {
        int a = queries[i][0];
        int b = queries[i][1];
        int c = queries[i][2];
 
        // Push the clue to the vector
        clues.push_back({c, {a, b}});
    }
 
    // Check if given clues form the connected graph
    if (checkClues(clues, n))
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

// Driver code
int main()
{
    // Read the input values
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> queries(q, vector<int>(3));
    for (int i = 0; i < q; i++) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }
 
    // Function call
    cout<<solve(n, m, q, queries);
 
    return 0;
}