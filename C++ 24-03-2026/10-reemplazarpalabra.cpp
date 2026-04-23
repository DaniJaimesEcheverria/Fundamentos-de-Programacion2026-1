#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase, palabra1, palabra2, temp = "", frase_r = "";
    cout << "Por favor introduzca la frase a analizar: ";
    getline(cin, frase);
    cout << "Palabra a encontrar: ";
    getline(cin, palabra1);
    cout << "Palabra a cambiar: ";
    getline(cin, palabra2);
    int i;
    frase = frase + " ";
    for (i = 0; i < frase.size(); i++)
    {
        if (frase[i] != ' ')
        {
            temp = temp + frase[i];
        }
        else
        {
            if (temp == palabra1)
            {
                frase_r = frase_r + palabra2 + " ";
            }
            else
            {
                frase_r = frase_r + temp  + " ";
            }
            temp = "";
        }
    }
    cout << frase_r;
}
