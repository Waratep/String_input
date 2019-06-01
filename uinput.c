#include "uinput.h"
#include <stdlib.h>

char * input(){

    size_t size = 8;
    char * str;

    str = malloc(size);
    
    int c = 0; 
    int counter = 0;

    do{
        c = getchar();
        if (counter + 2 >= size){
            size_t new_size = size * 2;
            char * buffer = realloc(str,new_size);
            size = new_size;
            str = buffer;
        }
        
        str[counter++] = c;        
    }
    while (c != '\n');

    str[counter] = 0;

    return str;
}
