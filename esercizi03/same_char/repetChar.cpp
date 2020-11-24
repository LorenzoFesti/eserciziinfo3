#include "repetChar.hpp"
#include <cstring>
#include <cstdlib>

int repetChar(char str[], const int dim, char character)
{
    char* p=strchr(str , character);
    int n=0;
    while(p != NULL)
    {
        if (strchr(p, character)!= NULL)
        {
            n++;
            p=p+1;
            p=strchr(p, character);
        }
    }
    return n;
}
