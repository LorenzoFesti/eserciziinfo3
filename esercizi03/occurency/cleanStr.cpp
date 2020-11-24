#include "cleanStr.hpp"
#include <cstring>
#include <cstdlib>
#include <cctype>

char* cleanStr(char str[], char strClean[], const int dim)
{
    int j=0;
    for(int i=0; i<dim; i++ )
    {
        if((str[i]>='a' & str[i]<='z') || str[i]=='\0')
        {
            strClean[j]=str[i];
            j++;
        }
    }
    return strClean;
}
