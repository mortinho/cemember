/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * 
%o
52
Unsigned octal integer.
%x or %X
2a or 2A
Unsigned hexadecimal integer.
%f or %F
1.21
Signed decimal float.
%e or %E
1.21e+9 or 1.21E+9
Signed decimal w/ scientific notation.
%g or %G
1.21e+9 or 1.21E+9
Shortest representation of %f/%F or %e/%E.
%a or %A
0x1.207c8ap+30 or 0X1.207C8AP+30
Signed hexadecimal float.
%c
a
A character.
%s
A String.
A character string.
 */
#include <stdio.h>

void tiposEx(){
    int i = 1234;
    float f = 12.34;
    char* str = "string";
    printf("inteiro: %i\n",i);
    printf("unsigned: %u\n",i);
    printf("octal: %o\n",i);
    printf("hexadecimal: %x\n",i); // %X para caixa alta
    printf("float: %f\n",f);
    printf("cientifico: %e\n",f);
    printf("menor entre os anteriores: %g\n",f);
    printf("float hexadecimal: %a\n",f);
    printf("char: %c\n",str[0]);
    printf("String: %s\n",str);
}
void floatFormatEx(){
    float f = 456.123456;
    printf("default: %f\n",f);
    printf("2 casas: %.2f\n",f);
    
    // "espaco" é o default e pode ser omitido
    printf("left padding: % 10.f\n",f);
    
    // pontos, sinais e decimais contam, numero impresso tem 10 de tamanho
    printf("left padding com zero: %010.f\n",f);
    
    printf("hexa minusculo: %a\n",f);
    printf("hexa maiusculo: %A\n",f);
    printf("sinal incondicional: %+f\n",f);
    printf("tda: %+010.2f\n",f);
}