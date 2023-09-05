
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Throw_Dice(int k1, int k2, int* a, int n)
{
    int sum = 0;
    k1 = 1 + rand() % 6;
    k2 = 1 + rand() % 6;
    sum = k1 + k2;
    cout << sum << endl;
}

int main()
{
    int K1, K2, x = 0;
    int N = 36000;
    int a[N];
    srand(time(NULL));
    while (x != 36000)
    {
        Throw_Dice(K1, K2, a, N);
    }
    return 0;
}