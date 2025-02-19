int main()
{
    printf("MediaDasNotas ::::::: \n");

    float nota1;
    float nota2;
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    printf("A sua média é: %f", (nota1 + nota2)/2);

    return 0;
}