int main() {
    // Definindo as coordenadas dos navios
    int navio1X = 1, navio1Y = 1;  // Coordenadas do navio 1
    int navio2X = 2, navio2Y = 2;  // Coordenadas do navio 2

    // Criando o tabuleiro 3x3 (com valores apenas para ilustrar)
    int tabuleiro[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    // Pedindo as coordenadas do navio 1 ao jogador
    printf("Digite a coordenada X do navio 1 (0, 1 ou 2): ");
    scanf("%d", &navio1X);
    printf("Digite a coordenada Y do navio 1 (0, 1 ou 2): ");
    scanf("%d", &navio1Y);

    // Pedindo as coordenadas do navio 2 ao jogador
    printf("Digite a coordenada X do navio 2 (0, 1 ou 2): ");
    scanf("%d", &navio2X);
    printf("Digite a coordenada Y do navio 2 (0, 1 ou 2): ");
    scanf("%d", &navio2Y);

    // Exibindo as coordenadas inseridas
    printf("Coordenadas do navio 1: (%d, %d)\n", navio1X, navio1Y);
    printf("Coordenadas do navio 2: (%d, %d)\n", navio2X, navio2Y);

    return 0;
}