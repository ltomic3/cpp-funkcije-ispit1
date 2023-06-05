#include <iostream>
#include <cmath>
using namespace std;

inline double povrsinaKruga(double);
inline double rjesenje(double, double);

inline double povrsinaKruga(double r)
{
    return r * r * M_PI;
}

inline double rjesenje(double r1, double r2)
{
    return povrsinaKruga(r1) - 2 * povrsinaKruga(r2);
}

int main()
{
    double r1, r2;
    cin >> r1 >> r2;

    cout << rjesenje(r1, r2) << endl;

    return 0;
}