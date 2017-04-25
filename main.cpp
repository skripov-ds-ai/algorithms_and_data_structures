#include <iostream>
#include <vector>
#include <ctime>
#include <functional>
// includes my libraries
#include "algorithms/sortings/bubble_sort/bubble_sort.h"
#include "algorithms/arithmetic/euclidean/euclidean.h"
//

using namespace std;
using sortings::bubble_sort;
using arithmetic::gcd_for_unsigned;
int main() {
    cout << arithmetic::gcd_for_unsigned((unsigned int)23, (unsigned int)43) << endl;
    srand(42);
    vector<unsigned int> a(10, 0);
    for (size_t i = 0; i < a.size(); i++) {
        a[i] = rand() % (i + 37) + 3;
    }
    greater<unsigned int> great;
    bubble_sort(a.begin(), a.end(), great);
    cout << "Sorted vector:\n";
    for (unsigned int elem : a) {
        cout << elem << " ";
    }
    cout << "\n";
}