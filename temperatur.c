#include <stdio.h>

int main (void)
{
        int Celsius, Fahrenheit;
        printf( "Geben Sie eine ganze Zahl:" );
        scanf( "%d", &Fahrenheit );
        Celsius =  5 * ( Fahrenheit - 32 )/9;
        printf( "Der Temperaturwerts von Fahrenheit£º%d (¡ãF)\n Der entsprechende Temperaturwert von Celsius£º%d (¡ãC)", Fahrenheit, Celsius );
        return 0;
}
