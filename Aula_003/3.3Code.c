int main(void) {
    printf("Festa ::::::: \n");
        
    int qmulheres;
    int qhomens;
    
    printf("Quantas mulheres estavam na festa?\n");
    scanf("%d", &qmulheres);
    
    printf("Quantos homens estavam na festa?\n");
    scanf("%d", &qhomens);
    
    // poderia ser: int total = (qmulheres * pmulheres) + (qhomens * phomens); - para depois apenas colocar "total" na última linha.
    
    int pmulheres = 17;
    int phomens = 20;
    
    printf("O preço arrecadado foi de R$%d \n", qmulheres * pmulheres, qhomens * phomens);
    
    return 0;
}