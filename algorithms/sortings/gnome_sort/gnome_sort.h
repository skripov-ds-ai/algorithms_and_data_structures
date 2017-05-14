//
// Created by 1 on 25.04.2017.
//
#include <algorithm>
#include <iostream>
#include <iterator>
#include <functional>

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_GNOME_SORT_H
#define ALGORITHMS_AND_DATA_STRUCTURES_GNOME_SORT_H

namespace sortings {
    template<class RandomAccessIterator>
    void gnome_sort(RandomAccessIterator begin, RandomAccessIterator end);

    template<class RandomAccessIterator, class Compare>
    void gnome_sort(RandomAccessIterator begin, RandomAccessIterator end, Compare comp);
}

#endif //ALGORITHMS_AND_DATA_STRUCTURES_GNOME_SORT_H
