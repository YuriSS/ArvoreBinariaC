typedef struct No {
    int num;
    struct No *esq, *dir;
} No;
 
typedef struct Tree {
    No *root;
} Tree;
 
 
 
No* novoNo(int num) {
    No* novo = (No *)malloc(sizeof(No));
    novo->num = num;
    novo->esq = novo->dir = NULL;
    return novo;
}
 
Tree* novaTree(int num) {
    Tree* nova = (Tree *)malloc(sizeof(Tree));
    nova->root = novoNo(num);
    return nova;
}
 
 
 
void push(No* no, int num) {
    if(no != NULL) {
        if(num < no->num) {
            if(no->esq == NULL) {
                no->esq = novoNo(num);
            } else {
                push(no->esq, num);
            }
 
        } else if(num > no->num) {
            if(no->dir == NULL) {
                no->dir = novoNo(num);
            } else {
                push(no->dir, num);
            }
 
        }
 
    }
}
 
 
 
void inorder(No* no) {
    if(no != NULL) {
        inorder(no->esq);
        printf(" %d", no->num);
        inorder(no->dir);
    }
}
 
void preorder(No* no) {
    if(no != NULL) {
        printf(" %d", no->num);
        preorder(no->esq);
        preorder(no->dir);
    }
}
 
void posorder(No* no) {
    if(no != NULL) {
        posorder(no->esq);
        posorder(no->dir);
        printf(" %d", no->num);
    }
}
