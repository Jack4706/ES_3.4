#include <stdio.h>

int main() {

    char nome,sesso;

    printf("inserisci l'iniziale del nome:\n");
    scanf("%c",&nome);

    getchar();

    printf("inserisci il sesso M o F:\n");
    scanf("%c",&sesso);

    if(sesso == 'M') {
        printf("Egregio signor %c",nome);
    }
    else {
        printf("Gentilissima signora %c",nome);
    }
    return 0;
}
