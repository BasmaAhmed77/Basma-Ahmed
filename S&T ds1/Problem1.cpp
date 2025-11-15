//problem 1   Homogeneous Problem  ds task1 

#include<iostream>

using namespace std;

int main()
{
    int a, b, sum = 0, esum = 0, osum = 0;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    for (int i = a;i <= b;i++)
    {
        sum += i;
        if (i % 2 == 0)
            esum += i;
        else
            osum += i;
    }
    cout << sum << endl;
    cout << esum << endl;
    cout << osum << endl;
    return 0;
}