/*
REVIS�O DE FUN��ES: QUEST�O 01
Desenvolver uma fun��o que exiba os m�ltiplos de N compreendidos no intervalo definido por A e B.
*/

#include <stdio.h>

void multiplos (int n, int a, int b);

void main (){
    int n, a, b;
    printf("Digite o numero do qual voc� quer saber o multiplo: ");
    scanf("%d", &n);
    printf("Digite o primeiro numero do intervalo: ");
    scanf("%d", &a);
    printf("Digite o ultimo numero do intervalo: ");
    scanf("%d", &b);
    multiplos(n, a, b);
    printf("%d   %d   %d", n, a, b);
}

void multiplos(int n, int a, int b){

}
