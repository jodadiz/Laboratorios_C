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
