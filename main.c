#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main() {
    int numTestes, i;
 
    scanf("%d", &numTestes);
    if(numTestes > 1000)
        return 0;
 
    Tree* a[numTestes];
    for( i=0; i<numTestes; i++ ) {
        int n, j;
        scanf("%d", &n);
        if(n >= 1 && n <= 500) {
            int valor;
            for( j=0; j<n; j++ ) {
                scanf("%d", &valor);
                if(valor >= 0) {
                    if(j == 0) {
                        a[i] = novaTree(valor);
                    } else {
                        push(a[i]->root, valor);
                    }
                }
            }
        }
    }
 
    for( i=0; i<numTestes; i++ ) {
        printf("Case %d:\n", i+1);
        printf("Pre.:");
        preorder(a[i]->root);
        printf("\n");
        printf("In..:");
        inorder(a[i]->root);
        printf("\n");
        printf("Post:");
        posorder(a[i]->root);
        printf("\n\n");
    }
 
    return 0;
}
