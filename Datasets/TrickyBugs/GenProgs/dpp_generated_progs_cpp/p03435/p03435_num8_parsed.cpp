#include<iostream>
using namespace std;

int main()
{
    int c[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> c[i][j];
        }
    }

    // Check if the sum of elements of each row is same
    int row_sum = c[0][0] + c[0][1] + c[0][2];
    for(int i=1; i<3; i++)
    {
        int curr_sum = c[i][0] + c[i][1] + c[i][2];
        if(curr_sum != row_sum)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    // Check if the sum of elements of each column is same
    int col_sum = c[0][0] + c[1][0] + c[2][0];
    for(int j=1; j<3; j++)
    {
        int curr_sum = c[0][j] + c[1][j] + c[2][j];
        if(curr_sum != col_sum)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}