//
// Created by 1 on 25.04.2017.
//
#include "gnome_sort.h"

namespace sortings {
    template<class RandomAccessIterator>
    void gnome_sort(RandomAccessIterator begin, RandomAccessIterator end) {
        auto i = begin + 1, j = begin + 2;

        while (i < end) {
            if (!(*i < *(i - 1))) {
                i = j;
                ++j;
            } else {
                std::iter_swap(i - 1, i);
                --i;
                if (i == begin) {
                    i = j;
                    ++j;
                }
            }
        }
    }

    template<class RandomAccessIterator, class Compare>
    void gnome_sort(RandomAccessIterator begin, RandomAccessIterator end, Compare comp) {
        auto i = begin + 1, j = begin + 2;

        while (i < end) {
            if (!comp(*i, *(i - 1))) {
                i = j;
                ++j;
            } else {
                std::iter_swap(i - 1, i);
                --i;
                if (i == begin) {
                    i = j;
                    ++j;
                }
            }
        }
    }
}