/*
 Program that splits strings, given a token
 */

#include "tokenfinder.hpp"
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

#define LEN 100
#define TEMPLEN 100
int main()
{
    char toSplit[LEN];
    char temp[TEMPLEN];
    char tokenBuff[2];
    char token;
    
    cout<<"enter a string to split: "<<endl;
    cin.getline(toSplit, LEN);
    
    cout<<"enter token: "<<endl;
    cin.getline(tokenBuff, 2);
    token =tokenBuff[0];
    
    char* startP = toSplit;
    char* endP;
    //endP=tokenfinder(startP, token);
    
    while((endP = tokenfinder(startP, token)) != NULL)
    {
        //copio nel nuovo array
        /*
        char* pTemp = temp;
        for (char* p = startP; p<endP; p++, pTemp++)
        {
            *pTemp= *p;
        }
        *pTemp = '\0';
        */
         
        strncpy(temp, startP, (endP - startP));
        temp[endP - startP] = '\0';
        // stampo il nuovo array
        cout<<temp<<endl;
        
        startP=endP+1;
    }
    cout<<startP<<endl;
    
    return 0;
}
