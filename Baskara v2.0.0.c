#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]){

    float a, b, c, delta, x1, x2; // definindo as variáveis a, b, c, o delta e os Xs

    printf("Informe os valores de a, b e c: \n"); // Coletando valores do terminal
    scanf("%f %f %f", &a, &b, &c);

    delta = (b*b)-4*a*c; // Calculando Delta

    if(delta == 0){ // Caso 1: Delta = 0
        x1 = -b/2*a;
        printf("Ha somente uma raiz: %.2f\n", x1);
        return 0;
    }

    if(delta < 0){ // Caso 2: Delta ser menor que 0, ou negativo
        printf("Nao ha raiz real");
        return 0;
    }

    if(delta > 0){ // Caso 3: Delta ser um número positivo
        x1 = (-b+sqrt(delta))/2*a; // Calculando x1
        x2 = (-b-sqrt(delta))/2*a; // Calculando x2
        printf("Raiz 1: %.2f\n", x1); // Imprimindo Raiz x1
        printf("Raiz 2: %.2f\n", x2); // Imprimindo Raiz x2
        return 0;
    }

    return 0;
}
