//
// Created by 1 on 12.05.2017.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_LOGARITHM_H
#define ALGORITHMS_AND_DATA_STRUCTURES_LOGARITHM_H

namespace arithmetic {
    template <typename Integer>
    Integer count_of_bits(Integer n) {
        Integer lg_n, t;
        for (lg_n = 0, t = 1; t < n; lg_n++, t+= t);
    }
}

#endif //ALGORITHMS_AND_DATA_STRUCTURES_LOGARITHM_H
