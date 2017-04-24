//
// Created by 1 on 20.04.2017.
//

#include "bubble_sort.h"

namespace sortings {
    template <class RandomAccessIterator>
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
    template <class RandomAccessIterator, class Compare>
    void sortings::bubble_sort(RandomAccessIterator first, RandomAccessIterator last, Compare &comp) {
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