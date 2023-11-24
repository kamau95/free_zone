#include <stdio.h>
#include <math.h>

unsigned int toDecimal(unsigned int bits)
{
    unsigned int i = 0, deci = 0, rem;
    while (bits!= 0)
    {
    rem = bits%10;
    bits /=10;
    deci +=rem * (unsigned int)pow(2, i);
    i++;
    }
    return (deci);
}
    int main(void)
    {
        unsigned int bitNum = 1100;
        int myBit;
        myBit = toDecimal(bitNum);
        printf("%d",myBit );
        return (0);
    }
