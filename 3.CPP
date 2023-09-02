#include <iostream>
#include <string>

using namespace std;

int main(){
    int numeros[40];
    int siguiente_num;
    numeros[0]=1;
    numeros[1]=1;
    numeros[2]=1;
    cout << numeros[0]<< " "<<numeros[1]<<" " << numeros[2] << " ";
    for ( int i = 3; i < 40; i++)
    {
        siguiente_num = numeros[i-3] + numeros[i-2] + numeros[i-1];
        numeros[i]=siguiente_num;
        cout << siguiente_num << " ";
    }
    cout << endl<< "segunda susecion" << endl;
    numeros[0]=0;
    numeros[1]=0;
    numeros[2]=1;
    cout << numeros[0]<< " "<<numeros[1]<<" " << numeros[2] << " ";
    for ( int i = 3; i < 40; i++)
    {
        siguiente_num = numeros[i-3] + numeros[i-2] + numeros[i-1];
        numeros[i]=siguiente_num;
        cout << siguiente_num << " ";
    }
    
    return 0;

}