#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
main (){
	setlocale(LC_ALL,"portuguese");
	int random, machine;
	char ask;
	srand(time(NULL));
	printf("\n Verificando componentes... \n");
//	printf("\n Informe o CASE desejado: ");
//	scanf("%d", &random);
	printf("", random=rand()%4); //DESATIVEI FUN��O TEMPORARIAMENTE PARA PODER ESCOLHER UM CASE DE FORMA DIRETA
	switch(random){
		case 0:
			printf("\n Erro na esteira, detectando problema...");
			printf("", random=rand()%3);
//			printf("\n Informe o CASE desejado: ");
//			scanf("%d", &random);
			switch(random){
				case 0:
					printf("", random=rand()%2);
				while(random==0){
					printf("\n Redirecionamento mal sucedido, revertendo a��o e tentando novemente...");
					random++;
				}
				if(random==1){
					printf("\n Redirecionamente bem sucedido, n�vel de energia est�vel...");
				}
				break;
				case 1:
					printf("\n Erro detectado: pe�a emperrada");
				break;
				case 2:
					printf("\n Erro detectado, pe�a danificada...");
					printf("\n Identificando problema...");
					printf("", random=rand()%3);
					switch(random){
						case 0:
							printf("\n Rolamento da pe�a 42B foi quebrada");
						break;
						case 1:
							printf("\n Erro desconhe�ido...");
						break;
						case 2:
							printf("\n Suporte da esteira est� desconfigurada");
						break;
					}
				break;
			}
		break;
		case 1:
			printf("\n Erro na alimenta��o de tinta, produ��o parada");
			printf("\n Verificando situa��o...");
			printf("", random=rand()%2);
			switch(random){
				case 0:
					printf("\n Armaz�n esgotado");
				break;
				case 1:
					printf("\n Pe�a de abastecimento de tinta danificada");
				break;
			}
		break;
		case 2:
			printf("\n Erro na for�a da prensa hidraulica, redirecionando energia...");
			printf("\n Deseja verificar outros componentes eletr�nicos? ");
			scanf("%s", &ask);
			if(ask=='s'||ask=='S'||ask=='sim'){
				printf("", random=rand()%3);
				switch(random){
					case 0:
						printf("\n N�vel de energia");
						printf("\n Carburador: bom");
						printf("\n Bra�o mec�nico: bom");
						printf("\n Bateria: alto");
						printf("\n Prensa hidraulica: bom");
						printf("\n Rolamento: sem dados");
					break;
					case 1:
						printf("\n N�vel de energia");
						printf("\n Carburador: bom");
						printf("\n Bra�o mec�nico: baixo");
						printf("\n Bateria: bom");
						printf("\n Prensa hidraulica: baixo");
						printf("\n Rolamento: baixo");
					break;
					case 2:
						printf("\n N�vel de energia");
						printf("\n Carburador: cr�tico");
						printf("\n Bra�o mec�nico: sem dados");
						printf("\n Bateria: alto");
						printf("\n Prensa hidraulica: baixo");
						printf("\n Rolamento: baixo");
					break;
				}
			}
			else{
				printf("\n Verifica��o completa");
			}
		break;
		case 3:
			printf("\n Erro no abastecimento de ernegia, desligando fun��es...");
			printf("", random=rand()%4);
//			printf("\n Informe o CASE desejado: ");
//			scanf("%d", &random);
			switch(random){
				case 0:
					printf("\n M�quina B2");
					printf("\n Abastecimentos de tubo: desligada");
					printf("\n Alimenta��o do carburador: desligada"); //PESQUISAR
					printf("\n Correia: suspensa");
				break;
				case 1:
					printf("\n M�quina A4");
					printf("\n Velocidade da esteira: reduzida");
					printf("\n Abastecimento de tinta: desligada");
					printf("\n Sensores externos: desligado");
					printf("\n Monitores auxiliares: desligado");
				break;
				case 2:
					printf("\n M�quina C1");
					printf("\n Rota��o do bra�o: desativado");
					printf("\n Monitores auxiliares: reduzido");
					printf("\n Movimentos de pe�as: Reduzido em 20 porcento");
				break;
				case 3:
					printf("\n N�vel crit�co de energia, desligando m�quinas...");
					printf("", random=rand()%6);
					switch(random){
						case 0:
							for(machine=+1; machine<=4; machine++){
								printf("\n M�quina A%d: desligando", machine);
						}
						break;
						case 1:
							for(machine=+1; machine<=4; machine++){
								printf("\n M�quina A%d: suspendendo", machine);
						}
						break;
						case 2:
							for(machine=+1; machine<=4; machine++){
								printf("\n M�quina B%d: desligando", machine);
						}
						break;
						case 3:
							for(machine=+1; machine<=4; machine++){
								printf("\n M�quina B%d: suspendendo", machine);
						}
						break;
						case 4:
							for(machine=+1; machine<=4; machine++){
								printf("\n M�quina C%d: desligando", machine);
						}
						break;
						case 5:
							for(machine=+1; machine<=4; machine++){
								printf("\n M�quina C%d: suspendendo", machine);
						}
						break;
					}
				break;
			}
		break;
	}
	getch ();
	return 0;
}
//Atualizando o programa utilizando o switch	
/* IDEALIZADOR
-----<GERAL>-----
Colocar em cada IF perguntando ao cliente oque deseja fazer e qual a��o tomar
----<TERMINO>----
------<IF0>------
----<TERMINO>----
------<IF1>------
----<TERMINO>----
------<IF2>------
Atualizar o case 2, aplicando o mesmo que o case 3
----<TERMINO>----
------<IF3>------
----<TERMINO>----
*/
/*

  Ap�s o programa atingir um estagio bom de progesso, pedi auxilio de pessoas
  experiente na area de como estava meu programa, a resposta foi de usar o 
  "Switch" inv�s de s� IF, pois o IF � f�cil, diferente do Switch, assim o
  c�digo em si n�o ficaria feio. 

*/
