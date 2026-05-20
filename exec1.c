#include <stdio.h>

int main() {
    float notas[8];
    float frequencia;
    int i;#include <stdio.h>

int main() {
    float notas[8];
    float frequencia;
    int i;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;
    
    for(i = 0; i<8; i++){
    
    printf("digite sua nota :");
    scanf("%f", &notas[i]);
    printf(" digite sua frequencia : ");
    scanf("%f", &frequencia);
    
    if(notas[i] >=7  && frequencia >=75 ){
        aprovados++;
    }else {
        reprovados++;
    }
    
    
    
        if (notas[i]> maiorNota){
            maiorNota+=notas[i];
        }
    }
    
    
    printf("alunos aprovados: %d", aprovados);
    printf("\nalunos reprovados: %d", reprovados);
    printf("\nmaior nota; %.2f", maiorNota);

    

    return 0;
}

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;
    
    for(i = 0; i<8; i++){
    
    printf("digite sua nota :");
    scanf("%f", &notas[i]);
    printf(" digite sua frequencia : ");
    scanf("%f", &frequencia);
    
    if(notas[i] >=7  && frequencia >=75 ){
        aprovados++;
    }else {
        reprovados++;
    }
    
    
    
        if (notas[i]> maiorNota){
            maiorNota+=notas[i];
        }
    }
    
    
    printf("alunos aprovados: %d", aprovados);
    printf("\nalunos reprovados: %d", reprovados);
    printf("\nmaior nota; %.2f", maiorNota);

    

    return 0;
}
