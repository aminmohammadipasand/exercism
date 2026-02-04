#include "collatz_conjecture.h"
int steps(int start)
{
    int c = 0;
    if (start < 1)
        return -1;
    while (start != 1)
    {
        if (start % 2)
            start = 3 * start + 1;
        else 
            start = start / 2;
        c++;
    }
    return c;
}