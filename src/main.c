#include <stdio.h>

int main()
{    
    float altura;
    char genero;
    printf("Insira seu gênero. Digite H para homem ou M para mulher\n");
    scanf("%c", &genero);
    printf("Insira a sua altura\n");
    scanf("%f", &altura);
    float resultado;
    if (genero = 'h')
    {
        resultado = (72.7*altura)-58;
    }
    else if (genero = 'm')
    {
        resultado = (62.1*altura)-44.7;
    }
    printf("O seu peso ideal é %f.\n", resultado);
    return 0;
}