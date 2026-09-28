//Hello World!" in C

#include<stdio.h>
int main(){
    char a[100];
    fgets(a, sizeof(a), stdin);
    printf("Hello, World! \n%s" ,a);
    return 0;
}
