#include <iostream>

using namespace std;

int main()
{
    int N, res, count = 0;
    cin >> N >> res;
    int coin_N[N];
    for (int i = 0; i < N; i++)
        cin >> coin_N[N];
    while(1)
    {
        if (res == 0)
            break;
        for (int k = 0; k < N; k++)
        {
            if (coin_N[k+1] > res){
                count += res / coin_N[k];
                res = res - coin_N[k] * (res / coin_N[k]);
                cout << count << endl << k << endl << res << endl;
                break;
            }
        }
    }
    //cout << count;
    return 0;
}