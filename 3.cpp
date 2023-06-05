#include <iostream>
using namespace std;

int najveciZajednickiDjelitelj(int, int);

int najveciZajednickiDjelitelj(int a, int b)
{
    /*
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
    */

    for (int i = a / 2; i >= 1; i--)
        if (a % i == 0 && b % i == 0)
            return i;

    return 0;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int nzd = najveciZajednickiDjelitelj(x, y);
    cout << nzd << endl;

    return 0;
}