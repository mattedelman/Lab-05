#include <iostream>
#include <string>
#include <vector>
#include "StringData.h"

using namespace std;

int linear_search(vector<string> container, string element) {
    for (int i = 0; i < container.size(); i++) {
        if (container[i] == element) {
            return i;
        }
    }
    return -1;
}

int binary_search(vector<string> container, string element) {
    int low = 0;
    int high = container.size() - 1;

    while (low <= high) {
        int middle = (high + low) / 2;
        if (container[middle] == element) {
            return middle;
        }else if (container[middle] < element) {
            low = middle + 1;
        }else if (container[middle] > element) {
            high = middle - 1;
        }
    }

    return -1;
}

int main() {
    vector<string> container = getStringData();

    cout << "not_here\nLinear Search:";
    auto start= std::chrono::system_clock::now();
    cout << "\n   Index: " << linear_search(container, "not_here");
    auto end = std::chrono::system_clock::now();
    auto time_taken = end - start;
    cout << "\n   Time: " << time_taken;
    cout << "\nBinary Search:";
    start = std::chrono::system_clock::now();
    cout << "\n   Index: " << binary_search(container, "not_here");
    end = std::chrono::system_clock::now();
    time_taken = end - start;
    cout << "\n   Time: " << time_taken;

    cout << "\n\nmzzzz\nLinear Search:";
    start= std::chrono::system_clock::now();
    cout << "\n   Index: " << linear_search(container, "mzzzz");
    end = std::chrono::system_clock::now();
    time_taken = end - start;
    cout << "\n   Time: " << time_taken;
    cout << "\nBinary Search:";
    start = std::chrono::system_clock::now();
    cout << "\n   Index: " << binary_search(container, "mzzzz");
    end = std::chrono::system_clock::now();
    time_taken = end - start;
    cout << "\n   Time: " << time_taken;

    cout << "\n\naaaaa\nLinear Search:";
    start= std::chrono::system_clock::now();
    cout << "\n   Index: " << linear_search(container, "aaaaa");
    end = std::chrono::system_clock::now();
    time_taken = end - start;
    cout << "\n   Time: " << time_taken;
    cout << "\nBinary Search:";
    start = std::chrono::system_clock::now();
    cout << "\n   Index: " << binary_search(container, "aaaaa");
    end = std::chrono::system_clock::now();
    time_taken = end - start;
    cout << "\n   Time: " << time_taken;

    cout << endl;
    return 0;
}
