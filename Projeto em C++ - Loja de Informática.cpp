#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include<time.h>
#include <unistd.h>
typedef struct {
char nome [50];
char CPF[12];
char num_celular[12] ;
char endereco[100];
int data_ass;
int mes_ass;
int hora_ass,menudevolucao,dia,mes,ano,diareceb7,diareceb90,resposta,avalie,resposta2;;
char email_ass[100];
char problema [10000];
char nome_produto [100];
char ouvidoria[500];
}cadastro;
int menuN1, menuN2, aux1, animacao;


int main() {
  setlocale(LC_ALL,"Portuguese");


for(animacao = 0; animacao<5;animacao++){

  printf(" @@@   @@@@  @@  @@   @@@   @    @@@@@  @@@@    @@@@    @   @@\n");
usleep(15000);
  printf("@@@@@  @@@@  @@  @@  @@@@@  @    @@@@@  @@@@   @@@@@@   @   @@\n");
usleep(15000);
  printf("@@     @@    @@@ @@  @@@@@  @      @    @@     @@       @   @@\n");
usleep(15000);
  printf("@@@@   @@@@  @ @ @@  @@ @@  @      @    @@@@   @@       @@@@@@\n");
usleep(15000);
  printf("  @@@  @@@@  @  @@@ @@@ @@@ @      @    @@@@   @@       @@@@@@\n");
usleep(15000);
  printf("   @@  @@    @   @@ @@@@@@@ @      @    @@     @@       @   @@\n");
usleep(15000);
  printf("@@@@@  @@@@  @   @@ @@   @@ @      @    @@@@    @@@@@   @   @@\n");
usleep(15000);
  printf(" @@@   @@@@  @   @@ @@   @@ @      @    @@@@     @@@    @   @@\n");

  system ("cls");
  }
sleep(1);
  printf(" @@@   @@@@  @@  @@   @@@   @    @@@@@  @@@@    @@@@    @   @@\n");
usleep(15000);
  printf("@@@@@  @@@@  @@  @@  @@@@@  @    @@@@@  @@@@   @@@@@@   @   @@\n");
usleep(15000);
  printf("@@     @@    @@@ @@  @@@@@  @      @    @@     @@       @   @@\n");
usleep(15000);
  printf("@@@@   @@@@  @ @ @@  @@ @@  @      @    @@@@   @@       @@@@@@\n");
usleep(15000);
  printf("  @@@  @@@@  @  @@@ @@@ @@@ @      @    @@@@   @@       @@@@@@\n");
usleep(15000);
  printf("   @@  @@    @   @@ @@@@@@@ @      @    @@     @@       @   @@\n");
usleep(15000);
  printf("@@@@@  @@@@  @   @@ @@   @@ @      @    @@@@    @@@@@   @   @@\n");
usleep(15000);
  printf(" @@@   @@@@  @   @@ @@   @@ @      @    @@@@     @@@    @   @@\n");



  cadastro cadastro1;
  printf("\n============== Bem-vindo(a) a loja de inform�tica SENAITech =====================\n");
  printf("\nEstamos prontos para lhe atender!\n");
  CADASTRO:
  printf("\nPara come�ar o atendimento digite seu nome completo:\n");
  fflush(stdin);
  gets(cadastro1.nome);
  printf("Agora digite seu CPF (sem pontos e tra�o): \n");
  fflush(stdin);
  gets(cadastro1.CPF);
  strlen(cadastro1.CPF);
  while(strlen(cadastro1.CPF) != 11){
    printf("CPF inv�lido.");
    printf("Por favor digite o CPF novamente: \n");
    fflush(stdin);
      gets(cadastro1.CPF);	    
  }
  printf("\nDigite o n�mero do seu celular com DDD: \n");
  fflush(stdin);
  gets(cadastro1.num_celular);
  strlen(cadastro1.num_celular);
  while(strlen(cadastro1.num_celular) != 11){
    printf("\n N�mero inv�lido.");
    printf("\n Por favor digite o n�mero do seu celular novamente: \n");
    fflush(stdin);
      gets(cadastro1.num_celular); 
  }
  printf("\nPor favor, informe seu endere�o:  Rua, n�mero, Bairro e Cidade \n");
  gets(cadastro1.endereco);

  VOLTAR:
  printf("\n\nOl� %s, escolha a op��o de atendimento desejada: \n", cadastro1.nome);
  printf("\n* Digite 1 para cat�logo de produtos. \n* Digite 2 para assist�ncia t�cnica. \n* Digite 3 para solicitar devolu��o. \n* Digite 4 para refazer cadastro \n* Digite 5 encerrar atendimento.\n"); 
  scanf("%d", &menuN1);

  PRODUTO:
int produto, resposta;
if(menuN1==1){
  printf("Qual tipo de produto voc� est� procurando? \n 1 - Hardware em geral \n 2 - Perif�ricos \n 3 - Computadores montados \n 4 - Menu Inicial \n");
  scanf("%d", &menuN2);
  system("cls");
if(menuN2==1){
  printf ("\n\n #### PLACAS DE V�DEO: ####\n C�digo (1): RTX 3060 12GB GDDR6 Asus Dual fan \n De: R$ 2.333,32\n Por: R$ 1.999,99 \n � vista com at� 10%% OFF\n Ou R$ 2.222,21\n Em at� 10x de R$ 222,22 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 8 Unidades no estoque \n --------------------------------------\n Codigo (2):RX 6600 8GB ASRock 8GB GDDR6 Dual fan\n De: R$ 1.347,36\n Por: R$ 1.199,99\n � vista com at� 5%% OFF \n Ou R$ 1.263,15\n Em at� 10x de R$ 126,31 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 15 Unidades no estoque\n --------------------------------------\n C�digo (3): RX 550 Radeon Power Color AMD 2GB GDDR5\n De: R$ 411,75\n Por: R$ 309,99 � vista no PIX com at� 15%% OFF\n Ou R$ 364,69\n Em at� 10x de R$ 36,46 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 10 Unidades no estoque\n");
  printf ("\n\n #### PLACAS M�ES:####\n C�digo (4): Placa M�e Gigabyte B660M Aorus PRO, Intel LGA 1700, mATX, DDR4, M.2 NVME \n De: R$ 1.105,87\n Por:R$ 889,99 \n � vista com at� 15% OFF\n Ou R$ 1.047,05 \n Em at� 10x de R$ 104,70 sem juros no cart�o\n 90 DIAS GARANTIA\n 20 Unidades no estoque\n  -------------------------------------- \n Codigo (5):Placa M�e MSI B560M PRO-E, Intel LGA 1200, mATX, DDR4 \n Por: R$ 489,99 \n � vista com at� 15% OFF \n Ou R$ 576,46\n Em at� 10x de R$ 57,64 sem juros no cart�o\n 30 DIAS DE GARANTIA \n 16 Unidades no estoque\n --------------------------------------\n C�digo (6):Placa M�e MSI A520M-A PRO, AMD AM4, mATX, DDR4\n De: R$ 458,81 \n Por: R$ 369,99 \n � vista com at� 15% OFF\n Ou R$ 435,28\n Em at� 10x de R$ 43,52 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 30 Unidades no estoque\n --------------------------------------\n");
  printf ("\n\n #### PROCESSADORES:####\n C�digo (7): Processador AMD Ryzen 7 5700X, 3.4GHz (4.6GHz Max Turbo), Cache 36MB, Sem V�deo \n De: R$ 2.357,88 \n Por: R$ 1.399,99 \n � vista no PIX com at� 5%% OFF \n Ou R$ 1.473,67 \n Em at� 10x de R$147,36 sem juros no cart�o \n 90 DIAS DE GARANTIA \n 12 unidades no estoque \n --------------------------------------\n Codigo(8):Processador Intel Core i5-10400F, 2.9GHz (4.3GHz Max Turbo), Cache 12MB, 6 N�cleos, 12 Threads \n De: R$ 598,99 \n Por R$ 598,99 \n � vista no PIX com at� 10%% OFF \n Ou R$665,54 \n Em at� 10x de R$ 66,55 sem juros no cart�o \n 90 DIAS DE GARANTIA \n 5 unidades no estoque \n--------------------------------------\n Codigo(9):Processador AMD Ryzen 5 5600G, 3.9GHz (4.4GHz Max Turbo), Cache 19MB, 6 N�cleos, 12 Threads, V�deo Integrado \n De: R$ 1000,00 \n Por R$ 899,99 \n � vista no PIX com at� 5%% OFF \n Ou R$947,36 \n Em at� 10x de R$ 94,73 sem juros no cart�o \n 90 DIAS DE GARANTIA \n 4 unidades no estoque \n--------------------------------------\n");
  printf("\n\nVoc� deseja comprar algum produto? Digite 1 para - Sim | 2 para - N�o \n ");
  scanf("%d", &resposta);
  switch(resposta){
  	case 1:
  		printf("Informe o c�digo do produto que voc� deseja comprar: ");
  		scanf("%d", &produto);
  		system("cls");
  		switch(produto){
  			case 1: 
  			printf ("\nPRODUTO SELECIONADO: \n");
  			printf("\nC�digo (1) RTX 3060 12GB GDDR6 Asus Dual fan \n De: R$ 2.333,32\n Por: R$ 1.999,99 \n � vista com at� 10%% OFF\n Ou R$ 2.222,21\n Em at� 10x de R$ 222,22 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 8 Unidades no estoque");
  			printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 2:
  			printf ("\nPRODUTO SELECIONADO: \n");
  		  printf("\n C�digo (2)\nRX 6600 8GB ASRock 8GB GDDR6 Dual fan\n De: R$ 1.347,36\n Por: R$ 1.199,99\n � vista com at� 5%% OFF \n Ou R$ 1.263,15\n Em at� 10x de R$ 126,31 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 15 Unidades no estoque\n");
  	   	  printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 3: 
  			printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nC�digo (3): RX 550 Radeon Power Color AMD 2GB GDDR5\n De: R$ 411,75\n Por: R$ 309,99 � vista no PIX com at� 15%% OFF\n Ou R$ 364,69\n Em at� 10x de R$ 36,46 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 10 Unidades no estoque\n");
  		  printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 4: 
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf ("\nC�digo (4)Placas M�e: \n\nPlaca M�e Gigabyte B660M Aorus PRO, Intel LGA 1700, mATX, DDR4, M.2 NVME \n De: R$ 1.105,87\n Por:R$ 889,99 \n � vista com at� 15% OFF\n Ou R$ 1.047,05 \n Em at� 10x de R$ 104,70 sem juros no cart�o\n 90 DIAS GARANTIA\n 20 Unidades no estoque\n ");  			
            printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 5: 
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf ("\nC�digo (5):Placa M�e MSI B560M PRO-E, Intel LGA 1200, mATX, DDR4 \n Por: R$ 489,99 \n � vista com at� 15% OFF \n Ou R$ 576,46\n Em at� 10x de R$ 57,64 sem juros no cart�o\n 30 DIAS DE GARANTIA \n 16 Unidades no estoque \n");
            printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 6:
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf("\nC�digo (6):Placa M�e MSI A520M-A PRO, AMD AM4, mATX, DDR4\n De: R$ 458,81 \n Por: R$ 369,99 \n � vista com at� 15% OFF\n Ou R$ 435,28\n Em at� 10x de R$ 43,52 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 30 Unidades no estoque\n\n");
            printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 7: 
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf ("\nC�digo (7): Processador AMD Ryzen 7 5700X, 3.4GHz (4.6GHz Max Turbo), Cache 36MB, Sem V�deo \n De: R$ 2.357,88 \n Por: R$ 1.399,99 \n � vista no PIX com at� 5%% OFF \n Ou R$ 1.473,67 \n Em at� 10x de R$147,36 sem juros no cart�o \n 90 DIAS DE GARANTIA \n 12 unidades no estoque \n\n");
            printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 8: 
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf ("\nC�digo(8):Processador Intel Core i5-10400F, 2.9GHz (4.3GHz Max Turbo), Cache 12MB, 6 N�cleos, 12 Threads \n De: R$ 598,99 \n Por R$ 598,99 \n � vista no PIX com at� 10%% OFF \n Ou R$665,54 \n Em at� 10x de R$ 66,55 sem juros no cart�o \n 90 DIAS DE GARANTIA \n 5 unidades no estoque \n\n");
            printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 9: 
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf ("\nC�digo(9):Processador AMD Ryzen 5 5600G, 3.9GHz (4.4GHz Max Turbo), Cache 19MB, 6 N�cleos, 12 Threads, V�deo Integrado \n De: R$ 1000,00 \n Por R$ 899,99 \n � vista no PIX com at� 5%% OFF \n Ou R$947,36 \n Em at� 10x de R$ 94,73 sem juros no cart�o \n 90 DIAS DE GARANTIA \n 4 unidades no estoque \n\n");
            printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  
	}
		case 2:
		
		printf("\n\nOk... Retornando para cat�logo de produtos\n");
		sleep(5);
		goto PRODUTO;
  }
  }
  
if (menuN2==2){
  printf ("\n\n #### TECLADOS: #### \n Codigo (1): Teclado com fio USB Logitech K120 Resistente � Respingos e Layout ABNT2 \n De:R$70,64 \n Por: R$ 64,90 \n � vista com at� 10%% OFF\n Ou R$ 72,11\n Em at� 2x de R$ 36,05 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 10 Unidade no estoque \n --------------------------------------\n Codigo (2): Teclado Padr�o Maxprint USB Preto\n De: R$ 35,20\n Por: R$ 19,99\n � vista no cart�o com at� 15%% OFF\n Ou R$ 23,52\n Em at� 1x de R$ 21,17 sem juros no cart�o \n --------------------------------------\n Codigo (3):Teclado Mec�nico Gamer HyperX Alloy MKW100, RGB, Switch Red, Full Size, US, Preto\n De: R$ 294,11\n Por: R$ 249,99 \n � vista com at� 15%% OFF\n Ou R$ 294,11\n Em at� 10x de R$ 29,41 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 20 Unidade no estoque\n--------------------------------------\n C�digo(4):Teclado Mec�nico Gamer Redragon Kumara, Anti-Ghosting, RGB, Switch Outemu Red, ABNT2, Branco\n De: R$ 223,52\n Por: R$ 179,99\n � vista com at� 15%% OFF\n Ou R$ 211,75\n Em at� 8x de R$ 26,46 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 5 Unidade no estoque\n --------------------------------------\n Codigo (5): Teclado sem fio Logitech K270 com Teclas de M�dia de F�cil Acesso, Conex�o USB, Pilhas Inclusas e Layout ABNT2\n De: R$ 200,00\n Por: R$ 159,99\n � vista com at� 10%% OFF\n Ou R$ 177,77\n Em at� 7x de R$ 25,39 sem juros no cart�oa\n 90 DIAS DE GARANTIA\n 15 Unidade no estoque\n--------------------------------------\n");
  printf ("\n\n #### MOUSES: #### \n Codigo(6): Mouse com fio USB Logitech M90 com Design Ambidestro e Facilidade Plug and Play \n De: R$ 47,05\n Por: R$ 29,99\n � vista no PIX com at� 15% OFF\n Ou R$ 35,28\n Em at� 1x de R$ 31,75 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 11 unidade no estoque\n--------------------------------------\n Codigo (7):Mouse Max Print Classic Essential, 1000DPI, USB, Preto e Transparente\n De: R$ 10,00\n Por: R$ 6,99\n � vista no PIX com at� 15%% OFF\n Ou R$ 8,22\n Em at� 1x de R$ 7,40 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 5 Unidade em estoque\n\n Codigo(8):Mouse Gamer Redragon Cobra, Chroma RGB, 12400DPI, 7 Bot�es, Preto\n De: R$ 152,93\n Por: R$ 99,80\n � vista no PIX com at� 15%% OFF\n Ou R$ 117,41\n Em at� 4x de R$ 29,35 sem juros no cart�o\n 90 DIAS DE GARANTIA \n 8 Unidade no estoque\n--------------------------------------\n C�digo(8):Mouse Gamer Redragon Cobra, Chroma RGB, 12400DPI, 7 Bot�es, Preto\n De: R$ 152,93\n Por: R$ 99,80\n � vista no PIX com at� 15%% OFF\n Ou R$ 117,41\n Em at� 4x de R$ 29,35 sem juros no cart�o\n 90 DIAS DE GARANTIA \n 8 Unidade no estoque\n\n");
printf("\n\nVoc� deseja comprar algum produto? Digite 1 para - Sim | 2 para - N�o \n ");
  scanf("%d", &resposta);
switch(resposta){
  	case 1:
  		printf("Informe o c�digo  produto que voc� deseja comprar: ");
  		scanf("%d", &produto);
  		system ("cls");
  		switch(produto){
  		case 1:
  		  printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCodigo (1):Teclado com fio USB Logitech K120 Resistente � Respingos e Layout ABNT2 \n De:R$70,64 \n Por: R$ 64,90 \n � vista com at� 10%% OFF\n Ou R$ 72,11\n Em at� 2x de R$ 36,05 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 10 Unidade no estoque \n \n  ");
          printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
  	    break;
        case 2: 
  		  printf ("\nPRODUTO SELECIONADO: \n");
		  printf ("\nCodigo (2):Teclado Padr�o Maxprint USB Preto\n De: R$ 35,20\n Por: R$ 19,99\n � vista no cart�o com at� 15%% OFF\n Ou R$ 23,52\n Em at� 1x de R$ 21,17 sem juros no cart�o \n \n ");
          printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
		case 3: 
          printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCodigo (3): Teclado Mec�nico Gamer HyperX Alloy MKW100, RGB, Switch Red, Full Size, US, Preto\n De: R$ 294,11\n Por: R$ 249,99 \n � vista com at� 15%% OFF\n Ou R$ 294,11\n Em at� 10x de R$ 29,41 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 20 Unidade no estoque\n\n ");
          printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
		case 4: 
          printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCodigo(4):Teclado Mec�nico Gamer Redragon Kumara, Anti-Ghosting, RGB, Switch Outemu Red, ABNT2, Branco\n De: R$ 223,52\n Por: R$ 179,99\n � vista com at� 15%% OFF\n Ou R$ 211,75\n Em at� 8x de R$ 26,46 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 5 Unidade no estoque\n \n ");
          printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
		case 5: 
          printf ("\nPRODUTO SELECIONADO: \n");
		  printf("\nCodigo (5): Teclado sem fio Logitech K270 com Teclas de M�dia de F�cil Acesso, Conex�o USB, Pilhas Inclusas e Layout ABNT2\n De: R$ 200,00\n Por: R$ 159,99\n � vista com at� 10%% OFF\n Ou R$ 177,77\n Em at� 7x de R$ 25,39 sem juros no cart�oa\n 90 DIAS DE GARANTIA\n 15 Unidade no estoque");
          printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
		case 6: 
          printf ("\nPRODUTO SELECIONADO: \n"); 
          printf ("\nCodigo(6): Mouse com fio USB Logitech M90 com Design Ambidestro e Facilidade Plug and Play \n De: R$ 47,05\n Por: R$ 29,99\n � vista no PIX com at� 15% OFF\n Ou R$ 35,28\n Em at� 1x de R$ 31,75 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 11 unidade no estoque\n\n  ");
          printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
        case 7: 
          printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCodigo (7):Mouse Max Print Classic Essential, 1000DPI, USB, Preto e Transparente\n De: R$ 10,00\n Por: R$ 6,99\n � vista no PIX com at� 15%% OFF\n Ou R$ 8,22\n Em at� 1x de R$ 7,40 sem juros no cart�o\n 90 DIAS DE GARANTIA\n 5 Unidade em estoque\n\n  ");
          printf("\n N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
		case 8: 
          printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCodigo(8):Mouse Gamer Redragon Cobra, Chroma RGB, 12400DPI, 7 Bot�es, Preto\n De: R$ 152,93\n Por: R$ 99,80\n � vista no PIX com at� 15%% OFF\n Ou R$ 117,41\n Em at� 4x de R$ 29,35 sem juros no cart�o\n 90 DIAS DE GARANTIA \n 8 Unidade no estoque\n\n ");
          printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
}
	case 2:
		printf("\n\nOk... Retornando para cat�logo de produtos\n");
		sleep(5);
		goto PRODUTO;
}
}
if (menuN2==3){  
	printf("\n\n #### COMPUTADORES MONTADOS: #### \n Codigo (1): PC Gamer AMD Ryzen 5 5600g Radeon Vega 7 Graphics, 16GB DDR4 3000mhz, SSD 480GB, Fonte 500W \n De: R$ 2.479,00\n Por: R$ 2.039,00\n � vista \n Ou em at� 10x de R$ 203,90 sem juros no cart�o\n 30 DIAS DE GARANTIA\n 3 Unidades no estoque\n --------------------------------------\n Codigo (2):PC Gamer Intel Core I9 12900kf, Rtx4070 Ti 12GB, RAM 32GB, SSD 1tb, Fonte 1000W\n De: R$ 18.999,07 \n Por: R$ 16.330,07\n � vista \n Ou: Em at� 10x de R$ 1.633,00 sem juros no cart�o\n 30 DIAS DE GARANTIA\n 1 Unidade no estoque\n --------------------------------------\n C�digo (3): Computador Corporate All In One, I5, 8GB, 500GB, Windows 10 + Monitor 19\n Por: R$ 2.054,51 \n � vista\n Ou: Em at� 10x de R$ 205,45 sem juros no cart�o\n 30 DIAS DE GARANTIA\n 10 Unidades no estoque\n --------------------------------------\n");
    printf("\n\nVoc� deseja comprar algum produto? Digite 1 para - Sim | 2 para - N�o\n ");
    scanf("%d", &resposta);
switch(resposta){
  	case 1:
  	  printf("\n Informe o produto que voc� deseja comprar: ");
  	  scanf("%d", &produto);
  	switch(produto){
        case 1: 
         printf ("\nPRODUTO SELECIONADO: \n");
	     printf("\nC�digo (1): PC Gamer AMD Ryzen 5 5600g Radeon Vega 7 Graphics, 16GB DDR4 3000mhz, SSD 480GB, Fonte 500W \n De: R$ 2.479,00\n Por: R$ 2.039,00\n ? vista \n Ou em at? 10x de R$ 203,90 sem juros no cart?o\n 30 DIAS DE GARANTIA\n 3 Unidades no estoque\n \n");
         printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
	    break;
	    case 2: 
	     printf ("\nPRODUTO SELECIONADO: \n");
	     printf("\nC�digo (2):PC Gamer Intel Core I9 12900kf, Rtx4070 Ti 12GB, RAM 32GB, SSD 1tb, Fonte 1000W\n De: R$ 18.999,07 \n Por: R$ 16.330,07\n ? vista \n Ou: Em at? 10x de R$ 1.633,00 sem juros no cart?o\n 30 DIAS DE GARANTIA\n 1 Unidade no estoque\n Computador Corporate All In One, I5, 8GB, 500GB, Windows 10 + Monitor 19\n Por: R$ 2.054,51 \n � vista\n Ou: Em at� 10x de R$ 205,45 sem juros no cart�o\n 30 DIAS DE GARANTIA\n 10 Unidades no estoque\n");
	     printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
	    case 3:
	      printf ("\nPRODUTO SELCIONADO: \n");
		  printf("\nC�digo (3): Computador Corporate All In One, I5, 8GB, 500GB, Windows 10 + Monitor 19\n Por: R$ 2.054,51 \n � vista\n Ou: Em at� 10x de R$ 205,45 sem juros no cart�o\n 30 DIAS DE GARANTIA\n 10 Unidades no estoque\n");
		  printf("\n\n ATEN��O: N�o fornecemos entrega por delivery, nem efetuamos pagamentos e emiss�o de notas fiscais online. Venha retirar seu produto em nossa unidade mais pr�xima de seu endere�o. Nossos hor�rios de funcionamento s�o: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17");
        break;
	}
	case 2:
		printf("\n\nOk... Retornando para cat�logo de produtos\n");
		sleep(2);
		
		goto PRODUTO;
}
}
if (menuN2 == 4){
system("cls");
goto VOLTAR;	
}
}


if (menuN1 == 2){

printf("\n ######### AGENDAMENTO PARA ASSISTENCIA ######### \n");

printf ("\n---------------------------------------------------\nDigite: \n 1 - Agendamento para Assistencia \n 2 - Menu Inicial \n > ");
scanf ("%d", &cadastro1.resposta);
if (cadastro1.resposta == 1){

printf ("\nDigite o nome do produto:\n");
fflush(stdin);
fgets (cadastro1.nome_produto,30,stdin);

printf ("\nInforme o seu email:\n");
fflush (stdin);
gets (cadastro1.email_ass);


printf ("\nInforme a data para agendamento:\n");
scanf ("%d",&cadastro1.data_ass);

while (cadastro1.data_ass > 31){

  printf ("\nData �nvalida.");
  printf ("\nInforme a data novamente: ");
  scanf ("%d",&cadastro1.data_ass);
}

printf ("\nInforme o m�s:\n");
scanf ("%d",&cadastro1.mes_ass);
while(cadastro1.mes_ass > 12){
    printf("\nM�s inv�lido.");
    printf("\nPor favor digite o m�s novamente: \n");
    scanf ("%d",&cadastro1.mes_ass);   
  }

printf("\nNosso hor�rio de atendimento � de 8h �s 17h. ");
printf ("\nAgende um hor�rio para ser atendido: \n 08 \n 09 \n 10 \n 11 \n 12 (Hor�rio de almo�o)\n 13 \n 14 \n 15 \n 16 \n 17 \nDigite sua hora: \n");
scanf ("%d", &cadastro1.hora_ass); 
while (cadastro1.hora_ass < 8 || cadastro1.hora_ass > 17 && cadastro1.hora_ass == 12){
    printf("\nHora inv�lida.");
    printf("\nPor favor digite a hora novamente: \n");
      scanf("%d", &cadastro1.hora_ass);
 }

printf ("\nInforme o problema do produto:\n>");
fflush(stdin);
gets (cadastro1.problema);

AQUI:
printf ("\n Carregando rel�torio...........\n");
sleep(3);
system("cls");
printf ("\n ########### REL�TORIO DE AGENDAMENTO PARA ASSIST�NCIA T�CNICA ############# \n");
printf ("\n -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
printf ("\n >< NOME: %s",cadastro1.nome);
printf ("\n >< CPF: %s", cadastro1.CPF);
printf ("\n >< ENDERE�O:%s", cadastro1.endereco);
printf ("\n >< TELEFONE: %s",cadastro1.num_celular);
printf ("\n >< EMAIL: %s", cadastro1.email_ass);
printf ("\n >< DATA %d / %d", cadastro1.data_ass, cadastro1.mes_ass);
printf ("\n >< HORA: %d horas", cadastro1.hora_ass);
printf ("\n >< PRODUTO: %s ", cadastro1.nome_produto);
printf (">< PROBLEMA: %s \n", cadastro1.problema);
printf ("\n Apresente esse rel�torio/comprovante a loja no dia do agendamento para a assistencia\n");
printf ("\n Assinado: Marcos Santana Freitas");
printf ("\n -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");

printf ("\n ####### MENU DE REL�TORIO ########## \n");
printf ("\n\nDigite um n�mero abaixo para: \n 1 - Impress�o do rel�torio \n 2 - Baixar PDF do rel�torio \n 3 - Menu Inicial \n>");
scanf ("%d",&cadastro1.resposta);

if (cadastro1.resposta == 1){
  //optei por declarar a variavel no meio do programa
  int resposta;

  VOLTANDO:


  printf ("\nSua impressora est� conectada? \n 1 - Sim \n 2 - N�o\n Digite:");
  scanf ("%d",&resposta);

  while (resposta ==2){

    printf ("\nConecte sua impressora!!!!! \n");
    printf ("\nAguardando ........");
    sleep(5);
    goto VOLTANDO;
    }
  if(resposta == 1){

    printf ("\nSeu documento ira ser impresso, aguarde alguns segundos \n ");
    printf ("\nImprimindo.........");
    sleep(5);
    system("cls");
    ERRADO:
    printf ("\nImpress�o concluida com sucesso!!!!! \n\n Digite 1 para voltar ao Menu de Rel�torio\n");
    scanf ("%d",&cadastro1.resposta);
    if (cadastro1.resposta == 1){
    system("cls");
    goto AQUI;
  }
    else {

      printf("\n N�mero digitado �nvalido.\n");
      sleep(5);
      system("cls");
      goto ERRADO;
    }


}
}
if (cadastro1.resposta == 2 ){

  printf ("\n Baixando........\n");
  usleep(15000);
  sleep(3);
  printf ("\n Seu download foi concluido!!!!!!");
  sleep(3);
  system("cls");
  goto AQUI;	
}
if (cadastro1.resposta == 3){
system("cls");
goto VOLTAR;
}
}

if (cadastro1.resposta==2){
            system("cls");
              goto VOLTAR;
}
}

INVALIDA:
if (menuN1 == 3){
    printf("Ol� %s , estamos aqui para lhe ajudar.. \n", cadastro1.nome);// NOME ser� a vari�vel nome que est� no  cadastro.//
  printf("Por favor, informe o motivo da devolu��o: \n ");

  printf("\n* Digite 1 - Insatisfa��o/ arrependimento. \n* Digite 2 - Produto com defeito. \n* Digite 3 - Recebi pedido errado. \n* Digite 4 - Ouvidoria. \n* Digite 5 - Voltar ao menu anterior.\n");
  scanf("%d", &cadastro1.menudevolucao);

  if(cadastro1.menudevolucao==1){
        printf("\nH� quantos dias recebeu o pedido? ");
    scanf("%d", &cadastro1.diareceb7);
    if(cadastro1.diareceb7 <=7){
      printf ("\n*Ok. Voc� deve devolver o produto na loja de inform�tica. \n Um c�digo ser� gerado e enviado para seu celular via SMS.\n ...\n");
      sleep(1);
      printf(" C�digo enviado para %s. \n\n Apresente o c�digo na loja para devolver o produto.\n\n", cadastro1.num_celular);
sleep(1);              
 goto FINAL;

    }
    else{
    printf("\n*Infelizmente n�o ser� poss�vel a devolu��o do produto.\n O prazo m�ximo para devolu��o � de 7 dias ap�s o recebimento.\n\n ");
               goto FINAL;

}
  }
    if(cadastro1.menudevolucao==2){
    printf("\nH� quantos dias recebeu o pedido? ");
    scanf("%d",&cadastro1.diareceb90);
    if(cadastro1.diareceb90<=90 && cadastro1.diareceb90 >7){
      printf("\n*Aguarde... Voc� ser� direcionado(a) ao menu principal.\n Selecione a op��o Agendamento e agende assist�ncia t�cnica para seu produto. \n");
      sleep(10);//por ser menor de 90 dias iremos encaminhar para agendamento//
      system("cls");
  goto VOLTAR;
    }
    else if(cadastro1.diareceb90<=7){
    	printf ("\n*Ok. Voc� deve devolver o produto na loja de inform�tica. \n Um c�digo ser� gerado e enviado para seu celular via SMS.\n ...\n");
      sleep(1);
      printf(" C�digo enviado para %s. \n\n Apresente o c�digo na loja para devolver o produto.\n\n", cadastro1.num_celular);
sleep(1);              
 goto FINAL;
	}
    else{
    printf("\n*Infelizmente n�o ser� poss�vel a devolu��o do produto.\n O prazo m�ximo para devolu��o do produto com defeito � de 90 dias ap�s o recebimento.\n Agora voc� deve entrar em contato com o fabricante.\n\n ");          goto FINAL;
}
  }


    if(cadastro1.menudevolucao==3){
        printf("\nH� quantos dias recebeu o pedido? ");
    scanf("%d", &cadastro1.diareceb7);
    if(cadastro1.diareceb7 <=7){
      printf("\n*Ok. Voc� deve devolver o produto na loja de inform�tica. \n Um c�digo ser� gerado e enviado para seu celular via SMS.\n ...\n");
      sleep(1);
      printf(" C�digo enviado para %s. \n\n Apresente o c�digo na loja para devolver o produto.\n\n", cadastro1.num_celular);
               goto FINAL;

    }
    else{
    printf("\n*Infelizmente n�o ser� poss�vel a devolu��o do produto.\n O prazo m�ximo para devolu��o caso o pedido esteja errado � de 7 dias ap�s o recebimento.\n\n ");
               goto FINAL;

    }
  }

    if(cadastro1.menudevolucao==4){
  printf("\n*Bem vindo a ouvidoria da loja de inform�tica. \n Se seu problema n�o foi resolvido nas op��es anteriores, informe como podemos lhe ajudar. \n M�ximo 500 caracteres\n\n");
    fflush(stdin);
  gets(cadastro1.ouvidoria);
  printf("\n*Iremos avaliar suas informa��es e retornaremos em menos de 72 horas.\n\n");
  sleep(2);


         goto FINAL;

  }

    if(cadastro1.menudevolucao==5){
            system("cls");
              goto VOLTAR;
  }
if (cadastro1.menudevolucao >5 || cadastro1.menudevolucao<0){
	    printf("\nOp��o inv�lida\n");
	    goto INVALIDA;
	}

}
else if (menuN1 ==4){
	int resposta;
	printf ("\n Voc� deseja refazer seu cadastro? \n 1 - Sim \n 2 - N�o \n");
	scanf("%d",&resposta);
	if (resposta == 1){
		printf("\n Voc� ser� redirecionado ao cadastro.");
		system("cls");
		goto CADASTRO;
	}
	else if (resposta == 2){
		printf ("\n Voc� ser� redirecionado ao Menu Inicial");
		sleep (3);
		system("cls");
		goto VOLTAR;
	}
	else{
		
		printf ("\n N�mero �nvalido, voc� ser� redirecionado ao Menu Inicial");
		sleep (3);
		system ("cls");
		goto VOLTAR;
	}
}
 if (menuN1 == 5) {

        printf("Voc� deseja continuar o atendimento?.\n Digite 1 para caso deseje continuar.\n Digite 2 para encerrar atendimento\n>: ");
        scanf("%d", &cadastro1.resposta);

        if (cadastro1.resposta == 2) {
          system("cls");
           FINAL:
          printf("\n---------------ATENDIMENTO ENCERRADO-------------------\n");
            printf("O atendimento ao cliente foi encerrado. Agradecemos por buscar nossos servi�os!.\nAvalie nosso atendimiento com uma nota de 1 a 10!\n >:");
          scanf("%d", &cadastro1.avalie);
          printf("Agradecemos sua avalia��o!\n");
          printf("Se quiser voltar ao menu principal da nossa loja digite 1, caso contr�rio digite 2 para finalizar\n>");
          scanf("%d", &cadastro1.resposta2);
          if (cadastro1.resposta2==1){
            system("cls");
              goto VOLTAR;
      }
      else {
        return 0; 
      }
        }
        else if (cadastro1.resposta == 1) {
          system("cls");
           goto VOLTAR; 

        }
        else {
            printf("Op��o inv�lida.\n");
        }
    }

    return 0;
}























