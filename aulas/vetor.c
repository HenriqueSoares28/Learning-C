int main(){
    system("cls");
    int a[3];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    for(int i=0; i<3; i++){
        printf("%i,", a[i]);
    }
    teste(a);
    printf("\n\n");
    printf("%p", a);
    
}


void teste(int* a[]){
    printf("%p", a);
}