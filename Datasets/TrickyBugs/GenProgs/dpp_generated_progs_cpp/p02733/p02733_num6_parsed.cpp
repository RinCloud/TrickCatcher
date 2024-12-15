#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<vector<int>> S(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < W; j++) {
            S[i][j] = row[j] - '0';
        }
    }

    int ans = H * W; // initially set to maximum possible value

    // iterate through all possible ways to cut the chocolate bar
    // by trying all possible combinations of vertical/horizontal cuts
    for (int v_cuts = 0; v_cuts < (1 << (H-1)); v_cuts++) {
        for (int h_cuts = 0; h_cuts < (1 << (W-1)); h_cuts++) {
            int num_cuts = 0;
            vector<int> cut_rows(H-1, 0);
            vector<int> cut_cols(W-1, 0);

            // count the number of cuts and record the cut positions
            for (int i = 0; i < H-1; i++) {
                if (v_cuts & (1 << i)) {
                    num_cuts++;
                    cut_rows[i] = 1;
                }
            }
            for (int j = 0; j < W-1; j++) {
                if (h_cuts & (1 << j)) {
                    num_cuts++;
                    cut_cols[j] = 1;
                }
            }
            
            // check each block after the cuts
            vector<vector<int>> blocks;
            int curr_block_size = 0;
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    curr_block_size += S[i][j];
                    if (cut_cols[j]) {
                        vector<int> block;
                        block.push_back(curr_block_size);
                        blocks.push_back(block);
                        curr_block_size = 0;
                    }
                }
                curr_block_size = 0;
                if (i < H-1 && cut_rows[i]) {
                    vector<int> block;
                    for (int k = 0; k < W; k++) {
                        block.push_back(blocks.back()[k] + curr_block_size);
                        blocks.pop_back();
                    }
                    block.push_back(curr_block_size);
                    blocks.push_back(block);
                }
            }
            vector<int> last_block;
            last_block.push_back(curr_block_size);
            blocks.push_back(last_block);
            
            // check if every block has at most K white squares
            bool all_blocks_ok = true;
            for (const auto& block : blocks) {
                for (const auto& num_white : block) {
                    if (num_white > K) {
                        all_blocks_ok = false;
                    }
                }
            }
            
            // update the minimum number of cuts if all blocks are OK
            if (all_blocks_ok) {
                ans = min(ans, num_cuts);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
