#pragma once

template<typename TA, typename TC, unsigned int length>class Alphabet {

public:
    TA alphas[length]   = {};   //Flags.
    TC counters[length] = {};   //Symbol counters.
};

typedef Alphabet<unsigned int, unsigned int, 26> AlphaSTD_English_Short;
