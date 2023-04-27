#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A, senha, contador; 
    // A é o número digitado, senha vai ser o número gerado aleatoriamente, contador vai registrar as tentativas
    contador = 0;
    
    // inicializa o gerador de números aleatórios com a semente atual
    srand(time(NULL));
    
    // gera um número aleatório entre 1 e 1000
    senha = rand() % 1000 + 1;
    
    printf("Adivinhe o número digitado pelo computador.\n");
    do {
        printf("Digite o número ou aperte 0 para encerrar: ");
        scanf("%d", &A);
        
        // verifica se o número digitado é maior ou menor que a senha
        if (A > senha) {
            printf("O número escolhido é menor que %d.\n", A);
            contador++;
        } else if (A < senha) {
            printf("O número escolhido é maior que %d.\n", A);
            contador++;
        } 
        
        // verifica se o usuário quer encerrar o programa
        if (A == 0) {
            break;
        }
    } while (A != senha);
    
    // informa o número de tentativas e parabeniza o usuário
    printf("Parabéns! Você acertou o número em %d tentativas.\n", contador);

    return 0;
}
