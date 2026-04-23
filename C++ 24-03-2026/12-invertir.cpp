#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase, resultante = "";
    int i;
    getline(cin, frase);
    for (i = frase.size() - 1; i >= 0; i-- )
    {
        resultante += frase[i];
    }
    cout << "La frase invertida es: " << resultante << endl;
    // metodo 2
    resultante = "";
    for (i = 0; i < frase.size(); i++)
    {
        resultante = frase[i] + resultante;
    }
    cout << "La frase invertida es: " << resultante << endl;
}