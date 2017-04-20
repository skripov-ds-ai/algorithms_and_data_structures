//
// Created by 1 on 04.04.2017.
//
#include <algorithm>

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_EUCLID_H
#define ALGORITHMS_AND_DATA_STRUCTURES_EUCLID_H


namespace arithmetic {
    /*
     * Iterative Euclidean algorithm
     * */
    template <class Integer>
    Integer gcd(Integer a, Integer b);

    template <class Integer>
    Integer lcm(Integer a, Integer b);

    template <class Integer>
    Integer gcd_with_subtraction(Integer a, Integer b);

    template <class Integer>
    Integer recursive_gcd(Integer a, Integer b);

    /*
     * That is Euclidean algorithm using XOR-swap for unsigned types
     * */
    template <class Unsigned>
    Unsigned gcd_for_unsigned(Unsigned a, Unsigned b);

    template  <class Unsigned>
    Unsigned lcm_for_unsigned(Unsigned a, Unsigned b);
}

#endif //ALGORITHMS_AND_DATA_STRUCTURES_EUCLID_H