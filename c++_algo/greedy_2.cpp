#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, sub = 0, sum = 0;
    cin >> n;
    int n_list[n];
    for(int i = 0; i < n; i++)
        cin >> n_list[i];
    sort(n_list, n_list + n);
    for(int k = 0; k < n; k++)
    {
        sub = sub + n_list[k];
        sum += sub;
    }
    cout << sum;
    return 0;
}