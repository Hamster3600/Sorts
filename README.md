# 📊 Sorting Algorithms in C++

This project demonstrates the implementation of seven classic sorting algorithms in C++ using a shared `namespace sort` interface.

---

## 📁 Project Structure

```
.
├── bubble-sort/
│   └── bubbleSort.cpp
├── counting-sort/
│   └── countingSort.cpp
├── heap-sort/
│   └── heap-sort.cpp
├── insertion-sort/
│   └── insertionSort.cpp
├── merge-sort/
│   └── mergeSort.cpp
├── quick-sort/
│   └── quickSort.cpp
├── selection-sort/
│   └── selectionSort.cpp
├── namespaceSorts.cpp
├── main.cpp
├── .gitignore
└── README.md
```

- Each sort folder contains a standalone implementation of the algorithm in a `.cpp` file.
- All core implementations are in `namespaceSorts.cpp` inside a `sort` namespace.
- `main.cpp` is an example entry point for testing the sorting algorithms.

---

## 🧠 Implemented Algorithms

| Algorithm        | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| Bubble Sort      | Repeatedly steps through the list, compares adjacent elements and swaps.    |
| Counting Sort    | Counts the number of objects that possess distinct key values.              |
| Heap Sort        | Uses a binary heap data structure to sort elements efficiently.             |
| Insertion Sort   | Builds the sorted array one item at a time.                                 |
| Merge Sort       | Divide-and-conquer recursive sort that splits and merges sorted halves.     |
| Quick Sort       | Picks a pivot and partitions the array around it recursively.               |
| Selection Sort   | Selects the smallest element from the unsorted part and swaps it to front.  |

---

## 🚀 How to Compile & Run

Make sure you're in the root directory and have a C++ compiler like `g++` installed.

### Option 1: Compile and run the main example
```bash
g++ -std=c++17 -o sort main.cpp
./sort
```

### Option 2: Compile and run individual algorithm examples
```bash
# Example for bubble sort
g++ -std=c++17 -o bubble-sort/bubbleSort bubble-sort/bubbleSort.cpp
./bubble-sort/bubbleSort
```

Replace `bubble-sort` with any other algorithm folder name to test that specific implementation.

---

## 📝 Usage

To use any of the sorting algorithms in your own code:

1. Include `namespaceSorts.cpp` in your project
2. Use the functions in the `sort` namespace:
   - `sort::bubble(vector)`
   - `sort::counting(vector)`
   - `sort::heap(vector)`
   - `sort::insertion(vector)`
   - `sort::merge(vector, left, right)`
   - `sort::quick(vector, low, high)`
   - `sort::selection(vector)`
   - `sort::printArray(vector)` - to print the array contents
