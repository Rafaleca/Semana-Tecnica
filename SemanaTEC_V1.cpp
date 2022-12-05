#include <locale.h>
#include <stdio.h>
#include <string.h>

main () {
	setlocale(LC_ALL,"portuguese");
	
	int produktion, betriet, nummer, aufteilung;
	char buchstabe[5];
	
	printf("\n Infome a quantia produzida: ");
	scanf("%d", &produktion);
	printf("\n A máquina está com defeito: ");
	scanf("%d", &buchstabe);
	
	betriet=produktion*5;//10 minutos, número ficcional
	
	printf("\n O resultado da operação foi: %d", betriet);
//	if(betriet>=3){
//		printf("\n A produção está em orden");
//	}else{
//		printf("\n A produção está com defeito");
//	}

	if(betriet>=200 && buchstabe=="s"){
		printf("\n A máquina está em ordem");
	}else{
		printf("\n A máquina está com defeito");
	}
//	
//	aufteilung=betriet/3;
//	nummer=betriet/2;
//	
//	if(aufteilung)
}
/* 

  Este projeto nao foi finalizado, por isso que aparenta esta inacabado.
  
  A ideia desse programa era de mostrar dados, cinco dados se não me engano e
  desse resultado um dos cinco resultados estaria fora do normal, assim
  indicando que a maquina estaria quebrada, assim auxiliando na explicacao.

*/
