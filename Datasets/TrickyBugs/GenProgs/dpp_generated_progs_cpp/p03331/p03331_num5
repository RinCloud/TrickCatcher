#include<iostream>
using namespace std;
int sum_digits(int num)
{
    int sum = 0;
    while(num != 0)
    {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int N;
    cin >> N;
    
    int minSum = INT_MAX;
    for(int A=1; A<=N/2; A++)
    {
        int B = N - A;
        int sumA = sum_digits(A);
        int sumB = sum_digits(B);
        int totalSum = sumA + sumB;
        minSum = min(minSum, totalSum);
    }
    
    cout << minSum << endl;
    
    return 0;
}