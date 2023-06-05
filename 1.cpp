#include <iostream>
using namespace std;

inline bool jeTroznamenkast(int);
inline int kub(int);
inline bool jeArmstrongov(int);

inline bool jeTroznamenkast(int n)
{
    return n >= 100 && n <= 999;
}

/*
    Armstrongov broj je troznamenkasti broj koji je
    jednak zbroju kubova svojih znamenaka.
*/

inline int kub(int b)
{
    return b * b * b;
}

inline bool jeArmstrongov(int n)
{
    int s = 0; // Suma brojeva
    int t = n; // Privremena kopija
    while (t > 0)
    {
        int z = t % 10; // Znamenka
        s += kub(z);    // Kub znamenke
        t /= 10;        // Ukloni znamenku
    }
    return s == n; // true / false
}

int main()
{
    int n;
    cin >> n;

    if (!jeTroznamenkast(n))
    {
        cout << "Nije troznamenkast" << endl;
        return 0;
    }

    if (jeArmstrongov(n))
    {
        cout << "Armstrongov" << endl;
    }
    else
    {
        cout << "Nije Armstrongov" << endl;
    }

    return 0;
}