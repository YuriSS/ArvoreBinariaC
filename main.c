#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
#include "fila.h"

int main() {

	Fila* fila = novaFila();
	int testes, quant, num, i, j;
	scanf("%d", &testes);

	if(testes > 1000) return 0;
	for(i=0; i<testes; i++) {
		scanf("%d", &quant);
		if(quant > 0 && quant < 500) {
			scanf("%d", &num);
			Arvore* tree = novaArvore(num);
			for(j=0; j<quant - 1; j++) {
				scanf("%d", &num);
				pushTree(tree->root, num);
			}
			pushFila(fila, tree);
		}
	}

	impressaoFila(fila);

	return 0;
}
