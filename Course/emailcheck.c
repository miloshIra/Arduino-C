#include <stdio.h>
#include <stdlib.h>
#define dolzina 10

int main()
{
    char mail[dolzina];
    int i;

    for (i = 0; i < dolzina; i++) {
        scanf("%c\n", &mail[i]);
    }
    i=0;
    while (i!='/0') {
            if(mail[i] == '@') {
                printf("Mailot e validen");
                break;
            }
            if (i == dolzina - 1){
                printf("mailot e nevaliden");
            }
        i++;
    }


    return 0;
}
