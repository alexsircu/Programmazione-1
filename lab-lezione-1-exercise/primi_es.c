#include <stdio.h>

int main() {
	printf("Prima riga\n");
	printf("Seconda riga\n");
	
	printf("Prova prima riga di nuovo\nProva seconda riga\n");
	
	int x, y;
	printf("Inserisci x: ");
	scanf("%d", &x);
	printf("Inserisci y: ");
	scanf("%d", &y);
	
	printf("Il numero x è: %d\n", x);
	printf("Il numero y è: %d\n", y);
	
	return 0;
}

