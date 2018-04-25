#include "isogram.h"
#include <string.h>

bool is_isogram(const char phrase[]){

    int occ[256] = {0};

    for(int i = 0; i < strlen(phrase); ++i){
        occ[phrase[i]]++;
    }

    for(int i = 0; i < 256; ++i){
        if(occ[i] > 1){
            return false;
        }
    }
    return true;

}
