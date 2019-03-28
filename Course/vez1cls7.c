#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("Vneste eden broj: ");
    scanf("%d", &a);
    b = a%5;

    for (int i = 0; i<b; i++){
        printf("%c", '.');
    }

    for ( int j = 0; j<5-b; j++){

        printf("%c",'-');
    }

    return 0;
}
