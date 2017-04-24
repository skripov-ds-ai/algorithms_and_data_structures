#include <iostream>
#include <vector>
#include <ctime>
// includes my libraries
#include "algorithms/sortings/bubble_sort/bubble_sort.h"
//

using namespace std;

int main() {
    srand(42);
    vector<unsigned int> a(10, 0);
    for (size_t i = 0; i < a.size(); i++) {
        a[i] = rand() % (i + 37) + 3;
    }
    sortings::bubble_sort(a.begin(), a.end());
    cout << "Sorted vector:\n";
    for (unsigned int elem : a) {
        cout << elem << " ";
    }
    cout << "\n";
}