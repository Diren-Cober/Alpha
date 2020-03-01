#include "Alpha.Alphabet.hpp"
#include "Alpha.English.hpp"

//
//This sort in its current state works only if 1251-encoding is used.
//

ReturnStatus alphaSort_English(char* beginning, unsigned int length) {

    if(beginning == nullptr) return NULLPOINTER_ARGUMENT;   //Call decodeReturnStatus to get information in 'const char*'.
    if(length < 2) return EMPTY_INTERVAL;

    AlphaSTD_English_Short alphabet;   //Alphabet of the sort.
    unsigned int i, j = 0, shift;

    {
        int cp;

        for(i = 0; i < length; i++) {

            cp = (int)beginning[i];

            if(cp < 65 || cp > 122 || (cp > 90 && cp < 97)) return UNRECOGNIZABLE_SYMBOL;

            shift = cp % 32 - 1;
            alphabet.alphas[shift] = cp;
            alphabet.counters[shift] ++ ;
        }
    }

    shift = 0;

    for(i = 0; i < length; i++) {

        _label_inner:

        if(i - shift < alphabet.counters[j])
            beginning[i] = alphabet.alphas[j];
        else {
            shift = i;
            j++;
            goto _label_inner;
        }
    }

    return EVERYTHING_IS_GOOD;
}
