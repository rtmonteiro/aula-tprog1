// #include <stdio.h>

/* Estrutura para representar um ponto no espaço 2D */
typedef struct ponto {
   float x;
   float y;
} Ponto;

/* INSIRA SEU CODIGO AQUI, CASO DESEJE CRIAR ALGUMA FUNCAO AUXILIAR */
/*
void deslocaRetangulo(Ponto v1, Ponto v2, Ponto p) {
    if (v1.x < 0) {
        v1.x = 0;
        v2.x += -1 * (v1.x);
        p.x += -1 * (v1.x);
    }
    if (v1.y < 0) {
        v1.y = 0;
        v2.y += -1 * (v1.y);
        p.y += -1 * (p.y);
    }

    printf("Pontos depois do desloca:\n");
    printf("v1(%f,%f)", v1.x, v1.y);
    printf(" - ");
    printf("v2(%f,%f)", v2.x, v2.y);
}
*/


/* Funcao que indica se um dado ponto p estah localizado dentro ou fora de um retangulo. O retangulo eh definido por seus vertices inferior esquerdo v1 e superior direito v2. A funcao retorna 1 caso o ponto esteja localizado dentro do retangulo, e 0 caso contrario, sendo que os limites sao considerados como parte do retangulo */
int dentroRet (Ponto v1, Ponto v2, Ponto p) {
	int taDentro = 0;

    if( ((p.x >= v1.x) && (p.x <= v2.x) ) && ((p.y >= v1.y) && (p.y <= v2.y)) ) {
        taDentro = 1;
    } else {
        taDentro = 0;
    }
	return taDentro;
}

/*
int main() {
    Ponto p;
    Ponto v1, v2;
    printf("Ponto: ");
    scanf("%f", &p.x);
    scanf("%f", &p.y);
    printf("p(%f,%f)", p.x, p.y);
    printf("\n");

    printf("## REC ##\n");
    printf("v1: ");
    scanf("%f", &v1.x);
    scanf("%f", &v1.y);
    printf("v1(%f,%f)", v1.x, v1.y);
    printf("\n");

    printf("v2: ");
    scanf("%f", &v2.x);
    scanf("%f", &v2.y);
    printf("v2(%.2f,%.2f)", v2.x, v2.y);
    printf("\n");

    int r = dentroRet(v1, v2, p) ? printf("Tá!") : printf("Num tá");
    return 0;
}*/
