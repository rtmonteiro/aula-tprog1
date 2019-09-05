typedef struct data {
    int dia, mes, ano;
} tData;

int main() {
    tData d;
    tData *p;

    d.dia = 24;
    d.mes = 7;
    d.ano = 1965;

    p = &d;
    p -> dia = 28;
    p -> mes = 1;
    p -> ano = 2001;
}