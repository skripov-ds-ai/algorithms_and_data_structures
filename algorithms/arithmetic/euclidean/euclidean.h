#pragma once
//
// Created by 1 on 04.04.2017.
//
#include <algorithm>

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_EUCLID_H
#define ALGORITHMS_AND_DATA_STRUCTURES_EUCLID_H


namespace arithmetic {
    using std::swap;

    /*
     * Iterative Euclidean algorithm
     * */
    template <class Integer>
    Integer gcd(Integer a, Integer b) {
        while (b) {
            a %= b;
            swap(a, b);
        }
    }

    template <class Integer>
    Integer lcm(Integer a, Integer b) {
        return a / gcd(a, b) * b;
    }

    template <class Integer>
    Integer gcd_with_subtraction(Integer a, Integer b) {
        while (a != b) {
            (a > b) ? a -= b : b-= a;
        }
        return a;
    }

    template <class Integer>
    Integer recursive_gcd(Integer a, Integer b) {
        return b ? gcd(b, a % b) : a;
    }

    /*
     * That is Euclidean algorithm using XOR-swap for unsigned types
     * */
    template <class Unsigned>
    Unsigned gcd_for_unsigned(Unsigned a, Unsigned b) {
        while (b) {
            b ^= a ^= b ^= a %= b;
        }
        return a;
    }

    template  <class Unsigned>
    Unsigned lcm_for_unsigned(Unsigned a, Unsigned b) {
        return a / gcd_for_unsigned(a, b) * b;
    }
}

#endif //ALGORITHMS_AND_DATA_STRUCTURES_EUCLID_H