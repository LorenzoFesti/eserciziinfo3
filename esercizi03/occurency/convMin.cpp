#include "convMin.hpp"
#include <cstring>
#include <cstdlib>
#include <cctype>

char* convMin(char str[], char strMin[], const int dim)
{
    for (int i=0; i<dim; i++)
    {
        strMin[i] = tolower(str[i]);
    }
    return strMin;
}
