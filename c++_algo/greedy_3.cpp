#include <iostream>

using namespace std;

int main()
{
    int N, res, count = 0;
    cin >> N >> res;
    int coin_N[N];
    for (int i = 0; i < N; i++)
        cin >> coin_N[i];
    for (int k = N - 1; k >= 0; k--)
    {
        count += res / coin_N[k];
        res %= coin_N[k];
    }
    cout << count;
    return 0;
}