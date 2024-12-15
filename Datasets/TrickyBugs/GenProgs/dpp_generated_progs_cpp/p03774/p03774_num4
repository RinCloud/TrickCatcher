#include <iostream>
#include <vector>
#include <cmath>

struct Checkpoint {
    int x;
    int y;
    int index;
};

struct Student {
    int x;
    int y;
    int checkpointIndex;
};

// Function to calculate Manhattan distance between two points
int manhattanDistance(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<Student> students(N);
    std::vector<Checkpoint> checkpoints(M);

    // Read student coordinates
    for (int i = 0; i < N; i++) {
        std::cin >> students[i].x >> students[i].y;
        students[i].checkpointIndex = -1; // Initialize checkpoint index
    }

    // Read checkpoint coordinates
    for (int i = 0; i < M; i++) {
        std::cin >> checkpoints[i].x >> checkpoints[i].y;
        checkpoints[i].index = i + 1; // Set checkpoint index
    }

    // Assign nearest checkpoint to each student
    for (int i = 0; i < N; i++) {
        int minDistance = manhattanDistance(students[i].x, students[i].y, checkpoints[0].x, checkpoints[0].y);
        students[i].checkpointIndex = 1;
        
        for (int j = 1; j < M; j++) {
            int distance = manhattanDistance(students[i].x, students[i].y, checkpoints[j].x, checkpoints[j].y);
            
            if (distance < minDistance) {
                minDistance = distance;
                students[i].checkpointIndex = j + 1;
            }
        }
    }

    // Print the indices of the nearest checkpoints for each student
    for (int i = 0; i < N; i++) {
        std::cout << students[i].checkpointIndex << std::endl;
    }

    return 0;
}