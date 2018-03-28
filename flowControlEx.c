/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void testFor(int i){
    printf("for counting to %i: ",i);
    for(int k = 0; k < i; k++){
        printf("%i, ",k);
    }
    printf("\n");
}

void testWhile(int i){
    int k = 0;
    printf("while counting to %i: ",i);
    while(k<i){
        printf("%i, ",k++);
    }
    printf("\n");
}

void testDo(int i){
    int k = 0;
    printf("do counting to %i: ",i);
    do{
        printf("%i, ",k); k++;
    } while (k<i);
    printf("\n");
}

int recCount(int i, int c){
    printf("%i",c);
    c++;
    if(c==i){
        printf("\n");
    } else {
        printf(", ");
        recCount(i,c);
    }
}

void testRec(int i){
    printf("recursive counting to %i: ",i);
    int c = 0;
    recCount(i,c);
}

void testAll(int i){
    testFor(i);
    testWhile(i);
    testDo(i);
    testRec(i);
}