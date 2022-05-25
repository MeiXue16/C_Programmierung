#include <stdio.h>
#include <stdlib.h>
int main (void)
{
        int x1,x2,y1,y2,z1,z2,a,b,c,Volumen,Oberflaeche, gesamtlaenge;
        printf( "Geben Sie erste Eckpunkte:" );
        scanf("%d  %d  %d", &x1,&y1,&z1 );
        printf( "Geben Sie zweite Eckpunkte:" );
        scanf("%d  %d  %d", &x2,&y2,&z2 );
        a = abs(x1 - x2);
        b = abs(y1 - y2);
        c = abs(z1 - z2);
        Volumen = a*b*c;
        Oberflaeche = 2*(a*b + b*c + a*c);
        gesamtlaenge = 4*(a + b + c);
        printf( "Volumen£º%d\n Oberflaeche£º%d\n gesamtlaenge: %d",Volumen, Oberflaeche, gesamtlaenge);
        return 0;
}
