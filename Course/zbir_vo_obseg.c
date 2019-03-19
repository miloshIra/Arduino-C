#include <stdio.h>
    #include <stdlib.h>
    #define MAX 100


    int soberi (int a, int b) {
        int zbir = 0;
        if( b >= a) {
            for (int i = a; i <= b; i++){
                zbir = zbir + i;
            }         // void е функција без враќање на аргумент како int!! (нема return)!!
            return zbir;

        }
    }



    int main()
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int rez = soberi(a, b);
        printf("%d", rez);
        return 0;
        }
