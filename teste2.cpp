#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int vet[15], fat[15], i;
    for (i = 0; i < 15; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 15; i++) {
        for (fat[i] = 1; vet[i] > 1; vet[i]--) {
            fat[i] = vet[i];
        }
        printf("%d\n", (fat[i]));
    }
    system("pause");
    return 0;
}
