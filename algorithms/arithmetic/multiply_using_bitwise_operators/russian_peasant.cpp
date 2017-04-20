//
// Created by 1 on 19.04.2017.
//

#include "russian_peasant.h"

namespace arithmetic {
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