#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int sum = 0;
    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
}