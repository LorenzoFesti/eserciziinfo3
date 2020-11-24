#include <iostream>
#include <cstring>
#include <cstdlib>
#include "repetChar.hpp"
using namespace std;

/*this program find a specific repeated char in a string, convert it in a capital letter and print the new string*/

int main()
{
    const int dim=30;
    char string[dim];
    cout<<"Insert a string without capital letters and punctuation"<<endl;
    cin.getline(string, dim);
    
    char ch;
    cout<<"Insert a character to find in the string"<<endl;
    cin>>ch;

    //to find how much times the charachter repeats
    
    cout<<ch<<" repeats "<<repetChar(string, dim, ch)<<" times"<<endl;
    
    //transform into capital letters the selected character
    char stringconv[dim];
    
    for (int i=0; i<dim; i++)
    {
        if (string[i]!=ch)
        {
            stringconv[i]=string[i];
        }
        else
        {
            stringconv[i]=toupper(string[i]);
        }
    }
    
    cout<<stringconv<<endl;
    
    return 0;
}
