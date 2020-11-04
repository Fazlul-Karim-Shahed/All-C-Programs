#include<stdio.h>
int main ()
{

    float A , B , C , triangle , circle, trapezium, square , rectangle , pi = 3.14159;

    scanf ("%f %f %f", &A , &B , &C);
    triangle = (1.00/2) * A * C;
    circle = pi* C*C;
    trapezium = (1.00/2)* (A+B)* C;
    square = B*B;
    rectangle = A*B;

    printf ("TRIANGULO: %.3f\n", triangle);
    printf ("CIRCULO: %.3f\n", circle);
    printf ("TRAPEZIO: %.3f\n", trapezium);
    printf ("QUADRADO: %.3f\n", square);
    printf ("QUADRADO: %.3f\n", rectangle);




    return 0;
}
