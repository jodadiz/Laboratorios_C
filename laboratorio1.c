/*
Jose David Diaz Perez C02638
Por medio de la entrada de dos digitos se calcula
con ellos el residuo el cual es el que nos va a
indicar si se realiza el MCD cuando su residuo
sea 0 y de tambien se añaden algunas condiciones
*/

#include <stdio.h>

int main() {

    int primer, seg, resi, mcd;

    printf("Ingrese el primer numero: ");
    scanf("%d", &primer);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &seg);

    do {
        resi = primer % seg;

        if(resi != 0)
        {
            primer = seg;
            seg = resi;
        }
        else if(seg == 0)
        {
            mcd = primer;
        }
        else
        {
            mcd = seg;
        }
    } while(resi != 0);

    printf("Maximo Comun Divisor: %d\n", mcd);

    return 0;
}
