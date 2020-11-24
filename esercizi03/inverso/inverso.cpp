#include <iostream>
#include <cstring>
#include "numEl.hpp"

using namespace std;

int main ()
{
    const int dim=100;
    char string[dim];
    cout<<"inserisci una stringa da stampare al contrario: "<<endl;
    cin.getline(string, dim);
    
    //estraggo il numero di elementi della stringa
    
    int num=numEl(string, dim);
    
    //creo un array composto dagli elementi del precedente, disposti al contrario
    char contrary[num+2];
    int val=num;
    for(int i=0; i<num+1; i++)
    {
        contrary[i] = string [val];
        val--;
    }
    contrary[num+1]='\0';
    
    //stampo l'array
    cout<<contrary<<endl;
    
    return 0;
}
