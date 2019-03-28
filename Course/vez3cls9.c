#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int start;
    int kraj;
    int i;

    printf("Vnesete obseg: ");
    scanf("%d", &start);
    scanf("%d", &kraj);

    int rez[abs(kraj-start)];
    int j = 0;
    for (i=start; i <=kraj i++) {
        int broj = i;
        int zbir_parni = 0;
        int zbir_neparni = 0;

        while ( broj > 0) {
            if ((broj %10) % 2 !=0) {
                zbir_neparni += broj % 10;
            } else {
                zbir_parni += broj % 10;
            }
            broj= broj/10;
        }
        // proverka na uslov
        if (zbir_parni > zbir_neparni) {
            rez[j] = i;
            j++;
        }

    }
    j=0;
    while (j < strlen(rez)) {
        printf("%d", rez[j]);
        j++;
    }
    printf("Najdeni se %d broevi.", j+1);


    return 0;
}
