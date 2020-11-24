#include "numEl.hpp"

int numEl (char str[], const int dim)
{
    int j=0;
    int n=0;
    while(str[j]!='\0')
    {
        if (str[j+1]=='\0')
        {
            n=j;
        }
        j++;
    }
    return n;
}
