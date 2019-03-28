#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char kar;
    int i = 0;
    while (1==1){
        kar = getchar();
        if (kar == '.') {
            break;
        } else {
            if (isdigit(kar) != 0) {
                i = i + kar - '0';
            }
        }
    }
    printf("Zbirot e : %d", i);
    return 0;
}

// Vnesuvash karakteri se dodeka ne vnesesh tocka i ako vneses tocka pravi break i gi sobira site vneseni brojki 
