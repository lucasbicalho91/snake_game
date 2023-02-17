	#include<stdio.h>
	
	#define N 20
	#define M 40
	
	//Utilizaremos os códigos ASCII 186, 187, 188, 200, 201 e 205 para criar as quatro paredes.
	
	int i, j;
	
	int main() {
		for (i=0; i<=M+1; i++) {
			if (i==0) {
				printf("%c", 201);
			} else if (i==M+1) {
				printf("%c", 187);
				
			} else {
				printf ("%c", 205);
			}
		}
		printf ("\n");
		
		for (i=0; i<N; i++) {
			printf("%c", 186);
			for (j=0; j<M; j++) {
				if (j==M-1) {
					printf(" %c\n", 186);
				} else {
					printf(" ");
				}
			}
		}
		
		for (i=0; i<=M+1; i++) {
			if (i==0) {
				printf("%c", 200);
			} else if (i==M+1) {
				printf("%c", 188);
				
			} else {
				printf ("%c", 205);
			}
		}
	}
