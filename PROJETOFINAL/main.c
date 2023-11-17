#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"

int main()

{
  FILE *arq;
  arq = fopen("recibo2.txt", "a");

    //STRUCT COM VARIAS VARIAVEIS DIFERENTES//

    struct passagem
    {
      char x[50];
      char leitura [200];
      int destino;
      int hsaida;
      int msaida;
      int hchegada;
      int mchegada;
      int quantidade;
      float total;
    };

    struct passagem p;

  //VARIAVEIS//

    int escolha, confirma, c;
    float cp1, l2, g3, a4, t5, sjc6, t;


    //SAUDACAO//

 do {

  printf("\n-----------------------");
  printf("\nMATIZA'S Passagens\n");
  printf("Ola, seja bem vindo!\n");

   //MENU//


  printf("------------------------\n");
  printf("(1) Cidades e Horarios\n");
  printf("(2) Tempo de Viagem\n");
  printf("(3) Valor da Passagem\n");
  printf("(4) Comprar passagem\n");
  printf("(5) Leitura de Dados\n");
  printf("(6) Finalizar");
  printf("\n------------------------\n");
  printf("Escolha uma opcao: ");
  scanf("%d", &escolha);
  printf("------------------------\n");

  switch (escolha) {

  //CIDADES E HORARIOS//

  case 1:
  printf("\n--------------------\n");
  printf("Cachoeira Paulista\n5:10 - 5:35\n6:00 - 6:25\n7:00 - 7:25\n7:50 - 8:15\n9:20 - 9:45\n11:00 - 11:25\n11:40 - 12:05\n13:00 - 13:25\n14:00 - 14:25\n15:00 - 15:25\n16:00 - 16:25\n17:00 - 17:25\n18:00 - 18:25\n20:00 - 20:25\n23:00 - 23:25\n");
  printf("\n--------------------\n");
  printf("Lorena\n5:10 - 6:05\n6:30 - 7:25\n7:30 - 8:25\n9:20- 10:15\n11:00 - 11:55\n12:40 - 13:35\n13:40 - 14:35\n14:40 - 15:35\n16:00 - 16:55\n17:40 - 18:35\n20:00 - 20:55\n23:00 - 23:55\n");
  printf("\n--------------------\n");
  printf("Guaratingueta\n5:10 - 6:25\n6:30 - 7:45\n7:50 - 9:05\n9:20- 10:35\n11:00 - 12:15\n12:40 - 13:55\n14:40 - 15:55\n16:00 - 17:15\n18:00 - 19:15\n20:00 - 21:15\n22:00 - 23:15\n");
  printf("\n--------------------\n");
  printf("Aparecida\n5:10 - 6:40\n7:30 - 9:00\n9:20- 10:50\n11:00 - 12:30\n12:40 - 14:10\n14:40 - 16:10\n16:40 - 18:10\n19:00 - 20:30\n22:00 - 23:30\n");
  printf("\n--------------------\n");
  printf("Taubate\n5:00 - 7:30\n10:00 - 12:30\n15:00 - 17:30\n21:00 - 23:30\n");
  printf("\n--------------------\n");
  printf("Sao Jose dos Campos\n4:50 - 8:10\n7:50 - 11:20\n11:00 - 14:30\n16:00 - 19:30\n20:00 - 23:30\n");
  printf("\n--------------------\n");
  break;

   //TEMPO DE VIAGEM//

   case 2:
   printf("\n----------------------------------------\n");
   printf("Cruzeiro / Cachoeira Paulista - 25m\n");
   printf("\n----------------------------------------\n");
   printf("Cruzeiro / Lorena - 55m\n");
   printf("\n----------------------------------------\n");
   printf("Cruzeiro / Guaratingueta - 1h 15m\n");
   printf("\n----------------------------------------\n");
   printf("Cruzeiro / Aparecida - 1h 30m\n");
   printf("\n----------------------------------------\n");
   printf("Cruzeiro / Taubate - 2h 30m\n");
   printf("\n----------------------------------------\n");
   printf("Cruzeiro / Sao Jose dos Campos - 3h 20m\n");
   printf("\n----------------------------------------\n");

system("pause");
system("cls");

   break;

    //VALOR DA PASSAGEM//

    case 3:
    printf("\n--------------------------------------\n");
    printf("Cruzeiro / Cachoeira Paulista $6,50\n");
    printf("\n--------------------------------------\n");
    printf("Cruzeiro / Lorena - $12,35\n");
    printf("\n--------------------------------------\n");
    printf("Cruzeiro / Guaratingueta - $18,05\n");
    printf("\n--------------------------------------\n");
    printf("Cruzeiro / Aparecida - $19,30\n");
    printf("\n--------------------------------------\n");
    printf("Cruzeiro / Taubate - $37,55\n");
    printf("\n--------------------------------------\n");
    printf("Cruzeiro / Sao Jose dos Campos - $50,00\n");
    printf("\n--------------------------------------\n");

system("pause");
system("cls");

    break;

      //COMPRAR PASSAGEM//

      case 4:

      printf("Cidade de Origem:\nCRUZEIRO\n\n");

      printf("Em CIDADE DE DESTINO escolha o numero referente a cidade que deseja.\n\n");
      printf("(1) Cachoeira Paulista: $6,50\n(2) Lorena: $12,35\n(3) Guaratingueta: $18,05\n(4) Aparecida: $19,30\n(5) Taubate: $37,55\n(6) Sao Jose dos Campos: $50,00\n\n");
      printf("Cidade de Destino: \n");
      scanf("%d", &p.destino);

      printf("\nQuantidade de passagens: \n");
      scanf("%d", &p.quantidade);

      printf("\nHora de Saida: \n");
      scanf("%d:%d", &p.hsaida, &p.msaida);

      printf("\nHora de Chegada: \n");
      scanf("%d:%d", &p.hchegada, &p.mchegada);

      switch (p.destino) {

        case 1:
        cp1 = 6.50;
        t= multiplicacao(p.quantidade,cp1);
        break;

        case 2:
        l2 = 12.35;
        t= multiplicacao(p.quantidade,l2);
        break;

        case 3:
        g3 = 18.05;
        t= multiplicacao(p.quantidade,g3);
        break;

        case 4:
        a4 = 19.30;
        t= multiplicacao(p.quantidade,a4);
        break;

        case 5:
        t5 = 37.55;
        t= multiplicacao(p.quantidade,t5);
        break;

        case 6:
        sjc6 = 50.00;
        t= multiplicacao(p.quantidade,sjc6);
        break;

      }

 system("cls");

 if(p.destino==1) {
        strcpy(p.x, "CACHOEIRA PAULISTA");
 }
 if(p.destino==2) {
        strcpy(p.x, "LORENA");
 }
 if(p.destino==3) {
        strcpy(p.x, "GUARATINGUETA");
 }
 if(p.destino==4) {
        strcpy(p.x, "APARECIDA");
 }
 if(p.destino==5) {
        strcpy(p.x, "TAUBATE");
 }
 if(p.destino==6) {
        strcpy(p.x, "SAO JOSE DOS CAMPOS");
 }

      //RECIBO//

        printf("\n ----- RECIBO ----- \n");

        printf("Cidade de Origem: CRUZEIRO\n");
        printf("Cidade de Destino: %s \n",p.x);
        printf("Quantidade de passagens: %d \n", p.quantidade);
        printf("Hora de Saida: %d:%d \n", p.hsaida, p.msaida);
        printf("Hora de Chegada: %d:%d \n", p.hchegada, p.mchegada);
        printf("Total: %.2f", t);

        printf("\n\nCONFIRME A COMPRA\n");
        printf("\n(1) Confirmar     (2) Cancelar\n");
        scanf("%d",&c);

         if (c==1)
         {
             arq = fopen("recibo2.txt", "a");

        printf("\n\nCOMPRA REALIZADA COM SUCESSO\n\n");

        fprintf(arq, "\n\nCidade de Origem: CRUZEIRO\n");
        fprintf(arq, "Cidade de Destino: %s \n",p.x);
        fprintf(arq, "Quantidade de passagens: %d \n", p.quantidade);
        fprintf(arq, "Hora de Saida: %d:%d \n", p.hsaida, p.msaida);
        fprintf(arq, "Hora de Chegada: %d:%d \n", p.hchegada, p.mchegada);
        fprintf(arq, "Total: %.2f", t);
        fclose(arq);

         }

system("pause");
system("cls");

      break;

      case 5:

      arq=fopen("recibo2.txt", "r");
      while(fgets(p.leitura,200,arq)!=NULL)
     {
      printf("%s", p.leitura);
     }

fclose(arq);

system ("pause");
system("cls");

     break;


}
 }while(escolha<=5);

    return 0;
}
