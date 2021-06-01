#include<stdio.h>

/*
PONTEIROS
AULA 01

AULA 02

*/
/*
int soma_min_max(int *min, int *max);

int main(){
    int min, max, soma;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d",&min);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d",&max);

    soma=soma_min_max(&min,&max);//alterará as variáveis, passagem por referência usando ponteiro, LEMBRA DO & para amarrar o endereço da variáveç

    printf("\nMenor valor = %d",min);
    printf("\nMaior valor = %d",max);
    printf("\nSOMA valor = %d",soma);


    return 0;
}

int soma_min_max(int *min, int *max){
    if(*min>*max){
        int aux= *min;
        *min = *max;
        *max=aux;
    }
    return *min+*max;
}
*/
/*
void imprimir_vetor(int *ptr, int tamanho);
void ordenar_crescente(int *ptr, int tamanho);
void ordenar_decrescente(int *ptr, int tamanho);

int main() {
    int n;
    printf("Digite o tamanho do vetor:");
    scanf("%d",&n);

    int vetor[n];
    for(int i=0; i<n;i++){
        printf("Digite o elemento %d do vetor:",i+1);
        scanf(" %d",&vetor[i]);
    }

    printf("\n\nODRDEM CRESCENTE:\n");
    ordenar_crescente(&vetor,n); //o nome do vetor é o mesmo que o endereço do primeiro elemento do vetor(vetor == vetor[0]
    imprimir_vetor(&vetor,n);

    printf("\n\nODRDEM DECRESCENTE:\n");
    ordenar_decrescente(&vetor,n);
    imprimir_vetor(&vetor,n);
}
void imprimir_vetor(int *ptr, int tamanho){
    for(int i=0; i < tamanho; i++){
        printf("%d",ptr[i]);
    }
}
void ordenar_crescente(int *ptr, int tamanho){
    for (int i=0;i<tamanho-1;i++){ //numero de passadas no vetor para que os min estejam no inc e os max no fim
        for(int j=0;j<tamanho-1;j++){
            if(ptr[j]>ptr[j+1]){
                int aux=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=aux;
            }
        }
    }
}
void ordenar_decrescente(int *ptr, int tamanho){
    for (int i=0;i<tamanho-1;i++){ //numero de passadas no vetor para que os min estejam no inc e os max no fim
        for(int j=0;j<tamanho-1;j++){
            if(ptr[j]<ptr[j+1]){
                int aux=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=aux;
            }
        }
    }
}
*/

void transformar_minusculas(char *ptr);
void transformar_maiusculas(char *ptr);
void transformar_camelcase(char *ptr);
int main(){
    char texto[51];
    printf("Digite um texto de ate 50 caracteres: ");
    gets(texto);

    transformar_minusculas(texto);
    printf("\nTEXTO EM LETRAS MINUSCULAS:\n");
    puts(texto);

    transformar_maiusculas(texto);
    printf("\nTEXTO EM LETRAS MAIUSCULAS:\n");
    puts(texto);

    transformar_camelcase(texto);
    printf("\nTEXTO EM CAMELCASE:\n");
    puts(texto);

    return 0;
}

void transformar_minusculas(char *ptr){
    for(int i=0;ptr[i]!='\0';i++){
        if(ptr[i]>='A'&&ptr[i]<='Z'){
            ptr[i]+=32;
        }
    }
}
void transformar_maiusculas(char *ptr){
for(int i=0;ptr[i]!='\0';i++){
        if(ptr[i]>='a'&&ptr[i]<='z'){
            ptr[i]-=32;
        }
    }
}

void transformar_camelcase(char *ptr){ //Aula de IC (1º caracter e caracteres depois do expaço)
for(int i=0;ptr[i]!='\0';i++){
    if(ptr[i] == ' '){

        if(ptr[i+1] == ' '){
            continue;
        }
        else{
            if(ptr[i+1]>='a'&&ptr[i+1]<='z'){
            ptr[i+1]-=32;
        }
        i++;
        }
    }
    else{
        if(ptr[i]>='A'&&ptr[i]<='Z'){
            ptr[i]+=32;
        }
    }
    if(i == 0 && ptr[0]>='a'&&ptr[0]<='z' ){
            ptr[i]-=32;

    }
}
}


















