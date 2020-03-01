#pragma once

enum ReturnStatus {

    EVERYTHING_IS_GOOD      =  0,
    UNRECOGNIZABLE_SYMBOL   = -1,
    //NOT_A_SIMBOL            = -2,
    NULLPOINTER_ARGUMENT    = -3,
    EMPTY_INTERVAL          = -4
};

const char* decodeReturnStatus(const ReturnStatus rs);
