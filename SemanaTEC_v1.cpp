#include <locale.h>
#include <stdio.h>
#include <string.h>

main () {
	setlocale(LC_ALL,"portuguese");
	
	int produktion, betriet, nummer, aufteilung;
	char buchstabe[5];
	
	printf("\n Infome a quantia produzida: ");
	scanf("%d", &produktion);
	printf("\n A m�quina est� com defeito: ");
	scanf("%d", &buchstabe);
	
	betriet=produktion*5;//10 minutos, n�mero ficcional
	
	printf("\n O resultado da opera��o foi: %d", betriet);
//	if(betriet>=3){
//		printf("\n A produ��o est� em orden");
//	}else{
//		printf("\n A produ��o est� com defeito");
//	}

	if(betriet>=200 && buchstabe=="s"){
		printf("\n A m�quina est� em ordem");
	}else{
		printf("\n A m�quina est� com defeito");
	}
//	
//	aufteilung=betriet/3;
//	nummer=betriet/2;
//	
//	if(aufteilung)
}
/* 

  Este projeto nao foi finalizado, por isso que aparenta esta inacabado.
  
  A ideia desse programa era de mostrar dados, cinco dados se n�o me engano e
  desse resultado um dos cinco resultados estaria fora do normal, assim
  indicando que a maquina estaria quebrada, assim auxiliando na explicacao.

*/
