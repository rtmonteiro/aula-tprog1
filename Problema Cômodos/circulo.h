#ifndef _CIRCULO
  #define _CIRCULO

  typedef struct circulo
  {
    tPonto p;
    int raio;
  };
  

  tCirculo lerCirculo(tPonto, int);
  void apresentarCirculo(tCirculo);

#endif