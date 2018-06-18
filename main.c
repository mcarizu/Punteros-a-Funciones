#include <stdio.h>
#include <stdlib.h>
void funcionBienvenida(char* nombre);
void funcionDespedida(char* nombre);
void funcionDelegado(void(*)(char*));//void funcionDelegado(void(* nombreDeLaFuncion)(char*));
int main()
{
   void(*F1)(char*);
   F1=funcionBienvenida;
   //F1("fuck");
   funcionDelegado(funcionBienvenida);//paso la direccioin de memoria de F1
   funcionDelegado(funcionDespedida);
    return 0;
}
void funcionBienvenida(char* nombre)
{
    //printf("%s",txt);
    printf("Bienvenida :%s",nombre);

}
void funcionDespedida(char* nombre)
{
    //printf("%s",txt);
    printf("Despedida :%s",nombre);

}
void funcionDelegado(void(*F1)(char*))
{
    F1("Matias\n");
}
