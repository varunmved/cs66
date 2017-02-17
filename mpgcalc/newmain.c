/* 
 * File:   newmain.c
 * Author: Varun
 *
 * Created on March 20, 2014, 12:32 PM
 */
/*
#include <stdio.h>
#include <stdlib.h>

/*
 * 

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

 variables in assembly
 * steps to assign variable to a value a = 5
 * LDR R4, =0x20000000; address of A
 * MOV R0, #5
 * STR R0, [R4] ; A = 5
 * 
 * ;B = 8
 * LDR R4, =0x20000004; address of B
 * MOV R0, #8
 * STR R0, [R4]
 * 