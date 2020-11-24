#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*this program calculates the chance of obtaining a value that is the sum of two values from 1 to 6*/

int main()
{
    //creating an array with the dimension equivalent to the number tosses
    int dim;
    cout<<"insert the number of times you want to roll the dices"<<endl;
    cin>>dim;
    
    //the array has the elements that are the sum between the casual results of two tosses
    srand(time(NULL));
    double* sommaDado= new double[dim];
    for(int i=0; i<dim; i++)
    {
        double val1=rand()%6 + 1;
        double val2=rand()%6 + 1;
        double somma=val1+val2;
        sommaDado[i]=somma;
    }
   
    //calculating the chance for every possible result (from 1 to 12)
    double chance;
    for(int k=1; k<=12; k++)
    {
        double num_val=0;
        for(int j=0; j<dim; j++)
        {
            if(sommaDado[j]==k)
            {
                num_val++;
            }
        }
        chance=num_val/dim;
        cout<<"the chance of "<<k<<" is "<<chance<<endl;
    }
    
    delete[] sommaDado;
    return 0;
}
    
