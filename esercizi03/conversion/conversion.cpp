#include <iostream>
#include <cstdlib>
#include "Powint.hpp"

using namespace std;



int main ()
{
    char string[4];
    cout<<"inserisci una stringa del tipo '923D', in modo da convertirla in intero"<<endl;
    cin>>string;
    
    //converto la stringa in intero e inserisco le cifre negli elementi di un array
    int conv= atoi(string);
    int conv2=conv;
    
    //se il numero è negativo, tolgo il segno meno
    if(conv<0)
    {
        conv=-(conv);
    }
    
    //inserisco le cifre del numero in un array
    int convarr[3];
    int a;
    for (int k=0; k<3; k++)
    {
        if(k==0)
        {
            convarr[k]=conv/powint(10,2-k);
        }
        
        if (k!=0)
        {
            a=conv/powint(10,2-k);
            convarr[k]=(a)%10;
        }
    }
    
    //converto il numero da esadecimale a decimale
    int dec[4];
    for(int i=0; i<4; i++)
    {
        if (i==3)
        {
            dec[3]=13;
        }
        else
        {
            dec[i]=convarr[i]*pow(16,3-i);
        }
    }
    
    int somma=0;
    for(int k=0; k<4; k++)
    {
        somma=somma+dec[k];
    }
    if (conv2<0) // se il numero era negativo, inverto il segno della somma
    {
        somma=-somma; 
    }
    cout<<somma<<endl;
    
    return 0;
}
    
    
