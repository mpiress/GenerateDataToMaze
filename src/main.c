#include "mat.h"

int main(){
	srand( (unsigned)time(NULL) );

	Matrix m;

	SetMatrixSignature();
	for(int i=0; i<NUMAT; i++)
		SaveMatrix(&m);
	
	printf("[!] CONJUNTO DE MATRIZES CRIADA NA PASTA DATASET COM O NOME DE INPUT.DATA \n");

	return 0;
}
