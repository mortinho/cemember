/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mortinhow
 *
 * Created on 20 de Março de 2018, 21:50
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "printfEx.h"
#include "flowControlEx.h"
#include "files.h"

struct S {
   int i;
   char* str;
};
/*
 * 
 */

int menuPrincipal(){

    int opcao;

    printf("\n\n\t -- Menu do Usuario --\n\n");

    printf("\nSua Escolha: ");
    scanf("%d",&opcao);

    return opcao;
}


int main(int argc, char** argv) {
    //floatFormatEx();
    //tiposEx();
    int opcao;

    do{
        opcao = menuPrincipal();
        printf("\n");
        system("@cls||clear");
        switch(opcao){
           case 1:{
               testFile("test.txt");/*txtreally*/
           }break;
        }
   }while(opcao != 10);


    struct S s1;
    s1.i =0;
    //printf("custom conversion: %i\nstdlibs conversion: %i",integer(argv[1]),atoi(argv[1]));
    testAll(50);
    return 0;
}

void printargs(int len,char **args){
    int i;
    for(i= 0; i < len; i++){
            printf("Arg no %i: %s\n",i,args[i]);
            char c;
            
    }
}

int integer(char* s){
    int res = 0;
    char z = '0';
    int size = strlen(s);
    for(int i=0;i < size;i++){
        res*=10;
        if (s[i]<'0'||s[i]>'9'){
            res/=10;
            break;
        }
        else {
            res=res+s[i]-z;
        }
    }
    return res;
}

