#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno=0;
    float numeroDos=0;
    float suma;
    float resta;
    float division;
    float multiplicacion;




    while(seguir=='s')
    {
      fflush(stdin);
      opcion=mostrarMenu(numeroUno,numeroDos,suma,resta,division,multiplicacion);


        switch(opcion)
        {
            case 1: (numeroUno)=getfloat("Ingrese el 1er operando:");
            fflush(stdin);
            break;

            case 2: (numeroDos)=getfloat("Ingrese el 2do operando:");
            fflush(stdin);
            break;

            case 3:
                suma=SumarOperandos(numeroUno, numeroDos);
                fflush(stdin);
            break;

            case 4: resta=restadeoperandos(numeroUno, numeroDos);
                    fflush(stdin);

                break;
            case 5: division=divisiondeoperandos(numeroUno, numeroDos);
                    fflush(stdin);

                break;
            case 6: multiplicacion=multiplicaciondeoperandos(numeroUno, numeroDos);
                    fflush(stdin);

                break;
            case 7:/*resultado=factorial(numeroUno!numeroDos);*/
                    fflush(stdin);

                break;
            case 8: SumarOperandos(numeroUno, numeroDos);
            restadeoperandos(numeroUno, numeroDos);
            multiplicaciondeoperandos(numeroUno, numeroDos);
            divisiondeoperandos(numeroUno, numeroDos);
            fflush(stdin);
                break;
            case 9:
                fflush(stdin);
                seguir = 'n';
                break;
        }
        do
        {
            printf("Desea continuar? (S/N) ");
            scanf("%c",&seguir);
            fflush(stdin);

        }while(seguir!='n'&&seguir!='s');
        system("cls");
   }
   return 0;
}
