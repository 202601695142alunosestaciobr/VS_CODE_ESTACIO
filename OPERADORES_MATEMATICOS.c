#include <stdio.h>

int main(){

    /*Operadores aritméticos*/
    
    int numero1 = 4, numero2 = 2, resultado = 0;

    //Operador soma (+):
    resultado = numero1 + numero2;
    printf("Soma: %i \n", resultado);

    //Operador subtração (-):
    resultado = numero1 - numero2;
    printf("Subtracao: %i \n", resultado);    
    
    //Operador multiplicação (*): 
    resultado = numero1 * numero2;
    printf("Multiplicacao: %i \n", resultado);

    //Operador divisão (/):
    resultado = numero1 / numero2;
    printf("Divisao: %i \n\n", resultado);

    /*Operadores de atribuição*/

    //Atribuição simples (=): 
    numero1 = 4, numero2 = 2, resultado = 0;
    printf("Numero1: %i\nNumero2: %i\nResultado: %i\n\n", numero1, numero2, resultado);

    //Atribuição com soma (+=): 
    numero1 += 1, numero2 += 1, resultado += 1;
    printf("Numero1: %i\nNumero2: %i\nResultado: %i\n\n", numero1, numero2, resultado);
    
    //Atribuição com subtração (-=):
    numero1 -= 1, numero2 -= 1, resultado -= 1;
    printf("Numero1: %i\nNumero2: %i\nResultado: %i\n\n", numero1, numero2, resultado);

    //Atribuição com multiplicação (*=):
    numero1 *= 1, numero2 *= 1, resultado *= 1;
    printf("Numero1: %i\nNumero2: %i\nResultado: %i\n\n", numero1, numero2, resultado);

    //Atribuição com divisão (/=):
    numero1 /= 2, numero2 /= 2, resultado /= 2;
    printf("Numero1: %i\nNumero2: %i\nResultado: %i\n\n", numero1, numero2, resultado);    

    /*Operadores de incremento e decremento*/

    //Operador incremento (++):
    numero1++, numero2++, resultado++;
    printf("Numero1: %i\nNumero2: %i\nResultado: %i\n\n", numero1, numero2, resultado);

    //Pré-incremento
    numero1 = 1, numero2 = 0;
    numero1 = ++numero2;
    printf("Numero1: %i\nNumero2: %i\n\n", numero1, numero2);

    //Pós-incremento
    numero1 = 1, numero2 = 0;
    numero1 = numero2++;
    printf("Numero1: %i\nNumero2: %i\n\n", numero1, numero2);

    //Operador decremento (--):
    numero1 = 4, numero2 = 2, resultado = 0; 
    numero1--, numero2--, resultado--;
    printf("Numero1: %i\nNumero2: %i\nResultado: %i\n\n", numero1, numero2, resultado);    

    //Pré-decremento
    numero1 = 1, numero2 = 0;
    numero1 = --numero2;
    printf("Numero1: %i\nNumero2: %i\n\n", numero1, numero2);    

    //Pós-decremento
    numero1 = 1, numero2 = 0;
    numero1 = numero2--;
    printf("Numero1: %i\nNumero2: %i\n\n", numero1, numero2);    

    return 0;
}