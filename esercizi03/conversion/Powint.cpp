#include "Powint.hpp"

int powint(int x, int y)
{
    int result=1;
    for (int i=1; i<=y; i++)
    {
        result = result*x;
    }
    
    return result;
}
