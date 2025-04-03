#include <stdio.h>

int main() {
    int t = 1;
    int b = 1;
    int movimentocompleto = 1;
    

    // movimento da torre 5 casas para a direita
    while (t <= 5)
    {
        printf("%d\n", t); 
        t++;
        printf("Direita\n"); // imprime a direção do movimento
    }
     // movimento do bispo na diagonal   
     
    do
    {
        printf("%d\n", b); 
        b++;
        printf("Cima, direita\n"); // imprime a direção do movimento

    } while (b <= 5);

    // movimento da rainha 
    for (int i = 0; i < 8; i++)
    {
        printf("Esquerda\n"); // imprime a direção do movimento
    }
    
    // movimento do cavalo
    while (movimentocompleto--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
            printf("Direita\n");
    }
    
    

    return 0;
}
