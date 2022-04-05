#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Rafael.h"

/*int quadrado(int a){
    return a * a;
};

int cubo(int b){
    return quadrado(b) * b;
};

int menor (int a, int b){
    if (a < b) {
        return a;
    }
    else
        return b;
};

int soma (int a, int b){
	return a + b;
};

float somaFloat (float a, float b){
   return a + b;
};

int subtrair (int a, int b) {
    return a - b;
};

float subtrairFloat (float a, float b) {
    return a - b;
};

float multiplicar (float a, float b) {
    return a * b;
};

int dividir (int a, int b) {
    return a / b;
};*/

float porcentGov (float a, float b) {
    float c = (b * 100) / a;
    return c;
};

/*int sobraEstado (int a) {
    a = 100;
    return a - porcentGov (2.200, 1.600);
    //Problema na sobra de porcentagem
};

float declinio (float *dec) {
    float a = 17;
    *dec = *dec * a;
    return 0;
};

float pico () {
    float *pic;
    float a;
    a = 278;
    pic = &a;
    //return dec;
};*/

int maiorvt (int *dados){
 int maior = dados[0];
    for (int i = 0; i <=29; i++) {
        if (maior < *(dados+i)){
            maior = *(dados+i);};
};
 return maior;
};

int menorvt (int *dados){
 int menor = dados[0];
    for (int i = 0; i <=29; i++) {
        if (menor > *(dados+i)){
            menor = *(dados+i);};
};
return menor;
};

int mediavt (int *dados){
 int soma = 0;
 int media = 0;
    for (int i = 0; i <=29; i++) {
        soma = soma + *(dados+i);
        media = soma / 30;
};
 return media;
};

char letraMaiuscula(char letra){
if(letra >= 'a' && letra <= 'z'){
letra = letra - 32;
}
return letra;
};

void trocaChar(char *ptr1, char *ptr2){
char temp;
temp = *ptr1;
*ptr1= *ptr2;
*ptr2= temp;
}

