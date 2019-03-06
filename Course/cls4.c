#include <stdio.h>
#include <stdlib.h>
#define max 10

int main()
{
    int dolzina = 10;
    char niza[max];
    char nova[dolzina];
    int j = 0;

    for (int i = 0; i < dolzina; i++) {
        scanf("%c\n", &niza[i]);
    }
    for (int i = 0; i < dolzina; i++) {
        if (niza[i] != 'a' &&
            niza[i] != 'e' &&
            niza[i] != 'i' &&
            niza[i] != 'o' &&
            niza[i] != 'u') {
            //printf("%c", niza[i]);
            nova[j]=niza[i];
            printf("%c", nova[j]);
            j++;

    }


    }

    return 0;
}
