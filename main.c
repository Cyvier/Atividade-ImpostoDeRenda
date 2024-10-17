#include <stdio.h>

int main() {
    float valor; 
    
    printf("Digite um valor: "); 
    scanf("%f", &valor);
    
    if (valor <= 2259.20) { 
        printf("isento\n");
    } 
    else if (valor > 2259.21 && valor < 2826.65) {
        float resultado = valor - (valor * 0.075); 
        printf("%f\n", resultado); 
    }
    else if (valor > 2826.66 && valor < 3751.05) {
        float resultado = valor - (valor * 0.15);
        printf("%f\n", resultado);
    }
    else if (valor > 3751.06 && valor < 4664.68) {
        float resultado = valor -(valor * 0.225);
        printf("%f\n", resultado);
    }
    else {
    float resultado = valor - (valor * 0.275);
    printf("%f\n", resultado);
}

    return 0; 
}

