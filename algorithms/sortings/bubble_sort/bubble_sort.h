//
// Created by 1 on 20.04.2017.
//
#include <algorithm>
#include <iostream>
#include <iterator>

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_BUBBLE_SORT_H
#define ALGORITHMS_AND_DATA_STRUCTURES_BUBBLE_SORT_H

namespace sorting {
    template<class RandomAccessIterator>
    void bubble_sort(RandomAccessIterator begin, RandomAccessIterator end);


    template<class RandomAccessIterator, class Compare>
    void bubble_sort(RandomAccessIterator first, RandomAccessIterator last, Compare comp);
}

#endif //ALGORITHMS_AND_DATA_STRUCTURES_BUBBLE_SORT_H
