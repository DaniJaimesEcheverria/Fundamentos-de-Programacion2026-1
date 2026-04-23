#include <iostream>

using namespace std;

int fact(int x)
{
    int prod = 1, i;
    for (i = 1; i <= x; i++)
    {
        prod = prod * i;
    }
    x = 1000;
    cout << x << "\n";
    return prod;
}

int main()
{
    int n, i;
    cout << "valor de n?: ";
    cin >> n;
    int res = fact(n);
    cout << n << endl;
    cout << res;
}