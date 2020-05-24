/*
 * main.c
 *
 *  Created on: 10 de mai de 2020
 *      Author: lucas.rodrigues
 */

#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	int resto, valor;
	valor = 8;
	Pilha pilha;
	create(&pilha);

	while(valor != 0){
		resto = valor % 2;
		push(&pilha, resto);
		valor = valor / 2;
	}

	while(!isEmpty(pilha)){
		int valor = pop(&pilha);
		printf("%d",valor);
	}
	return 0;
}
