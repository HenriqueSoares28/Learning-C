typedef struct{
    int dia,
        mes,
        ano;
}DATA;

void cadastrarData(DATA d){
    printf("Digite o dia: ");
    scanf("%d", &d.dia);
    printf("Digite o mes: ");
    scanf("%d", &d.mes);
    printf("Digite o ano: ");
    scanf("%d", &d.ano);
}