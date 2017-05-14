#pragma once
//
// Created by 1 on 19.04.2017.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_RUSSIAN_PEASANT_H
#define ALGORITHMS_AND_DATA_STRUCTURES_RUSSIAN_PEASANT_H

namespace arithmetic {
    /*
     * This is implementation of russian peasant algorithm for
     * unsigned integers
     * */
    template <class Unsigned>
    Unsigned russian_peasant(Unsigned a, Unsigned b) {
        Unsigned result = 0;

        while (b) {
            if (b & 1) {
                result += a;
            }
            a <<= 1;
            b >>= 1;
        }

        return result;
    }
}

#endif //ALGORITHMS_AND_DATA_STRUCTURES_RUSSIAN_PEASANT_H
