#include "QueensFind.hpp"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

constexpr int SIZE = 1000000;
int main()
{
    clock_t mcl = clock();
    for (int t = 0; t < 1; t++)
    {
        Alg4Dnmc_PP clag(SIZE);
        const int *out = clag.solve(INT32_MAX);
        for (int i=0;i<SIZE;i++)
            cout << out[i] << ' ';
        cout << endl;
    }

    cout << double(clock() - mcl) / CLOCKS_PER_SEC << endl;
    cl.show();
}