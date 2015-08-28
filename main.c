/* 
 * File:   main.c
 * Author: Kevin
 *
 * Created on 26 août 2015, 13:49
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

#define DATA_LENGTH 5

typedef struct {
    int min;
    int max;
} minMaxType;

minMaxType getMinMax(int* vect, int length) {
    minMaxType data;
    int i ;

    data.min = vect[0];
    data.max = vect[0];
    for (i=1; i<length ; i++) {
        if (vect[i] > data.max) {
            data.max = vect[i];
        }
        if (vect[i] < data.min) {
            data.min = vect[i];
        }
    }
    return(data); 
}

int main(void) {
    int data[DATA_LENGTH] = {0, 0, 0, 0, 0};
    int i;
    minMaxType result;
    
    result = getMinMax(data, DATA_LENGTH);
     while ((result.max<10) && (result.min>-10)) {
         for (i=0; i<5; i++) {
             data[i] += (i-2);
         }
        result = getMinMax(data, DATA_LENGTH);
    }
    return (0);
}

