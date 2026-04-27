#include <stdio.h>
int main(){
    float n1;
    float n2;
    char operacao;
    float resultado;

    printf("Digite um número: \n");
    scanf("%f", &n1);

    printf("Digite outro número: \n");
    scanf("%f", &n2);

    printf("Qual operador você deseja usar? (+), (-), (x), (/) \n");
    scanf(" %c", &operacao);

    if (operacao == '+'){
        resultado = n1 + n2 ;
        printf("A soma entre %.2f e %.2f é: %.2f", n1, n2, resultado);
    }
    else if (operacao == '-'){
        resultado = n1 - n2 ;
        printf("A subtração entre %.2f e %.2f é: %.2f", n1, n2, resultado);
    }
    else if (operacao =='x' || operacao =='X'){
        resultado = n1 * n2;
        printf("A multiplicação entre %.2f e %.2f é: %.2f", n1, n2 , resultado);
    }
    else if(operacao=='/'){
        resultado = n1 / n2;
        printf("A divisão entre %.2f e %.2f é: %.2f", n1, n2, resultado);
    }
    else{
        printf("Essa operação não existe/não está disponível!");
    }
    return 0;

}
