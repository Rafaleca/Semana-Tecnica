#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
main (){
	setlocale(LC_ALL,"portuguese");
	int numero, random, random2, random3, randomif, rando, whirand; // variável de randomização, preciso rever para diminuir-las
	int if0, if1, if2; //variável para os IFs
	int machine; //variável específicas
	char ask;
	srand(time(NULL));
	printf("\n Informe o IF desejado: ");
	scanf("%d", &random);
//	printf("", random = rand()%4); //DESATIVEI FUNÇÃO TEMPORARIAMENTE PARA PODER ESCOLHER UM IF DE FORMA DIRETA
	printf("\n Verificando componentes... \n");
	if(random==0){
		printf("\n Erro na esteira, detectando problema...");
		printf("", if0=rand()%3);
		printf("\n Selecione o IF desejado: "); //FUNÇÃO DE SELECIONAR O IF DE FORMA DIRETA
		scanf("%d", &if0);
		if(if0==0){
			printf("\n Erro detectado: nível baixo de energia");
			printf("\n Redirecionando energia...");
			printf("", whirand=rand()%2);
			while(whirand==0){
				printf("\n Redirecionamento mal sucedido, revertendo ação e tentando novemente...");
				whirand++;
			}
			if(whirand==1){
				printf("\n Redirecionamente bem sucedido, nível de energia estável...");
			}
			// se tentar mais de 5 vezes irá falar redirecionamento mal sucedido, máquina em repouso
		}
		if(if0==1){
			printf("\n Erro detectado: peça emperrada");
		}
		if(if0==2){
			printf("\n Erro detectado: peça danificada");
			printf("", randomif=rand()%3);
			if(randomif==0){
				printf("\n Rolamento da peça 42B foi quebrada");
			}
			if(randomif==1){
				printf("\n Erro desconheçido...");
			}
			if(randomif==2){
				printf("\n Suporte para a esteira está desconfigurada");
			}
		}
	}
	if(random==1){
		printf("\n Erro na alimentação de tinta, produção parada");
		printf("\n Verificando situação...");
		printf("", if2=rand()%2);
		if(if2==0){
			printf("\n Armazén de tinta esgotado");
		}
		else{
			printf("\n Peça de abastecimento de tinta danificada");
		}
	}
	if(random==2){
		printf("\n Erro na prensa hidraulica, redirecionando energia...");
		//Adicionar mais dados a este IF, como por exemplo:
		printf("\n Deseja verificar outros componentes eletrônicos? ");
		scanf("%s", &ask);
		if(ask=='s'||ask=='S'||ask=='sim'){
			printf("", rando=rand()%3);
			if(rando==0){
				printf("\n Nível de energia dos componentes:");
				printf("\n Carburador: bom");
				printf("\n Braço mecânico: bom");
				printf("\n Bateria: sem dados");
				printf("\n Prensa Hidraulica: bom");
				printf("\n Rolamento: sem dados");
			}
			if(rando==1){
				printf("\n Nível de energia dos componentes:");
				printf("\n Carburador: bom");
				printf("\n Braço mecânico: baixo");
				printf("\n Bateria: bom");
				printf("\n Prensa Hidraulica: baixo");
				printf("\n Rolamento: baixo");
			}
			if(rando==2){
				printf("\n Nível de energia dos componentes:");
				printf("\n Carburador: abaixo do esperado");
				printf("\n Braço mecânico: sem dados");
				printf("\n Bateria: alto");
				printf("\n Prensa Hidraulica: baixo");
				printf("\n Rolamento: baixo");
			}
		}else{
			printf("\n Verificação completa.");
		}
	}
	if(random==3){
		printf("\n Erro no abastecimento de energia, desligando funções...");
//		printf("\n Informando funções desativada: ");
//		printf("", random2 = rand()%4); //DESATIVEI FUNÇÃO TEMPORARIAMENTE PARA PODER ESCOLHER UM IF DE FORMA DIRETA
		printf("\n Informe o IF desejado: ");
		scanf("%d", &random2);
		if(random2==0){
			printf("\n Máquina B2");
			printf("\n Abastecimentos de tubo: desligada");
			printf("\n Alimentação do carburador: desligada"); //PESQUISAR
	 		printf("\n Correia: suspensa");
		}
		if(random2==1){
			printf("\n Máquina A4");
			printf("\n Velocidade da esteira: reduzida");
			printf("\n Abastecimento de tinta: desligada");
			printf("\n Sensores externos: desligado");
			printf("\n Monitores auxiliares: desligado");
		}
		if(random2==2){
			printf("\n Máquina C1");
			printf("\n Rotação do braço: desativado");
			printf("\n Monitores auxiliares: reduzido");
			printf("\n Movimentos de peças: Reduzido em 20 porcento");
		}
		if(random2==3){
			printf("\n Nível crítico de falta de energia, desligando máquinas...");
//			printf("", random3 = rand() %6); //DESATIVEI FUNÇÃO TEMPORARIAMENTE PARA PODER ESCOLHER UM IF DE FORMA DIRETA
			printf("\n Informe o IF desejado: ");
			scanf("%d", &random3);
			if(random3==0){
				for(machine=+1; machine<=4; machine++){
					printf("\n Máquina A%d: desligando", machine);
				}
			}
			if(random3==1){
				for(machine=+1; machine<=4; machine++){
					printf("\n Máquina A%d: suspendendo", machine);
				}	
			}
			if(random3==2){
				for(machine=+1; machine<=4; machine++){
					printf("\n Máquina B%d: suspendendo", machine);
				}
			}
			if(random3==3){
				for(machine=+1; machine<=4; machine++){
					printf("\n Máquina B%d: Desligando", machine);
				}
			}
			if(random3==4){
				for(machine=+1; machine<=4; machine++){
					printf("\n Máquina C%d: Desligando", machine);
				}
			}
			if(random3==5){
			for(machine=+1; machine<=4; machine++){
					printf("\n Máquina C%d: Suspendendo", machine);
				}
			}
		}
	}
	getch();
	return 0;
}
/* IDEALIZADOR
-----<GERAL>-----
Colocar em cada IF perguntando ao cliente oque deseja fazer e qual ação tomar
----<TERMINO>----
------<IF0>------
----<TERMINO>----
------<IF1>------
----<TERMINO>----
------<IF2>------
----<TERMINO>----
------<IF3>------
----<TERMINO>----
*/
/*
  O final do código servil mas para me ajudar a organizar o projeto, sim poderia criar um
  bloco de notas externo para isso, ou escrever, mas, para mim, nao seria pratico por isso
  usei o final do codigo para isso.
  
  Esta versap foi meio que a definitiva e a mais "feia" digamos assim, eu nao criei um
  fluxograma para este programa, pois eu so deixava a minha mente prosseguir, assim
  cheguei neste resultado, dois meses programando, e usei tudo que sabia, a maioria do
  tempo que levei foi mais para pesquisar de como fazer algo, ou estudando forma
  que nao sabia como usar direito, como: "while" e "for".


*/
