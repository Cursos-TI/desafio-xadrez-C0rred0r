#include <stdio.h>

//função recursiva usada para substituir loop simples
void MovimentoTorre(int casa) {

    if (casa > 0)
    { 
        printf("Direita\n");
        MovimentoTorre(casa - 1);
    }

}

void MovimentoRainha(int casa) {

    if (casa > 0)
    { 
        printf("Esquerda\n");
        MovimentoRainha(casa - 1);
    }

}

void MovimentoBispo(int casa){

    if(casa>0){
        printf("Direita\n");
        MovimentoBispo(casa - 1);
    }
}

int main(){

int bispo = 1, torre=5, rainha=8, cavalo=3;


//TORRE
printf("A torre move-se Na vertical ou na Horizontal\n");
MovimentoTorre(torre);

//BISPO 
printf("\n");

    printf("O Bispo se move na diagonal\n");
    for(int i = 3; i > 0; i--){
        MovimentoBispo(bispo);
        if (i == 1)
        {
          break;
        }
        printf("Cima\n");
       
    }   

//Rainha 
printf("\n");
    printf("A Rainha se move em qualquer direção\n");
    MovimentoRainha(rainha);

//Cavalo cima e direita loop complexo
printf("\n");

    printf("o Cavalo move-se em L\n");
    
   for(int cima= 1; cima <= 3; cima++){//loop externo
    for( int direita=3; cima == 3 && direita <= 3; direita++){//loop interno
        printf("Direita\n");
    }
    if (cima == 3)
        {
            continue; //'continue' usado para pular o terceiro 'cima'
        }
    printf("Cima\n");
   }



return 0;
}