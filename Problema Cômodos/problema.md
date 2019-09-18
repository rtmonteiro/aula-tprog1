# Problema **Cômodos**

>Calcular o perímetro e área de uma edificação planar em uma planta arquitetônica compostas por cômodos compostos por circulos, triângulos e retângulos não superpostos.
>
>Considere que os dados da planta estão em um arquivo "planta.txt".
>
>Considere que um círculo contém um ponto de origem e seu raio, que um triângulo contém 3 pontos representando seus vértices, sua base e altura, e um retângulo contém 2 pontos representando seus vértices superior esquerdo e inferior direito.
>
>Considere que o arquivo tem informação de cada cômodo em uma linha.
>Apresentar os dados dos cômodos da planta em ordem de área e dos ordenados por perímetro

Exemplo:

```txt
C 1 3 2
T 1 8 3 5 7 9 3 2
R 3 5 15 2
```

**Estruturas:**

- Ponto
- Círculo
- Triângulo
- Retângulo
- Comodo
- Planta

**Ponto:** *(int x,y)*

- ler()
- apresentar()
- distancia()

**Círculo:** *(tPonto p, int raio)*

- ler()
- apresentar()
- area()
- perimetro()

**Triângulo:** *(tPonto v1, tPonto v2, tPonto v3, float base, float altura)*

- ler()
- apresentar()
- area()
- perimetro()

**Retângulo:** *(tPonto supEsq, infDir)*

- ler()
- apresentar()
- area()
- perimetro()
- calcularBase()
- calcularAltura()

**Circulos:** *(tCirculo c[], int ncirculos)*

- area()
- perimetro()
- inserirCirculo()

**Triângulos:** *(tTriangulos t[], int ntriangulos)*

- area()
- perimetro()
- inserirTriangulo()

**Retângulos:** *(tRetangulos r[], int nretangulos)*

- inserirRetangulo()
- area()
- perimetro()

**Cômodo:**

Union,
Tipo,
Área perímetro

```c
typedef union forma {
  circulo c;
  triangulo t;
  retangulo r;
} tForma;

typedef struct comodo {
  tForma t;
  char tag;
  float area;
  float perimetro;
} tComodo;

typedef struct planta {
 tComodo t[];
} tPlanta;
```

Ponto.h

```c
#ifndef _PONTO
  #define _PONTO
  typedef struct ponto{
    int x, y;
  } Tponto;

  void lerponto(tponto*);
  void apresentarponto(tponto*);
  float distancia (tponto*, tponto*);
#endif
```

Ponto.c

```c
#include <stdio.h>
#include <math.h>
#include "ponto.h"

void lerponto(tponto *p) {
  scanf("%d%d", &p->x , &p->y);
}

void apresentarPonto (tponto *p) {
  printf("(%d, %d)", p->x, p->y);
}

float distancia (tponto *p1, tponto *p2) {
  return sqrt( sqr(p1->x - p2->x) + sqr(p1->y - p2-> y);
}
```

Circulo.h

```c
#ifndef _CIRCULO
  #define _CIRCULO
  
  typedef struct circulo{
    tPonto org;
    int raio;
  } tCirculo;

  void lerCirculo(tcirculo*);
  void apresentarCirculo(tcirculo*);
  float areaCirculo(Tcirculo*);
  float perimetroCirculo(tCirculo*);
#endif
```

Circulo.c

```c
#include <stdio.h>
#include <math.h>
#include "circulo.h"

void lercirculo(tCirculo *c){
  lerPonto(&c->org);
  scanf("%d", c->raio);
}

void apresentarcirculo (tCirculo *c) {
  printf("Origem: ");
  apresentarPonto(&c->org);
  printf("raio : %d", c->raio);
}

float areacirculo (tCirculo *c) {
  return (pow(c->raio,2) * M_PI ) / 4
}
```
