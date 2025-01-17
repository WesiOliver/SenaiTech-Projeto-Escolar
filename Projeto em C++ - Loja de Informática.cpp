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
  printf("\n============== Bem-vindo(a) a loja de informática SENAITech =====================\n");
  printf("\nEstamos prontos para lhe atender!\n");
  CADASTRO:
  printf("\nPara começar o atendimento digite seu nome completo:\n");
  fflush(stdin);
  gets(cadastro1.nome);
  printf("Agora digite seu CPF (sem pontos e traço): \n");
  fflush(stdin);
  gets(cadastro1.CPF);
  strlen(cadastro1.CPF);
  while(strlen(cadastro1.CPF) != 11){
    printf("CPF inválido.");
    printf("Por favor digite o CPF novamente: \n");
    fflush(stdin);
      gets(cadastro1.CPF);	    
  }
  printf("\nDigite o número do seu celular com DDD: \n");
  fflush(stdin);
  gets(cadastro1.num_celular);
  strlen(cadastro1.num_celular);
  while(strlen(cadastro1.num_celular) != 11){
    printf("\n Número inválido.");
    printf("\n Por favor digite o número do seu celular novamente: \n");
    fflush(stdin);
      gets(cadastro1.num_celular); 
  }
  printf("\nPor favor, informe seu endereço:  Rua, número, Bairro e Cidade \n");
  gets(cadastro1.endereco);

  VOLTAR:
  printf("\n\nOlá %s, escolha a opção de atendimento desejada: \n", cadastro1.nome);
  printf("\n* Digite 1 para catálogo de produtos. \n* Digite 2 para assistência técnica. \n* Digite 3 para solicitar devolução. \n* Digite 4 para refazer cadastro \n* Digite 5 encerrar atendimento.\n"); 
  scanf("%d", &menuN1);

  PRODUTO:
int produto, resposta;
if(menuN1==1){
  printf("Qual tipo de produto você está procurando? \n 1 - Hardware em geral \n 2 - Periféricos \n 3 - Computadores montados \n 4 - Menu Inicial \n");
  scanf("%d", &menuN2);
  system("cls");
if(menuN2==1){
  printf ("\n\n #### PLACAS DE VÍDEO: ####\n Código (1): RTX 3060 12GB GDDR6 Asus Dual fan \n De: R$ 2.333,32\n Por: R$ 1.999,99 \n À vista com até 10%% OFF\n Ou R$ 2.222,21\n Em até 10x de R$ 222,22 sem juros no cartão\n 90 DIAS DE GARANTIA\n 8 Unidades no estoque \n --------------------------------------\n Codigo (2):RX 6600 8GB ASRock 8GB GDDR6 Dual fan\n De: R$ 1.347,36\n Por: R$ 1.199,99\n À vista com até 5%% OFF \n Ou R$ 1.263,15\n Em até 10x de R$ 126,31 sem juros no cartão\n 90 DIAS DE GARANTIA\n 15 Unidades no estoque\n --------------------------------------\n Código (3): RX 550 Radeon Power Color AMD 2GB GDDR5\n De: R$ 411,75\n Por: R$ 309,99 À vista no PIX com até 15%% OFF\n Ou R$ 364,69\n Em até 10x de R$ 36,46 sem juros no cartão\n 90 DIAS DE GARANTIA\n 10 Unidades no estoque\n");
  printf ("\n\n #### PLACAS MÃES:####\n Código (4): Placa Mãe Gigabyte B660M Aorus PRO, Intel LGA 1700, mATX, DDR4, M.2 NVME \n De: R$ 1.105,87\n Por:R$ 889,99 \n À vista com até 15% OFF\n Ou R$ 1.047,05 \n Em até 10x de R$ 104,70 sem juros no cartão\n 90 DIAS GARANTIA\n 20 Unidades no estoque\n  -------------------------------------- \n Codigo (5):Placa Mãe MSI B560M PRO-E, Intel LGA 1200, mATX, DDR4 \n Por: R$ 489,99 \n À vista com até 15% OFF \n Ou R$ 576,46\n Em até 10x de R$ 57,64 sem juros no cartão\n 30 DIAS DE GARANTIA \n 16 Unidades no estoque\n --------------------------------------\n Código (6):Placa Mãe MSI A520M-A PRO, AMD AM4, mATX, DDR4\n De: R$ 458,81 \n Por: R$ 369,99 \n À vista com até 15% OFF\n Ou R$ 435,28\n Em até 10x de R$ 43,52 sem juros no cartão\n 90 DIAS DE GARANTIA\n 30 Unidades no estoque\n --------------------------------------\n");
  printf ("\n\n #### PROCESSADORES:####\n Código (7): Processador AMD Ryzen 7 5700X, 3.4GHz (4.6GHz Max Turbo), Cache 36MB, Sem Vídeo \n De: R$ 2.357,88 \n Por: R$ 1.399,99 \n À vista no PIX com até 5%% OFF \n Ou R$ 1.473,67 \n Em até 10x de R$147,36 sem juros no cartão \n 90 DIAS DE GARANTIA \n 12 unidades no estoque \n --------------------------------------\n Codigo(8):Processador Intel Core i5-10400F, 2.9GHz (4.3GHz Max Turbo), Cache 12MB, 6 Núcleos, 12 Threads \n De: R$ 598,99 \n Por R$ 598,99 \n À vista no PIX com até 10%% OFF \n Ou R$665,54 \n Em até 10x de R$ 66,55 sem juros no cartão \n 90 DIAS DE GARANTIA \n 5 unidades no estoque \n--------------------------------------\n Codigo(9):Processador AMD Ryzen 5 5600G, 3.9GHz (4.4GHz Max Turbo), Cache 19MB, 6 Núcleos, 12 Threads, Vídeo Integrado \n De: R$ 1000,00 \n Por R$ 899,99 \n À vista no PIX com até 5%% OFF \n Ou R$947,36 \n Em até 10x de R$ 94,73 sem juros no cartão \n 90 DIAS DE GARANTIA \n 4 unidades no estoque \n--------------------------------------\n");
  printf("\n\nVocê deseja comprar algum produto? Digite 1 para - Sim | 2 para - Não \n ");
  scanf("%d", &resposta);
  switch(resposta){
  	case 1:
  		printf("Informe o código do produto que você deseja comprar: ");
  		scanf("%d", &produto);
  		system("cls");
  		switch(produto){
  			case 1: 
  			printf ("\nPRODUTO SELECIONADO: \n");
  			printf("\nCódigo (1) RTX 3060 12GB GDDR6 Asus Dual fan \n De: R$ 2.333,32\n Por: R$ 1.999,99 \n À vista com até 10%% OFF\n Ou R$ 2.222,21\n Em até 10x de R$ 222,22 sem juros no cartão\n 90 DIAS DE GARANTIA\n 8 Unidades no estoque");
  			printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 2:
  			printf ("\nPRODUTO SELECIONADO: \n");
  		  printf("\n Código (2)\nRX 6600 8GB ASRock 8GB GDDR6 Dual fan\n De: R$ 1.347,36\n Por: R$ 1.199,99\n À vista com até 5%% OFF \n Ou R$ 1.263,15\n Em até 10x de R$ 126,31 sem juros no cartão\n 90 DIAS DE GARANTIA\n 15 Unidades no estoque\n");
  	   	  printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 3: 
  			printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCódigo (3): RX 550 Radeon Power Color AMD 2GB GDDR5\n De: R$ 411,75\n Por: R$ 309,99 À vista no PIX com até 15%% OFF\n Ou R$ 364,69\n Em até 10x de R$ 36,46 sem juros no cartão\n 90 DIAS DE GARANTIA\n 10 Unidades no estoque\n");
  		  printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 4: 
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf ("\nCódigo (4)Placas Mãe: \n\nPlaca Mãe Gigabyte B660M Aorus PRO, Intel LGA 1700, mATX, DDR4, M.2 NVME \n De: R$ 1.105,87\n Por:R$ 889,99 \n À vista com até 15% OFF\n Ou R$ 1.047,05 \n Em até 10x de R$ 104,70 sem juros no cartão\n 90 DIAS GARANTIA\n 20 Unidades no estoque\n ");  			
            printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 5: 
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf ("\nCódigo (5):Placa Mãe MSI B560M PRO-E, Intel LGA 1200, mATX, DDR4 \n Por: R$ 489,99 \n À vista com até 15% OFF \n Ou R$ 576,46\n Em até 10x de R$ 57,64 sem juros no cartão\n 30 DIAS DE GARANTIA \n 16 Unidades no estoque \n");
            printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 6:
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf("\nCódigo (6):Placa Mãe MSI A520M-A PRO, AMD AM4, mATX, DDR4\n De: R$ 458,81 \n Por: R$ 369,99 \n À vista com até 15% OFF\n Ou R$ 435,28\n Em até 10x de R$ 43,52 sem juros no cartão\n 90 DIAS DE GARANTIA\n 30 Unidades no estoque\n\n");
            printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 7: 
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf ("\nCódigo (7): Processador AMD Ryzen 7 5700X, 3.4GHz (4.6GHz Max Turbo), Cache 36MB, Sem Vídeo \n De: R$ 2.357,88 \n Por: R$ 1.399,99 \n À vista no PIX com até 5%% OFF \n Ou R$ 1.473,67 \n Em até 10x de R$147,36 sem juros no cartão \n 90 DIAS DE GARANTIA \n 12 unidades no estoque \n\n");
            printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 8: 
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf ("\nCódigo(8):Processador Intel Core i5-10400F, 2.9GHz (4.3GHz Max Turbo), Cache 12MB, 6 Núcleos, 12 Threads \n De: R$ 598,99 \n Por R$ 598,99 \n À vista no PIX com até 10%% OFF \n Ou R$665,54 \n Em até 10x de R$ 66,55 sem juros no cartão \n 90 DIAS DE GARANTIA \n 5 unidades no estoque \n\n");
            printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  case 9: 
  			printf ("\nPRODUTO SELECIONADO: \n");
            printf ("\nCódigo(9):Processador AMD Ryzen 5 5600G, 3.9GHz (4.4GHz Max Turbo), Cache 19MB, 6 Núcleos, 12 Threads, Vídeo Integrado \n De: R$ 1000,00 \n Por R$ 899,99 \n À vista no PIX com até 5%% OFF \n Ou R$947,36 \n Em até 10x de R$ 94,73 sem juros no cartão \n 90 DIAS DE GARANTIA \n 4 unidades no estoque \n\n");
            printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		  break;
		  
	}
		case 2:
		
		printf("\n\nOk... Retornando para catálogo de produtos\n");
		sleep(5);
		goto PRODUTO;
  }
  }
  
if (menuN2==2){
  printf ("\n\n #### TECLADOS: #### \n Codigo (1): Teclado com fio USB Logitech K120 Resistente à Respingos e Layout ABNT2 \n De:R$70,64 \n Por: R$ 64,90 \n À vista com até 10%% OFF\n Ou R$ 72,11\n Em até 2x de R$ 36,05 sem juros no cartão\n 90 DIAS DE GARANTIA\n 10 Unidade no estoque \n --------------------------------------\n Codigo (2): Teclado Padrão Maxprint USB Preto\n De: R$ 35,20\n Por: R$ 19,99\n À vista no cartão com até 15%% OFF\n Ou R$ 23,52\n Em até 1x de R$ 21,17 sem juros no cartão \n --------------------------------------\n Codigo (3):Teclado Mecânico Gamer HyperX Alloy MKW100, RGB, Switch Red, Full Size, US, Preto\n De: R$ 294,11\n Por: R$ 249,99 \n À vista com até 15%% OFF\n Ou R$ 294,11\n Em até 10x de R$ 29,41 sem juros no cartão\n 90 DIAS DE GARANTIA\n 20 Unidade no estoque\n--------------------------------------\n Código(4):Teclado Mecânico Gamer Redragon Kumara, Anti-Ghosting, RGB, Switch Outemu Red, ABNT2, Branco\n De: R$ 223,52\n Por: R$ 179,99\n À vista com até 15%% OFF\n Ou R$ 211,75\n Em até 8x de R$ 26,46 sem juros no cartão\n 90 DIAS DE GARANTIA\n 5 Unidade no estoque\n --------------------------------------\n Codigo (5): Teclado sem fio Logitech K270 com Teclas de Mídia de Fácil Acesso, Conexão USB, Pilhas Inclusas e Layout ABNT2\n De: R$ 200,00\n Por: R$ 159,99\n À vista com até 10%% OFF\n Ou R$ 177,77\n Em até 7x de R$ 25,39 sem juros no cartãoa\n 90 DIAS DE GARANTIA\n 15 Unidade no estoque\n--------------------------------------\n");
  printf ("\n\n #### MOUSES: #### \n Codigo(6): Mouse com fio USB Logitech M90 com Design Ambidestro e Facilidade Plug and Play \n De: R$ 47,05\n Por: R$ 29,99\n À vista no PIX com até 15% OFF\n Ou R$ 35,28\n Em até 1x de R$ 31,75 sem juros no cartão\n 90 DIAS DE GARANTIA\n 11 unidade no estoque\n--------------------------------------\n Codigo (7):Mouse Max Print Classic Essential, 1000DPI, USB, Preto e Transparente\n De: R$ 10,00\n Por: R$ 6,99\n À vista no PIX com até 15%% OFF\n Ou R$ 8,22\n Em até 1x de R$ 7,40 sem juros no cartão\n 90 DIAS DE GARANTIA\n 5 Unidade em estoque\n\n Codigo(8):Mouse Gamer Redragon Cobra, Chroma RGB, 12400DPI, 7 Botões, Preto\n De: R$ 152,93\n Por: R$ 99,80\n À vista no PIX com até 15%% OFF\n Ou R$ 117,41\n Em até 4x de R$ 29,35 sem juros no cartão\n 90 DIAS DE GARANTIA \n 8 Unidade no estoque\n--------------------------------------\n Código(8):Mouse Gamer Redragon Cobra, Chroma RGB, 12400DPI, 7 Botões, Preto\n De: R$ 152,93\n Por: R$ 99,80\n À vista no PIX com até 15%% OFF\n Ou R$ 117,41\n Em até 4x de R$ 29,35 sem juros no cartão\n 90 DIAS DE GARANTIA \n 8 Unidade no estoque\n\n");
printf("\n\nVocê deseja comprar algum produto? Digite 1 para - Sim | 2 para - Não \n ");
  scanf("%d", &resposta);
switch(resposta){
  	case 1:
  		printf("Informe o código  produto que você deseja comprar: ");
  		scanf("%d", &produto);
  		system ("cls");
  		switch(produto){
  		case 1:
  		  printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCodigo (1):Teclado com fio USB Logitech K120 Resistente à Respingos e Layout ABNT2 \n De:R$70,64 \n Por: R$ 64,90 \n À vista com até 10%% OFF\n Ou R$ 72,11\n Em até 2x de R$ 36,05 sem juros no cartão\n 90 DIAS DE GARANTIA\n 10 Unidade no estoque \n \n  ");
          printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
  	    break;
        case 2: 
  		  printf ("\nPRODUTO SELECIONADO: \n");
		  printf ("\nCodigo (2):Teclado Padrão Maxprint USB Preto\n De: R$ 35,20\n Por: R$ 19,99\n À vista no cartão com até 15%% OFF\n Ou R$ 23,52\n Em até 1x de R$ 21,17 sem juros no cartão \n \n ");
          printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
		case 3: 
          printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCodigo (3): Teclado Mecânico Gamer HyperX Alloy MKW100, RGB, Switch Red, Full Size, US, Preto\n De: R$ 294,11\n Por: R$ 249,99 \n À vista com até 15%% OFF\n Ou R$ 294,11\n Em até 10x de R$ 29,41 sem juros no cartão\n 90 DIAS DE GARANTIA\n 20 Unidade no estoque\n\n ");
          printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
		case 4: 
          printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCodigo(4):Teclado Mecânico Gamer Redragon Kumara, Anti-Ghosting, RGB, Switch Outemu Red, ABNT2, Branco\n De: R$ 223,52\n Por: R$ 179,99\n À vista com até 15%% OFF\n Ou R$ 211,75\n Em até 8x de R$ 26,46 sem juros no cartão\n 90 DIAS DE GARANTIA\n 5 Unidade no estoque\n \n ");
          printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
		case 5: 
          printf ("\nPRODUTO SELECIONADO: \n");
		  printf("\nCodigo (5): Teclado sem fio Logitech K270 com Teclas de Mídia de Fácil Acesso, Conexão USB, Pilhas Inclusas e Layout ABNT2\n De: R$ 200,00\n Por: R$ 159,99\n À vista com até 10%% OFF\n Ou R$ 177,77\n Em até 7x de R$ 25,39 sem juros no cartãoa\n 90 DIAS DE GARANTIA\n 15 Unidade no estoque");
          printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
		case 6: 
          printf ("\nPRODUTO SELECIONADO: \n"); 
          printf ("\nCodigo(6): Mouse com fio USB Logitech M90 com Design Ambidestro e Facilidade Plug and Play \n De: R$ 47,05\n Por: R$ 29,99\n À vista no PIX com até 15% OFF\n Ou R$ 35,28\n Em até 1x de R$ 31,75 sem juros no cartão\n 90 DIAS DE GARANTIA\n 11 unidade no estoque\n\n  ");
          printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
        case 7: 
          printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCodigo (7):Mouse Max Print Classic Essential, 1000DPI, USB, Preto e Transparente\n De: R$ 10,00\n Por: R$ 6,99\n À vista no PIX com até 15%% OFF\n Ou R$ 8,22\n Em até 1x de R$ 7,40 sem juros no cartão\n 90 DIAS DE GARANTIA\n 5 Unidade em estoque\n\n  ");
          printf("\n Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
		case 8: 
          printf ("\nPRODUTO SELECIONADO: \n");
          printf ("\nCodigo(8):Mouse Gamer Redragon Cobra, Chroma RGB, 12400DPI, 7 Botões, Preto\n De: R$ 152,93\n Por: R$ 99,80\n À vista no PIX com até 15%% OFF\n Ou R$ 117,41\n Em até 4x de R$ 29,35 sem juros no cartão\n 90 DIAS DE GARANTIA \n 8 Unidade no estoque\n\n ");
          printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
		break;
}
	case 2:
		printf("\n\nOk... Retornando para catálogo de produtos\n");
		sleep(5);
		goto PRODUTO;
}
}
if (menuN2==3){  
	printf("\n\n #### COMPUTADORES MONTADOS: #### \n Codigo (1): PC Gamer AMD Ryzen 5 5600g Radeon Vega 7 Graphics, 16GB DDR4 3000mhz, SSD 480GB, Fonte 500W \n De: R$ 2.479,00\n Por: R$ 2.039,00\n Á vista \n Ou em até 10x de R$ 203,90 sem juros no cartão\n 30 DIAS DE GARANTIA\n 3 Unidades no estoque\n --------------------------------------\n Codigo (2):PC Gamer Intel Core I9 12900kf, Rtx4070 Ti 12GB, RAM 32GB, SSD 1tb, Fonte 1000W\n De: R$ 18.999,07 \n Por: R$ 16.330,07\n Á vista \n Ou: Em até 10x de R$ 1.633,00 sem juros no cartão\n 30 DIAS DE GARANTIA\n 1 Unidade no estoque\n --------------------------------------\n Código (3): Computador Corporate All In One, I5, 8GB, 500GB, Windows 10 + Monitor 19\n Por: R$ 2.054,51 \n Á vista\n Ou: Em até 10x de R$ 205,45 sem juros no cartão\n 30 DIAS DE GARANTIA\n 10 Unidades no estoque\n --------------------------------------\n");
    printf("\n\nVocê deseja comprar algum produto? Digite 1 para - Sim | 2 para - Não\n ");
    scanf("%d", &resposta);
switch(resposta){
  	case 1:
  	  printf("\n Informe o produto que você deseja comprar: ");
  	  scanf("%d", &produto);
  	switch(produto){
        case 1: 
         printf ("\nPRODUTO SELECIONADO: \n");
	     printf("\nCódigo (1): PC Gamer AMD Ryzen 5 5600g Radeon Vega 7 Graphics, 16GB DDR4 3000mhz, SSD 480GB, Fonte 500W \n De: R$ 2.479,00\n Por: R$ 2.039,00\n ? vista \n Ou em at? 10x de R$ 203,90 sem juros no cart?o\n 30 DIAS DE GARANTIA\n 3 Unidades no estoque\n \n");
         printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
	    break;
	    case 2: 
	     printf ("\nPRODUTO SELECIONADO: \n");
	     printf("\nCódigo (2):PC Gamer Intel Core I9 12900kf, Rtx4070 Ti 12GB, RAM 32GB, SSD 1tb, Fonte 1000W\n De: R$ 18.999,07 \n Por: R$ 16.330,07\n ? vista \n Ou: Em at? 10x de R$ 1.633,00 sem juros no cart?o\n 30 DIAS DE GARANTIA\n 1 Unidade no estoque\n Computador Corporate All In One, I5, 8GB, 500GB, Windows 10 + Monitor 19\n Por: R$ 2.054,51 \n á vista\n Ou: Em atÉ 10x de R$ 205,45 sem juros no cartÃo\n 30 DIAS DE GARANTIA\n 10 Unidades no estoque\n");
	     printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
	    case 3:
	      printf ("\nPRODUTO SELCIONADO: \n");
		  printf("\nCódigo (3): Computador Corporate All In One, I5, 8GB, 500GB, Windows 10 + Monitor 19\n Por: R$ 2.054,51 \n Á vista\n Ou: Em até 10x de R$ 205,45 sem juros no cartão\n 30 DIAS DE GARANTIA\n 10 Unidades no estoque\n");
		  printf("\n\n ATENÇÃO: Não fornecemos entrega por delivery, nem efetuamos pagamentos e emissão de notas fiscais online. Venha retirar seu produto em nossa unidade mais próxima de seu endereço. Nossos horários de funcionamento são: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17");
        break;
	}
	case 2:
		printf("\n\nOk... Retornando para catálogo de produtos\n");
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

  printf ("\nData ínvalida.");
  printf ("\nInforme a data novamente: ");
  scanf ("%d",&cadastro1.data_ass);
}

printf ("\nInforme o mês:\n");
scanf ("%d",&cadastro1.mes_ass);
while(cadastro1.mes_ass > 12){
    printf("\nMês inválido.");
    printf("\nPor favor digite o mês novamente: \n");
    scanf ("%d",&cadastro1.mes_ass);   
  }

printf("\nNosso horário de atendimento é de 8h ás 17h. ");
printf ("\nAgende um horário para ser atendido: \n 08 \n 09 \n 10 \n 11 \n 12 (Horário de almoço)\n 13 \n 14 \n 15 \n 16 \n 17 \nDigite sua hora: \n");
scanf ("%d", &cadastro1.hora_ass); 
while (cadastro1.hora_ass < 8 || cadastro1.hora_ass > 17 && cadastro1.hora_ass == 12){
    printf("\nHora inválida.");
    printf("\nPor favor digite a hora novamente: \n");
      scanf("%d", &cadastro1.hora_ass);
 }

printf ("\nInforme o problema do produto:\n>");
fflush(stdin);
gets (cadastro1.problema);

AQUI:
printf ("\n Carregando relátorio...........\n");
sleep(3);
system("cls");
printf ("\n ########### RELÁTORIO DE AGENDAMENTO PARA ASSISTÊNCIA TÉCNICA ############# \n");
printf ("\n -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
printf ("\n >< NOME: %s",cadastro1.nome);
printf ("\n >< CPF: %s", cadastro1.CPF);
printf ("\n >< ENDEREÇO:%s", cadastro1.endereco);
printf ("\n >< TELEFONE: %s",cadastro1.num_celular);
printf ("\n >< EMAIL: %s", cadastro1.email_ass);
printf ("\n >< DATA %d / %d", cadastro1.data_ass, cadastro1.mes_ass);
printf ("\n >< HORA: %d horas", cadastro1.hora_ass);
printf ("\n >< PRODUTO: %s ", cadastro1.nome_produto);
printf (">< PROBLEMA: %s \n", cadastro1.problema);
printf ("\n Apresente esse relátorio/comprovante a loja no dia do agendamento para a assistencia\n");
printf ("\n Assinado: Marcos Santana Freitas");
printf ("\n -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");

printf ("\n ####### MENU DE RELÁTORIO ########## \n");
printf ("\n\nDigite um número abaixo para: \n 1 - Impressão do relátorio \n 2 - Baixar PDF do relátorio \n 3 - Menu Inicial \n>");
scanf ("%d",&cadastro1.resposta);

if (cadastro1.resposta == 1){
  //optei por declarar a variavel no meio do programa
  int resposta;

  VOLTANDO:


  printf ("\nSua impressora está conectada? \n 1 - Sim \n 2 - Não\n Digite:");
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
    printf ("\nImpressão concluida com sucesso!!!!! \n\n Digite 1 para voltar ao Menu de Relátorio\n");
    scanf ("%d",&cadastro1.resposta);
    if (cadastro1.resposta == 1){
    system("cls");
    goto AQUI;
  }
    else {

      printf("\n Número digitado ínvalido.\n");
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
    printf("Olá %s , estamos aqui para lhe ajudar.. \n", cadastro1.nome);// NOME será a variável nome que está no  cadastro.//
  printf("Por favor, informe o motivo da devolução: \n ");

  printf("\n* Digite 1 - Insatisfação/ arrependimento. \n* Digite 2 - Produto com defeito. \n* Digite 3 - Recebi pedido errado. \n* Digite 4 - Ouvidoria. \n* Digite 5 - Voltar ao menu anterior.\n");
  scanf("%d", &cadastro1.menudevolucao);

  if(cadastro1.menudevolucao==1){
        printf("\nHá quantos dias recebeu o pedido? ");
    scanf("%d", &cadastro1.diareceb7);
    if(cadastro1.diareceb7 <=7){
      printf ("\n*Ok. Você deve devolver o produto na loja de informática. \n Um código será gerado e enviado para seu celular via SMS.\n ...\n");
      sleep(1);
      printf(" Código enviado para %s. \n\n Apresente o código na loja para devolver o produto.\n\n", cadastro1.num_celular);
sleep(1);              
 goto FINAL;

    }
    else{
    printf("\n*Infelizmente não será possível a devolução do produto.\n O prazo máximo para devolução é de 7 dias após o recebimento.\n\n ");
               goto FINAL;

}
  }
    if(cadastro1.menudevolucao==2){
    printf("\nHá quantos dias recebeu o pedido? ");
    scanf("%d",&cadastro1.diareceb90);
    if(cadastro1.diareceb90<=90 && cadastro1.diareceb90 >7){
      printf("\n*Aguarde... Você será direcionado(a) ao menu principal.\n Selecione a opção Agendamento e agende assistência técnica para seu produto. \n");
      sleep(10);//por ser menor de 90 dias iremos encaminhar para agendamento//
      system("cls");
  goto VOLTAR;
    }
    else if(cadastro1.diareceb90<=7){
    	printf ("\n*Ok. Você deve devolver o produto na loja de informática. \n Um código será gerado e enviado para seu celular via SMS.\n ...\n");
      sleep(1);
      printf(" Código enviado para %s. \n\n Apresente o código na loja para devolver o produto.\n\n", cadastro1.num_celular);
sleep(1);              
 goto FINAL;
	}
    else{
    printf("\n*Infelizmente não será possível a devolução do produto.\n O prazo máximo para devolução do produto com defeito é de 90 dias após o recebimento.\n Agora você deve entrar em contato com o fabricante.\n\n ");          goto FINAL;
}
  }


    if(cadastro1.menudevolucao==3){
        printf("\nHá quantos dias recebeu o pedido? ");
    scanf("%d", &cadastro1.diareceb7);
    if(cadastro1.diareceb7 <=7){
      printf("\n*Ok. Você deve devolver o produto na loja de informática. \n Um código será gerado e enviado para seu celular via SMS.\n ...\n");
      sleep(1);
      printf(" Código enviado para %s. \n\n Apresente o código na loja para devolver o produto.\n\n", cadastro1.num_celular);
               goto FINAL;

    }
    else{
    printf("\n*Infelizmente não será possível a devolução do produto.\n O prazo máximo para devolução caso o pedido esteja errado é de 7 dias após o recebimento.\n\n ");
               goto FINAL;

    }
  }

    if(cadastro1.menudevolucao==4){
  printf("\n*Bem vindo a ouvidoria da loja de informática. \n Se seu problema não foi resolvido nas opções anteriores, informe como podemos lhe ajudar. \n Máximo 500 caracteres\n\n");
    fflush(stdin);
  gets(cadastro1.ouvidoria);
  printf("\n*Iremos avaliar suas informações e retornaremos em menos de 72 horas.\n\n");
  sleep(2);


         goto FINAL;

  }

    if(cadastro1.menudevolucao==5){
            system("cls");
              goto VOLTAR;
  }
if (cadastro1.menudevolucao >5 || cadastro1.menudevolucao<0){
	    printf("\nOpção inválida\n");
	    goto INVALIDA;
	}

}
else if (menuN1 ==4){
	int resposta;
	printf ("\n Você deseja refazer seu cadastro? \n 1 - Sim \n 2 - Não \n");
	scanf("%d",&resposta);
	if (resposta == 1){
		printf("\n Você será redirecionado ao cadastro.");
		system("cls");
		goto CADASTRO;
	}
	else if (resposta == 2){
		printf ("\n Você será redirecionado ao Menu Inicial");
		sleep (3);
		system("cls");
		goto VOLTAR;
	}
	else{
		
		printf ("\n Número ínvalido, você será redirecionado ao Menu Inicial");
		sleep (3);
		system ("cls");
		goto VOLTAR;
	}
}
 if (menuN1 == 5) {

        printf("Você deseja continuar o atendimento?.\n Digite 1 para caso deseje continuar.\n Digite 2 para encerrar atendimento\n>: ");
        scanf("%d", &cadastro1.resposta);

        if (cadastro1.resposta == 2) {
          system("cls");
           FINAL:
          printf("\n---------------ATENDIMENTO ENCERRADO-------------------\n");
            printf("O atendimento ao cliente foi encerrado. Agradecemos por buscar nossos serviços!.\nAvalie nosso atendimiento com uma nota de 1 a 10!\n >:");
          scanf("%d", &cadastro1.avalie);
          printf("Agradecemos sua avaliação!\n");
          printf("Se quiser voltar ao menu principal da nossa loja digite 1, caso contrário digite 2 para finalizar\n>");
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
            printf("Opção inválida.\n");
        }
    }

    return 0;
}























