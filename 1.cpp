#include <iostream>
#include <string>

using namespace std;

string BuscadorEspacio(string str, char separator, int pos)
{
    string field = "";
    int i = 0;
    int posSep = 0;
    int tamanio = str.size();
    while (i < tamanio)
    {
        if (str[i] == separator)
        {
            posSep++;
        }
        if ((posSep == pos) && (str[i] != separator))
        {
            field += str[i];
        }
        i++;
    }
    return field;
}

int BuscarNumero(string cadena)
{
    int tamanio_cadena = cadena.size();
    string cadena_obtenida = "";
    int numero_obtenido = 0;
    int num;
    for (int i = 0; i < tamanio_cadena; i++)
    {
        num = cadena[i];
        num = num - 48;

        if ((num >= 1) && (num <= 9))
        {
            numero_obtenido = num;
            return numero_obtenido;
        }
    }
}

int main()
{
    string verifi = "";
    string text = "is2 Thi1s T4est 3a";

    for (int i = 1; i <= 9; i++)
    {

        for (int j = 0; j < 9; j++)
        {
            if (i == BuscarNumero(BuscadorEspacio(text, ' ', j)))
            {
                
                verifi = verifi + BuscadorEspacio(text, ' ', j) + " ";
            }
        }
    }

    cout << verifi;
    return 0;
}