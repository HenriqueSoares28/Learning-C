typedef struct{
    int dia,
        mes,
        ano;
}DATA;

void cadastrarData(DATA d){
    fflush(stdin);
    printf("Digite o dia: ");
    scanf(" %i", &d.dia);
    printf("Digite o mes: ");
    scanf(" %i", &d.mes);
    printf("Digite o ano: ");
    scanf(" %i", &d.ano);
}