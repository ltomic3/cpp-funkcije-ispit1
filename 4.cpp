#include <iostream>
#include <vector>
using namespace std;

int prebrojiParneZnamenke(int n)
{
    int br = 0;
    while (n != 0)
    {
        int z = n % 10;
        if (z % 2 == 0)
            br++;
        n /= 10;
    }

    return br;
}

int ucitajBrojeveIPrebroji(int n)
{
    vector<int> brojevi;
    for (int i = 0; i < n; i++)
    {
        int broj;
        cin >> broj;
        brojevi.push_back(broj);
    }

    int br = 0;
    for (auto &broj : brojevi)
        if (prebrojiParneZnamenke(broj) == 2)
            br++;

    return br;
}

int main()
{
    int n;
    cin >> n;

    int br = ucitajBrojeveIPrebroji(n);
    cout << br << endl;

    return 0;
}