#include "Alpha.ReturnStatus.hpp"

const char* decodeReturnStatus(const ReturnStatus rs) {
         if(rs == EVERYTHING_IS_GOOD)        return "Everything is good.";
    else if(rs == UNRECOGNIZABLE_SYMBOL)     return "A symbol has not been recognized.";
    //else if(rs == NOT_A_SIMBOL)              return "Not a symbol has been found.";
    else if(rs == NULLPOINTER_ARGUMENT)      return "One of pointer-type arguments is a nullptr.";
    else                                     return "Empty interval.";
}
