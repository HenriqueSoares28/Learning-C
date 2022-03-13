//Exercício 4
/*
A representação em Fahrenheit da temperatura igual a 37,777777 graus celsius, sabendo que uma medida em celsius pode ser convertida em Fahrenheit através da seguinte fórmula:
    Fahrenheit = celsius x 1,8 + 32
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;
    celsius = 37.777777;
    float fahrenheit;
    fahrenheit = celsius * 1.8 + 32;
    printf("\n%f celsius em fahrenheit é = %f ", celsius, fahrenheit);
}