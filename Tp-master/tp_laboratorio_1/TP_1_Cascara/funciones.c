#include "funciones.h"
#include <stdio.h>
int mostrarMenu(float numeroUno, float numeroDos, float suma, float resta, float division, float multiplicacion)
{
        int opcion;

        printf("1- Ingresar 1er operando (A= %.2f)\n",numeroUno);
        printf("2- Ingresar 2do operando (B= %.2f)\n",numeroDos);
        printf("3- Calcular la suma (A+B)=%.2f\n",suma);
        printf("4- Calcular la resta (A-B)=%.2f\n",resta);
        printf("5- Calcular la division (A/B)=%.2f\n",division);
        printf("6- Calcular la multiplicacion (A*B)=%.2f\n",multiplicacion);
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);

        return opcion;
}

float getfloat(char mensaje[])
{

    float numero;
    printf("%s",mensaje);
    scanf("%f",&numero);
    return numero;

}
float SumarOperandos( float numeroUno,float numeroDos)
{

   float Suma;
    Suma=numeroUno + numeroDos;
    printf("El resultado de la suma es: %.2f\n",Suma);
    return Suma;
}
float restadeoperandos( float numeroUno,float numeroDos)
{
    float resta=0;

    resta=numeroUno-numeroDos;
    printf("El resultado de la resta es: %.2f\n",resta);
    return resta;
}

float divisiondeoperandos(float numeroUno, float numeroDos)
{
    float div=0;

    div=numeroUno/numeroDos;
    printf("El resultado de la division es: %.2f\n",div);
    return div;
}

float multiplicaciondeoperandos(float numeroUno, float numeroDos)
{
    float mult=0;

    mult=numeroUno*numeroDos;
    printf("El resultado de la multiplicacion es: %.2f\n",mult);
    return mult;
}

/*float factorial(float numeroUno)
{
    float respuesta;

    if(numeroUno == 0)
    {
        respuesta = 1;
        printf("%d",respuesta);
    }
    else
    {
          respuesta = numeroUno * factorial(numeroUno-1);
          printf("%d",respuesta);
    }


}*/
