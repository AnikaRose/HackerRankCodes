//Sum and Difference of Two Numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	short a,b;
    float c,d;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    printf("%d", a+b);
    printf(" %d", a-b);
    printf("\n%.1f", c+d);
    printf(" %.1f", c-d);
    
    return 0;
}
