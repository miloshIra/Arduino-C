#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Uslovi i operatori prva vezba :)

    /*
    int b1;
    int b2;

    int rezultat;
    char operacija;

    printf("Vnesete eden broj: ");
    scanf("%d", &b1);   // %d deka e integet, & - za memoriska adresa, broj1 - vo koja promenliva da se zacuva. scanf za input od tastatura.
    printf("Vnesete vtor broj: ");
    scanf("%d", &b2);   // shift+end/home za selektiranje red.

    scaf("%c", &operacija);
    rezultat = b1 / b2;
    printf("Rezultatot e %d", rezultat);

    char karakter = 'a';
    printf("%c", karakter);
    scanf("%c", &karakter);
    printf("%c", karakter);


    if(b1 > b2) {
        printf("%d e pogolem od %d", b1, b2);
    }
    else if(b2 > b1) {
        printf("vtoriot broj e pogolem.");
    }
    else {
        printf("Broevite se ednakvi");
    }

    char karakter;
    scanf("%c", &karakter);

    switch(karakter){
        case '1': {
        printf("Mesec Januari");
        break;
        }
          case '2': {
        printf("Mesec Feb");
        break;
        }
        default: {
            printf("Nema tolku meseci");
        }
    } */

    int a;

    scanf("%d", &a);

    if (a%2==0) && (a%3==0) {
        printf("Brojot e deliv i so 2 i s0 3");
    }
    else if (a%3==0) && (a%2!=0) {
        printf("Brojot e deliv so 3");
        }
    else if (a%3!=0) && (a%2==0) {
        printf("Brojot deliv so 2");
    }
    else {
        printf("Brojot ne e delif ni so 2 ni so 3")
    }

    return 0;
}

// main.c e glavniot block sto se izvrshuva.


