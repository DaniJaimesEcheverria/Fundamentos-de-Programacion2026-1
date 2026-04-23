#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase, resultante = "", palabra = "";
    int i;
    cout << "Frase: ";
    getline(cin, frase);
    for (i = 0; i < frase.size(); i++)
    {
        if (frase[i] == ' ')
        {
            resultante = resultante + palabra + " ";
            palabra = "";
        }
        else
        {
            palabra = frase[i] + palabra;
        }
    }
    if (frase.size() > 0)
        resultante = resultante + palabra;
    cout << resultante;
}