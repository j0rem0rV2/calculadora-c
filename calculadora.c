#include <stdio.h>
#include <stdlib.h>

// Função para exibir o menu
void exibirMenu() {
    printf("\n--- Calculadora para Programadores ---\n");
    printf("1. Converter número\n");
    printf("2. Operações bitwise (Lsh, Rsh, Or, Xor, Not, And)\n");
    printf("3. Operações matemáticas (+, -, ×, ÷, Mod)\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
}

// Função para converter número
void converterNumero(unsigned int num) {
    printf("HEX: %X\n", num);
    printf("DEC: %u\n", num);
    printf("OCT: %o\n", num);
    printf("BIN: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

// Função para operações bitwise
void operacoesBitwise(unsigned int num1, unsigned int num2) {
    printf("1. Lsh (Deslocamento à esquerda)\n");
    printf("2. Rsh (Deslocamento à direita)\n");
    printf("3. Or (|)\n");
    printf("4. Xor (^)\n");
    printf("5. Not (~)\n");
    printf("6. And (&)\n");
    printf("Escolha uma operação: ");
    int op;
    scanf("%d", &op);

    unsigned int resultado;
    switch (op) {
        case 1:
            resultado = num1 << num2;
            printf("%u << %u = %u\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 >> num2;
            printf("%u >> %u = %u\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 | num2;
            printf("%u | %u = %u\n", num1, num2, resultado);
            break;
        case 4:
            resultado = num1 ^ num2;
            printf("%u ^ %u = %u\n", num1, num2, resultado);
            break;
        case 5:
            resultado = ~num1;
            printf("~%u = %u\n", num1, resultado);
            break;
        case 6:
            resultado = num1 & num2;
            printf("%u & %u = %u\n", num1, num2, resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }
}

// Função para operações matemáticas
void operacoesMatematicas(unsigned int num1, unsigned int num2) {
    printf("1. Soma (+)\n");
    printf("2. Subtração (-)\n");
    printf("3. Multiplicação (×)\n");
    printf("4. Divisão (÷)\n");
    printf("5. Mod (%%)\n");
    printf("Escolha uma operação: ");
    int op;
    scanf("%d", &op);

    unsigned int resultado;
    switch (op) {
        case 1:
            resultado = num1 + num2;
            printf("%u + %u = %u\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("%u - %u = %u\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("%u × %u = %u\n", num1, num2, resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%u ÷ %u = %u\n", num1, num2, resultado);
            } else {
                printf("Erro! Divisão por zero não é permitida.\n");
            }
            break;
        case 5:
            if (num2 != 0) {
                resultado = num1 % num2;
                printf("%u %% %u = %u\n", num1, num2, resultado);
            } else {
                printf("Erro! Mod por zero não é permitido.\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    int opcao;
    unsigned int num1, num2;

    while (1) { // Loop infinito até o usuário escolher sair
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao == 4) {
            printf("Saindo...\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Digite um número: ");
                scanf("%u", &num1);
                converterNumero(num1);
                break;
            case 2:
                printf("Digite o primeiro número: ");
                scanf("%u", &num1);
                printf("Digite o segundo número: ");
                scanf("%u", &num2);
                operacoesBitwise(num1, num2);
                break;
            case 3:
                printf("Digite o primeiro número: ");
                scanf("%u", &num1);
                printf("Digite o segundo número: ");
                scanf("%u", &num2);
                operacoesMatematicas(num1, num2);
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
