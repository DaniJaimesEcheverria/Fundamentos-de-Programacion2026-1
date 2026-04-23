#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase, resultante = "", palabra = "";
    int i;
    cout << "Frase: ";
    getline(cin, frase);
    frase = frase + " ";
    for (i = 0; i < frase.size(); i++)
    {
        if (frase[i] == ' ')
        {
            resultante = palabra + " " + resultante;
            palabra = "";
        }
        else
        {
            palabra = palabra + frase[i];
        }
    }
    cout << resultante;
}