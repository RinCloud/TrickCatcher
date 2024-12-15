#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent each piece of sushi
struct Sushi {
    int topping;
    int deliciousness;
};

// Function to sort the sushi array based on their deliciousness
bool compareSushi(Sushi s1, Sushi s2) {
    return s1.deliciousness > s2.deliciousness;
}

int main() {
    // Read the inputs
    int N, K;
    cin >> N >> K;
    
    // Create a vector to store the sushi pieces
    vector<Sushi> sushi(N);
    
    // Read the sushi pieces from input
    for(int i=0; i<N; i++) {
        cin >> sushi[i].topping >> sushi[i].deliciousness;
    }
    
    // Sort the sushi array based on the deliciousness in descending order
    sort(sushi.begin(), sushi.end(), compareSushi);
    
    // Create a vector to store the count of each topping
    vector<int> toppingCount(N+1, 0);
    
    // Initialize variables for calculation
    long long baseDeliciousness = 0;
    long long varietyBonus = 0;
    long long satisfaction = 0;
    
    // Iterate through the sushi pieces
    for(int i=0; i<N; i++) {
        Sushi currSushi = sushi[i];
        
        // Add the deliciousness of the current sushi to the base total deliciousness
        baseDeliciousness += currSushi.deliciousness;
        
        // Increment the topping count for the current sushi
        toppingCount[currSushi.topping]++;
        
        // Calculate the variety bonus
        varietyBonus -= toppingCount[currSushi.topping] * toppingCount[currSushi.topping];
        varietyBonus += (toppingCount[currSushi.topping] - 1) * (toppingCount[currSushi.topping] - 1);
        
        // Update the satisfaction if the number of sushi pieces chosen so far is equal to the required number
        if(i >= K-1) {
            satisfaction = max(satisfaction, baseDeliciousness + varietyBonus);
            
            // Remove the contribution of the first sushi in the current window from the calculation variables
            Sushi prevSushi = sushi[i - K + 1];
            baseDeliciousness -= prevSushi.deliciousness;
            toppingCount[prevSushi.topping]--;
            varietyBonus -= toppingCount[prevSushi.topping] * toppingCount[prevSushi.topping];
            varietyBonus += (toppingCount[prevSushi.topping] - 1) * (toppingCount[prevSushi.topping] - 1);
        }
    }
    
    // Print the maximum satisfaction
    cout << satisfaction << endl;
    
    return 0;
}