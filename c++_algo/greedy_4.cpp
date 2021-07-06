#include <iostream>

using namespace std;

int main()
{
    int N, res = 0;
    cin >> N;
    int coin_list[6] = {500, 100, 50, 10, 5, 1};
    N = 1000 - N;
    for (int i = 0; i < 6; i++)
    {
        res += N / coin_list[i];
        N %= coin_list[i];
    }
    cout << res;
    return 0;
}