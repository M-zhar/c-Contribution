#ifndef VECTOR_UTILS_H
#define VECTOR_UTILS_H

#include <vector>

// Function to count occurrences of an element in a vector
template <typename T>
size_t count_element(const std::vector<T>& vec, const T& element) {
    size_t count = 0;
    for (const auto& item : vec) {
        if (item == element) {
            ++count;
        }
    }
    return count;
}

#endif // VECTOR_UTILS_H
