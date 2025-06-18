#include <iostream>
#include <vector>
#include "namespaceSorts.cpp"

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    sort::printArray(arr);
    sort::quick(arr, 0, arr.size() - 1);
    sort::printArray(arr);
    return 0;
}
