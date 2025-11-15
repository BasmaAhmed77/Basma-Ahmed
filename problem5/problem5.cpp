// problem 5.         3n+1


#include<iostream>

using namespace std;

int seq(int n, int& cnt)
{
    cnt++;
    if (n <= 1)return cnt;
    if (n % 2 == 0)
        return seq(n / 2, cnt);
    else
        return seq(3 * n + 1, cnt);
}

int main()
{
    int n, cnt = 0;
    cin >> n;
    cout << seq(n, cnt);
    return 0;
}