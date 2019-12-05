typedef struct
{
    int idPersona;
    int idDestino;
    char tipo[50];
    char estado[50];
    int estaVacio;
}eLlamada;

void inicializarLlamada(eLlamada[]);

void ingresarLlamada(eLlamada[], int, int);

void menuLlamada(eLlamada[], int, int);

int validacionNumeroL(char[]);
