#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> cinema(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> cinema[i][j];
        }
    }

    vector<int> exitRow(N, -1);
    vector<int> exitCol(N, -1);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int viewer = cinema[i][j];
            viewer--;

            int viewerRow = viewer / N;
            int viewerCol = viewer % N;

            exitRow[viewer] = viewerRow;
            exitCol[viewer] = viewerCol;
        }
    }

    int ans = 0;
    for (int i = 0; i < N * N; i++) {
        int viewerRow = exitRow[i];
        int viewerCol = exitCol[i];

        int viewer = i + 1;

        for (int j = 0; j < N * N; j++) {
            if (j != i) {
                int otherViewerRow = exitRow[j];
                int otherViewerCol = exitCol[j];

                int otherViewer = j + 1;

                if (viewerRow == otherViewerRow || viewerCol == otherViewerCol) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}