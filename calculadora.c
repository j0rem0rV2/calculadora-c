#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    // Solicita ao usuário para inserir um operador
    printf("Escolha um operador (+, -, *, /): ");
    scanf("%c", &operador);

    // Solicita ao usuário para inserir dois números
    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    // Realiza a operação com base no operador escolhido
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("Erro! Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}
