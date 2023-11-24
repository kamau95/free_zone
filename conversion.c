#include <stdio.h>
#include <string.h>
#include <math.h>
unsigned int toDecimal(const char *b)
{
unsigned int deci = 0;
size_t i;
size_t  len = strlen(b);

for(i = len-1;    i < len;    i--)
{
    if ( b[i] == '1')
    {
 deci += (unsigned int)   pow(2, len-1-i); 

    }
    else if (b[i]  !=  '0')
    {
printf("Invalid value '%c': Not a binary digit ('0' or '1')\n", b[i]);
return (-1);
    }
}
return (deci);
}


int main(void)
{
    char c[7] = "1111";
    unsigned int k = toDecimal(c);
    printf("%u", k);

    return (0);
}