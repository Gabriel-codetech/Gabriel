#include <stdio.h>

int main() {
    int t = 1;
    int b = 1;
    

    // mover torre 5 casas para a direita
    while (t <= 5)
    {
        printf("%d\n", t); 
        t++;
        printf("Direita\n"); // imprime a direção do movimento
    }
     // mover o bispo na diagonal   
     
    do
    {
        printf("%d\n", b); 
        b++;
        printf("Cima, direita\n"); // imprime a direção do movimento

    } while (b <= 5);

    // mover rainha 
    for (int i = 0; i <= 8; i++)
    {
        printf("Esquerda\n"); // imprime a direção do movimento
    }
    
    
    return 0;
}
