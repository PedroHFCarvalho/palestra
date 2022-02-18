#include <stdio.h>
#include "controlador/registro.h"
#include "controlador/sessao.h"

int main(){
  int restantes;
  char n;
do{
  struct sessao palestra;

  palestra = adm();

  struct cadastro cadeiras[200]={};


  restantes = 2;

  printf("\n------------Dados dos Espectador------------\n\n");

    do{

      cadeiras[1]=registro();

        printf("\n%s", &cadeiras[1].nome);
        printf("\n%s", &cadeiras[1].email);
        printf("\n%d", &cadeiras[1].cpf);
        printf("\n%d\n", restantes);
        getchar();
        restantes=restantes-1;
        getchar();
    }while(restantes>0);

  printf("\nAcabaram os assentos porfavor espere até a proxima sessão\n");
  printf("\nPrecione Enter\n");
  getchar();

  printf("\nDeseja registrar uma nova sessao?[s/n]\n");
  scanf("%c", &n);

}while(n=='s'||n =='S');

return 0;
}



