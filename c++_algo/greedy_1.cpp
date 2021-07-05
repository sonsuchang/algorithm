#include <iostream>

using namespace std;

int main()
{
    int num, count = 0, breaknum = 0;
    cin >> num;
    for (int i = 0; i <= num / 3; i++){
        for (int k = 0; k <= num / 5; k++){
            if (3*i+5*k == num){
                count = k + i;
                breaknum = 1;
                break;
            }
        }
        if (breaknum == 1)
            break;
    }
    if(count == 0)
        count = -1;
    cout << count;
    return 0;
}