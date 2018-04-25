#include "isogram.h"
#include <string.h>

#define CASE_DIFF ('a'-'A')

char toUpperCase(const char c){
    if(c >= 'a' && c <= 'z'){
        return c - CASE_DIFF;
    }
    return c;
}

bool is_a_letter(const char c){
    if(c >= 'A' && c <= 'z'){
        return true;
    }
    return false;
}

bool is_isogram(const char phrase[]){

    int occ[256] = {0};

    for(int i = 0; i < strlen(phrase); ++i){

        int ascii_index = (int)toUpperCase(phrase[i]);

        if(is_a_letter(ascii_index)){
            if(occ[ascii_index]++ > 0){
                return false;
            }
        }

    }

    return true;


}
