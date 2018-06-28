/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   files.h
 * Author: mortinhow
 *
 * Created on 27 de Junho de 2018, 23:26
 */

#ifndef FILES_H
#define FILES_H

#ifdef __cplusplus
extern "C" {
#endif

    int writeRandom(FILE* f);
    int closeFile(FILE* f);
    void readFile(FILE* f);
    void testFile(char* path);


#ifdef __cplusplus
}
#endif

#endif /* FILES_H */

