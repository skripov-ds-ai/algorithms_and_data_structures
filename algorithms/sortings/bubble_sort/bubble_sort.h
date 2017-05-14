#pragma once
//
// Created by 1 on 20.04.2017.
//
#include <algorithm>
#include <iostream>
#include <iterator>
#include <functional>

namespace sortings {using std::iter_swap;
    using std::swap;

    template <typename RandomAccessIterator>
    void bubble_sort(RandomAccessIterator first, RandomAccessIterator last) {
        bool swapped = true;
        while (first != last-- && swapped) {
            swapped = false;
            for (auto i = first; i != last; ++i) {
                if (*(i + 1) < *i) {
                    std::iter_swap(i, i + 1);
                    swapped = true;
                }
            }
        }
    }

    // there is an error
    template <typename RandomAccessIterator, typename Compare>
    void bubble_sort(RandomAccessIterator first, RandomAccessIterator last, Compare comp) {
        bool swapped = true;
        while (first != last-- && swapped) {
            swapped = false;
            for (auto i = first; i != last; ++i) {
                if (comp(*(i + 1), *i)) {
                    std::swap(*(i + 1), *i);
                    swapped = true;
                }
            }
        }
    }
}

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_BUBBLE_SORT_H
#define ALGORITHMS_AND_DATA_STRUCTURES_BUBBLE_SORT_H



#endif //ALGORITHMS_AND_DATA_STRUCTURES_BUBBLE_SORT_H
