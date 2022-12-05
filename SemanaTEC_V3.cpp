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
	printf("", random=rand()%4); //DESATIVEI FUNÇÃO TEMPORARIAMENTE PARA PODER ESCOLHER UM CASE DE FORMA DIRETA
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
					printf("\n Redirecionamento mal sucedido, revertendo ação e tentando novemente...");
					random++;
				}
				if(random==1){
					printf("\n Redirecionamente bem sucedido, nível de energia estável...");
				}
				break;
				case 1:
					printf("\n Erro detectado: peça emperrada");
				break;
				case 2:
					printf("\n Erro detectado, peça danificada...");
					printf("\n Identificando problema...");
					printf("", random=rand()%3);
					switch(random){
						case 0:
							printf("\n Rolamento da peça 42B foi quebrada");
						break;
						case 1:
							printf("\n Erro desconheçido...");
						break;
						case 2:
							printf("\n Suporte da esteira está desconfigurada");
						break;
					}
				break;
			}
		break;
		case 1:
			printf("\n Erro na alimentação de tinta, produção parada");
			printf("\n Verificando situação...");
			printf("", random=rand()%2);
			switch(random){
				case 0:
					printf("\n Armazén esgotado");
				break;
				case 1:
					printf("\n Peça de abastecimento de tinta danificada");
				break;
			}
		break;
		case 2:
			printf("\n Erro na força da prensa hidraulica, redirecionando energia...");
			printf("\n Deseja verificar outros componentes eletrônicos? ");
			scanf("%s", &ask);
			if(ask=='s'||ask=='S'||ask=='sim'){
				printf("", random=rand()%3);
				switch(random){
					case 0:
						printf("\n Nível de energia");
						printf("\n Carburador: bom");
						printf("\n Braço mecânico: bom");
						printf("\n Bateria: alto");
						printf("\n Prensa hidraulica: bom");
						printf("\n Rolamento: sem dados");
					break;
					case 1:
						printf("\n Nível de energia");
						printf("\n Carburador: bom");
						printf("\n Braço mecânico: baixo");
						printf("\n Bateria: bom");
						printf("\n Prensa hidraulica: baixo");
						printf("\n Rolamento: baixo");
					break;
					case 2:
						printf("\n Nível de energia");
						printf("\n Carburador: crítico");
						printf("\n Braço mecânico: sem dados");
						printf("\n Bateria: alto");
						printf("\n Prensa hidraulica: baixo");
						printf("\n Rolamento: baixo");
					break;
				}
			}
			else{
				printf("\n Verificação completa");
			}
		break;
		case 3:
			printf("\n Erro no abastecimento de ernegia, desligando funções...");
			printf("", random=rand()%4);
//			printf("\n Informe o CASE desejado: ");
//			scanf("%d", &random);
			switch(random){
				case 0:
					printf("\n Máquina B2");
					printf("\n Abastecimentos de tubo: desligada");
					printf("\n Alimentação do carburador: desligada"); //PESQUISAR
					printf("\n Correia: suspensa");
				break;
				case 1:
					printf("\n Máquina A4");
					printf("\n Velocidade da esteira: reduzida");
					printf("\n Abastecimento de tinta: desligada");
					printf("\n Sensores externos: desligado");
					printf("\n Monitores auxiliares: desligado");
				break;
				case 2:
					printf("\n Máquina C1");
					printf("\n Rotação do braço: desativado");
					printf("\n Monitores auxiliares: reduzido");
					printf("\n Movimentos de peças: Reduzido em 20 porcento");
				break;
				case 3:
					printf("\n Nível critíco de energia, desligando máquinas...");
					printf("", random=rand()%6);
					switch(random){
						case 0:
							for(machine=+1; machine<=4; machine++){
								printf("\n Máquina A%d: desligando", machine);
						}
						break;
						case 1:
							for(machine=+1; machine<=4; machine++){
								printf("\n Máquina A%d: suspendendo", machine);
						}
						break;
						case 2:
							for(machine=+1; machine<=4; machine++){
								printf("\n Máquina B%d: desligando", machine);
						}
						break;
						case 3:
							for(machine=+1; machine<=4; machine++){
								printf("\n Máquina B%d: suspendendo", machine);
						}
						break;
						case 4:
							for(machine=+1; machine<=4; machine++){
								printf("\n Máquina C%d: desligando", machine);
						}
						break;
						case 5:
							for(machine=+1; machine<=4; machine++){
								printf("\n Máquina C%d: suspendendo", machine);
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
Colocar em cada IF perguntando ao cliente oque deseja fazer e qual ação tomar
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

  Após o programa atingir um estagio bom de progesso, pedi auxilio de pessoas
  experiente na area de como estava meu programa, a resposta foi de usar o 
  "Switch" invés de só IF, pois o IF é fácil, diferente do Switch, assim o
  código em si não ficaria feio. 

*/
