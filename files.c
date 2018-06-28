/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>


int writeRandom(FILE *f){
   fprintf(f, "bolete 10 20 30\n");
   return 0;
}

int closeFile(FILE *f){
    fclose(f);
    return 0;
}

void readFile(FILE *f){
    int a,b,c;
    char string[100];
    while(!feof(f)){
        fscanf(f,"%s %d %d %d",string,&a,&b,&c);
        printf("\n%s",string);
        printf("\n%i",a+b+c);
    }
}

void testFile(char *path){
    FILE *file;
    int i;
    file = fopen("test2.txt","a");
    if (i) {
        printf("deu ruim");
        return;
    }
    printf("bolete1");
    writeRandom(file);
    printf("bolete2");
    closeFile(file);
    printf("bolete3");
    file = fopen("test2.txt","r");
    readFile(file);
    closeFile(file);

}
    