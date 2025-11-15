//problem2

#include<iostream>

using namespace std;

int main()
{
    int t, x, y, n, arr[50];
    bool isPerfect;
    cin >> t;
    for (int i = 0;i < t;i++)
    {
        isPerfect = true;
        cin >> n;
        for (int j = 0;j < n;j++)
        {
            cin >> arr[j];
        }
        for (int j = 0;j < n - 1;j++)
        {
            if (abs(arr[j] - arr[j + 1]) != 5 && abs(arr[j] - arr[j + 1]) != 7)
            {
                isPerfect = false;
                break;
            }
        }
        if (isPerfect)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}