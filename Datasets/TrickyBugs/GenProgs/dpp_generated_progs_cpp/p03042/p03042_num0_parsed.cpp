#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int first = stoi(S.substr(0, 2));
    int second = stoi(S.substr(2, 2));

    bool yy = (first >= 0 && first <= 99 && second >= 1 && second <= 12);
    bool mm = (first >= 1 && first <= 12 && second >= 0 && second <= 99);

    if (yy && mm)
        cout << "AMBIGUOUS" << endl;
    else if (yy)
        cout << "YYMM" << endl;
    else if (mm)
        cout << "MMYY" << endl;
    else
        cout << "NA" << endl;

    return 0;
}