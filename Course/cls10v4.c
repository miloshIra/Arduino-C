#include <stdio.h>
#include <stdlib.h>
#define MAX 80
#include <string.h>


int broi_povtoruvanja(char *red) {
    int br = 0;
    int max = 0;
    int dolzina = strlen(red);
    for (int i=0;  i < dolzina; i++) {
        if (red[i] == red[i+1]) {
            br ++;
        } else {
            if (max < br) {
                max = br;
            }
        }
        br = 1;
    }
    return max;
}



int main()
{

    // Da se napish programa koja vo tekstualna datoteka ke to najde redot so najdolgo posledovatelno provtoruvanje na eden ist znak i ke go smeni
    // vo nova datoteka, kako i redot vo koj e najde. max dolzina na red e 80 karakteri

    FILE *dat_citam, *dat_zapisuvam;
    char red[MAX];
    char najdolg_red[MAX];
    int momentalen, max = 0;

    if ((dat_citam = fopen("zad4.txt", "r"))== NULL) {
        puts("Nema od kade da se cita");
        return 1;
    } else {
        while(fgets(red, "%s", dat_citam)) {
            momentalen = broi_povtoruvanja(red);
            if (momentalen > max) {
                max = momentalen;
                strcpy(najdolg_red, red);
            }
        }
        if ((dat_zapisuvam = fopen("rez.txt", "w")) == NULL) {
        printf("Nemozam da zapisam");
        }else {
            fprintf(dat_zapisuvam, "%d\n%s", max, najdolg_red);
        }

    }
    fclose(dat_citam);
    fclose(dat_zapisuvam);
    return 0;
}
