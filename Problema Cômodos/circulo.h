#ifndef _CIRCULO
  #define _CIRCULO

  #include "ponto.h"

  typedef struct circulo tCirculo;

  tCirculo* lerCirculo(tPonto p, int raio);
  void apresentarCirculo(tCirculo);

#endif