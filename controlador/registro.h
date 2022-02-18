#include <stdio.h>
#include "../estruturas/cadastro.h"


registro(){
  
  struct cadastro usuario;

  printf("Digite seu Nome:");
  scanf("%s",&usuario.nome);
  printf("Digite seu E-mail:");
  scanf("%s", &usuario.email);
  printf("Digite seu CPF");
  scanf("%d", &usuario.cpf);



  return usuario;
}

