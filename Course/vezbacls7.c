    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    void isfrli_duplikati(char *niza, char *nova_niza, char karakater) {

        int index = 0;
        int j = 0;
        int counter = 0;

        while (niza[index] != '\0') {
            if (niza[index] == karakater) {
                counter ++;
                if (counter <= 1) {
                    nova_niza[j] = niza[index];
                    j++;
                }
                else {
                nova_niza[j] = niza[index];
                j++;
            }
            }
        index ++;
    }





    int main()
    {
        char text[50];
        char nova_niza[50];
        printf("Vnesi text: ");
        get(text);
        char karakter;

        isfrli_duplikati(text, 'a', nova_niza);
        puts(nova_niza);  // return 1 za da vrati nesto i da se zacuva vo int prom.
        return 0;
    }
