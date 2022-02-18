#include <stdio.h>
#include "../estruturas/palestra.h"


adm(){
  
  struct sessao adm;

  printf("Digite a quantidade de cadeiras nessa sessão:");
  scanf("%i", &adm.cadeira);
  printf("Digite o Dia que ira ocorrer a Palestra");
  scanf("%i", &adm.dia);
  printf("Digite o Horario que ira ocorrer a Pelestra");
  scanf("%i", &adm.hora);

}

