# 📊 Sorting Algorithms in C++

This project demonstrates the implementation of six classic sorting algorithms in C++ using a shared `namespace sort` interface.

---

## 📁 Project Structure

'''
.
├── bouble-sort/
├── counting-sort/
├── insertion-sort/
├── merge-sort/
├── quick-sort/
├── selection-sort/
├── namespaceSorts.cpp
├── main.cpp
├── .gitignore
└── README.md
'''

- Each sort folder may contain individual test or usage files.
- All core implementations are in `namespaceSorts.cpp` inside a `sort` namespace.
- `main.cpp` is an example entry point for testing the sorting algorithms.

---

## 🧠 Implemented Algorithms

| Algorithm        | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| Bubble Sort      | Repeatedly steps through the list, compares adjacent elements and swaps.    |
| Counting Sort    | Counts the number of objects that possess distinct key values.              |
| Insertion Sort   | Builds the sorted array one item at a time.                                 |
| Merge Sort       | Divide-and-conquer recursive sort that splits and merges sorted halves.     |
| Quick Sort       | Picks a pivot and partitions the array around it recursively.               |
| Selection Sort   | Selects the smallest element from the unsorted part and swaps it to front.  |

---

## 🚀 How to Compile & Run

Make sure you're in the root directory and have a C++ compiler like `g++` installed.

```bash
g++ -std=c++17 -o sort main.cpp
./sort
