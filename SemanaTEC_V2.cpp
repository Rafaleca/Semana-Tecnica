#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
main (){
	setlocale(LC_ALL,"portuguese");
	int numero, random, random2, random3, randomif, rando, whirand; // vari�vel de randomiza��o, preciso rever para diminuir-las
	int if0, if1, if2; //vari�vel para os IFs
	int machine; //vari�vel espec�ficas
	char ask;
	srand(time(NULL));
	printf("\n Informe o IF desejado: ");
	scanf("%d", &random);
//	printf("", random = rand()%4); //DESATIVEI FUN��O TEMPORARIAMENTE PARA PODER ESCOLHER UM IF DE FORMA DIRETA
	printf("\n Verificando componentes... \n");
	if(random==0){
		printf("\n Erro na esteira, detectando problema...");
		printf("", if0=rand()%3);
		printf("\n Selecione o IF desejado: "); //FUN��O DE SELECIONAR O IF DE FORMA DIRETA
		scanf("%d", &if0);
		if(if0==0){
			printf("\n Erro detectado: n�vel baixo de energia");
			printf("\n Redirecionando energia...");
			printf("", whirand=rand()%2);
			while(whirand==0){
				printf("\n Redirecionamento mal sucedido, revertendo a��o e tentando novemente...");
				whirand++;
			}
			if(whirand==1){
				printf("\n Redirecionamente bem sucedido, n�vel de energia est�vel...");
			}
			// se tentar mais de 5 vezes ir� falar redirecionamento mal sucedido, m�quina em repouso
		}
		if(if0==1){
			printf("\n Erro detectado: pe�a emperrada");
		}
		if(if0==2){
			printf("\n Erro detectado: pe�a danificada");
			printf("", randomif=rand()%3);
			if(randomif==0){
				printf("\n Rolamento da pe�a 42B foi quebrada");
			}
			if(randomif==1){
				printf("\n Erro desconhe�ido...");
			}
			if(randomif==2){
				printf("\n Suporte para a esteira est� desconfigurada");
			}
		}
	}
	if(random==1){
		printf("\n Erro na alimenta��o de tinta, produ��o parada");
		printf("\n Verificando situa��o...");
		printf("", if2=rand()%2);
		if(if2==0){
			printf("\n Armaz�n de tinta esgotado");
		}
		else{
			printf("\n Pe�a de abastecimento de tinta danificada");
		}
	}
	if(random==2){
		printf("\n Erro na prensa hidraulica, redirecionando energia...");
		//Adicionar mais dados a este IF, como por exemplo:
		printf("\n Deseja verificar outros componentes eletr�nicos? ");
		scanf("%s", &ask);
		if(ask=='s'||ask=='S'||ask=='sim'){
			printf("", rando=rand()%3);
			if(rando==0){
				printf("\n N�vel de energia dos componentes:");
				printf("\n Carburador: bom");
				printf("\n Bra�o mec�nico: bom");
				printf("\n Bateria: sem dados");
				printf("\n Prensa Hidraulica: bom");
				printf("\n Rolamento: sem dados");
			}
			if(rando==1){
				printf("\n N�vel de energia dos componentes:");
				printf("\n Carburador: bom");
				printf("\n Bra�o mec�nico: baixo");
				printf("\n Bateria: bom");
				printf("\n Prensa Hidraulica: baixo");
				printf("\n Rolamento: baixo");
			}
			if(rando==2){
				printf("\n N�vel de energia dos componentes:");
				printf("\n Carburador: abaixo do esperado");
				printf("\n Bra�o mec�nico: sem dados");
				printf("\n Bateria: alto");
				printf("\n Prensa Hidraulica: baixo");
				printf("\n Rolamento: baixo");
			}
		}else{
			printf("\n Verifica��o completa.");
		}
	}
	if(random==3){
		printf("\n Erro no abastecimento de energia, desligando fun��es...");
//		printf("\n Informando fun��es desativada: ");
//		printf("", random2 = rand()%4); //DESATIVEI FUN��O TEMPORARIAMENTE PARA PODER ESCOLHER UM IF DE FORMA DIRETA
		printf("\n Informe o IF desejado: ");
		scanf("%d", &random2);
		if(random2==0){
			printf("\n M�quina B2");
			printf("\n Abastecimentos de tubo: desligada");
			printf("\n Alimenta��o do carburador: desligada"); //PESQUISAR
	 		printf("\n Correia: suspensa");
		}
		if(random2==1){
			printf("\n M�quina A4");
			printf("\n Velocidade da esteira: reduzida");
			printf("\n Abastecimento de tinta: desligada");
			printf("\n Sensores externos: desligado");
			printf("\n Monitores auxiliares: desligado");
		}
		if(random2==2){
			printf("\n M�quina C1");
			printf("\n Rota��o do bra�o: desativado");
			printf("\n Monitores auxiliares: reduzido");
			printf("\n Movimentos de pe�as: Reduzido em 20 porcento");
		}
		if(random2==3){
			printf("\n N�vel cr�tico de falta de energia, desligando m�quinas...");
//			printf("", random3 = rand() %6); //DESATIVEI FUN��O TEMPORARIAMENTE PARA PODER ESCOLHER UM IF DE FORMA DIRETA
			printf("\n Informe o IF desejado: ");
			scanf("%d", &random3);
			if(random3==0){
				for(machine=+1; machine<=4; machine++){
					printf("\n M�quina A%d: desligando", machine);
				}
			}
			if(random3==1){
				for(machine=+1; machine<=4; machine++){
					printf("\n M�quina A%d: suspendendo", machine);
				}	
			}
			if(random3==2){
				for(machine=+1; machine<=4; machine++){
					printf("\n M�quina B%d: suspendendo", machine);
				}
			}
			if(random3==3){
				for(machine=+1; machine<=4; machine++){
					printf("\n M�quina B%d: Desligando", machine);
				}
			}
			if(random3==4){
				for(machine=+1; machine<=4; machine++){
					printf("\n M�quina C%d: Desligando", machine);
				}
			}
			if(random3==5){
			for(machine=+1; machine<=4; machine++){
					printf("\n M�quina C%d: Suspendendo", machine);
				}
			}
		}
	}
	getch();
	return 0;
}
/* IDEALIZADOR
-----<GERAL>-----
Colocar em cada IF perguntando ao cliente oque deseja fazer e qual a��o tomar
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
  O final do c�digo servil mas para me ajudar a organizar o projeto, sim poderia criar um
  bloco de notas externo para isso, ou escrever, mas, para mim, nao seria pratico por isso
  usei o final do codigo para isso.
  
  Esta versap foi meio que a definitiva e a mais "feia" digamos assim, eu nao criei um
  fluxograma para este programa, pois eu so deixava a minha mente prosseguir, assim
  cheguei neste resultado, dois meses programando, e usei tudo que sabia, a maioria do
  tempo que levei foi mais para pesquisar de como fazer algo, ou estudando forma
  que nao sabia como usar direito, como: "while" e "for".


*/
