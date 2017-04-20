//
// Created by 1 on 19.04.2017.
//

#include "binary_power.h"

namespace arithmetic {
    template<class Integer>
    Integer binary_power(Integer a, Integer n) {
        Integer result = 1;
        while (n) {
            if (n & 1) {
                result *= a;
            }
            a *= a;
            n >>= 1;
        }
        return result;
    }
}
