#pragma once

enum ReturnStatus {

    EVERYTHING_IS_GOOD      =  0,
    UNRECOGNIZABLE_SYMBOL   = -1,
    NULLPOINTER_ARGUMENT    = -2,
    EMPTY_INTERVAL          = -3
};

const char* decodeReturnStatus(const ReturnStatus rs);
