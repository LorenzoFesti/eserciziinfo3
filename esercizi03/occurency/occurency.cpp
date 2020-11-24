#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include "convMin.hpp"
#include "cleanStr.hpp"
using namespace std;

int main()
{
    const int dim=100;
    char string[dim];
    cout<<"Insert a string"<<endl;
    cin.getline(string, dim);
    
    //convert capital letters
    char stringint[dim];
    char* stringMinusc = convMin(string, stringint,  dim);
    //cout<<stringMinusc<<endl;
    
    //erase spaces and punctation
    char stringint2[dim];
    char* cleanString = cleanStr(stringMinusc, stringint2, dim);
    //cout<<cleanString<<endl;
    
    //count the repetition of all letters
    cout<<"ASCII    "<<"CHARACTER    "<<"NUMBER OF REPETITIONS"<<endl;
    int num=97;
    char let=num;
    int n=0;
    for(num=97; num<=122; num++)
    {
        let=num;
        char* p=strchr(cleanString , num);
        while(p != NULL)
        {
            if (strchr(p, num)!= NULL)
            {
                n++;
                p=p+1;
                p=strchr(p, num);
            }
        }
        
        if(num<100)
        {
            cout<<num<<"       "<<let<<"            "<<n<<endl;
        }
        else
        {
            cout<<num<<"      "<<let<<"            "<<n<<endl;
        }
        n=0;
    }
    
    return 0;
}

