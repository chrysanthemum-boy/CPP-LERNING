#include<iostream>
using namespace std;
void FilterPrime(int n)
{
    bool* isPrimes = new bool[n + 1];
    for (int i = 2; i <= n; ++i)
    {
        isPrimes[i] = true;
    }
    isPrimes[2] = true;
    isPrimes[1] = isPrimes[0] = false;
    for (int j = 2; j <= n; ++j)
    {
        if (isPrimes[j] == true)
        {
            for (int m = 2; j * m <= n; ++m)
            {
                isPrimes[j * m] = false;
            }
        }
    }
    for (int k = 2; k <= n; ++k)
    {
        if (isPrimes[k] == true)
        {
            cout << k << "������" << endl;
        }
    }
    delete[] isPrimes;
}

int main()
{
    int num;
    cin >> num;
    FilterPrime(num);
    system("pause");
    return 0;
}
