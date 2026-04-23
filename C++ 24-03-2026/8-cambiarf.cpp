#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase, resultante = "";
    int i;
    cout << "por fa, escriba la frase (que tenga h): ";
    getline(cin, frase);
    for (i = 0; i < frase.size(); i++)
    {
        if (frase[i] == 'h')
            resultante = resultante + 'f';
        else
        {
            if (frase[i] == 'H')
            {
                resultante = resultante + 'F';
            }
            else
            {
                resultante = resultante + frase[i];
            }
        }
        
        
    }
    cout << resultante;
}