int main(void) {
    printf("ConsumoAutomovel ::::::: \n");
        
    int km;
    int l;
    
    printf("Vamos calcular seu consumo médio. \n");
    printf("Qual foi a sua quilometragem hoje? \n");
    scanf("%d", &km);
    
    printf("Quantos litros de combustível você gastou? \n");
    scanf("%d", &l);
    
    float kml = km / l;
    
    printf("O seu consumo médio foi: %.2f km/l\n", kml);
    
    return 0;
}
