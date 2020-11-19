#include "tokenfinder.hpp"
#include <cstdlib>

char* tokenfinder(char* str, char token)
{
    while (*str != token)
    {
        if (*str == '\0')
        {
            return NULL;
        }
        str ++;
    }
    return str;
}
