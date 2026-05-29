#include <stdio.h>
typedef struct {
   char nome[101];
   char codigoBarras[13];
   int tipo_produto;
   int perecivel;
   char data_Fabricacao[11];
   char data_Validade[11];
   float volume;
   int quantidade_itens;
   float valorUnitario;
} Produto;

