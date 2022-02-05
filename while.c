#include <stdio.h>
#include <conio.h>


int main()
{
    int range_ini = 0;
    int n = 0;

    scanf("%d", &n);
    scanf("%d",&range_ini);
     n += range_ini;

    while(range_ini < n)
    {
        printf("\n %d", range_ini);
        range_ini++;
    }

    return 0;
}


