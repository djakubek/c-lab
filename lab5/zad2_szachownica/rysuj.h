/* rysuj szlaczek = funkcja */
#include <stdio.h>
void rysuj(char element[], int k){
	int i = 0;
	while (i < k){
		printf("%s", element);
		++i;
	}
	printf("\n");
}
