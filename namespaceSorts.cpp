#include <iostream>
#include <vector>

namespace{
    //#######################################################
    //                  EXTRA FUNCTIONS

    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void printArrayImpl(const std::vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
    //#######################################################

    //#######################################################
    //                      BUBBLE

    void bubbleSortImpl(std::vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                if(arr[j] > arr[j+1]) {
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
            }
        }
    }
    //#######################################################


    //#######################################################
    //                  COUNTING

    int Min(const std::vector<int>& arr){
        int minVal = arr[0];
        for(int i = 0; i < arr.size(); i ++){
            if(arr[i] < minVal){
                minVal = arr[i];
            }
        }
        return minVal;
    }

    int Max(const std::vector<int>& arr){
        int maxVal = arr[0];
        for(int i = 0; i < arr.size(); i ++){
            if(arr[i] > maxVal){
                maxVal = arr[i];
            }
        }
        return maxVal;
    }

    void countingSortImpl(std::vector<int>& arr){
        if(arr.empty()) return;

        int minVal = Min(arr);
        int maxVal = Max(arr);
        int range = maxVal - minVal + 1;

        std::vector<int> count(range, 0);

        for(int i = 0; i < arr.size(); i++){
            count[arr[i] - minVal]++;
        }

        int index = 0;
        for(int i = 0; i < range; ++i){
            while(count[i]-- > 0){
                arr[index++] = i + minVal;  
            }
        }
    }
    //#######################################################


    //#######################################################
    //                  INSERTION

    void insertionSortImpl(std::vector<int>& arr){
        int size = arr.size();
        for(int i = 1; i < size; ++i){
            int key = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
    //#######################################################


    //#######################################################
    //                      MERGE

    void merge(std::vector<int>& arr, int left, int mid, int right){
        int n1 = mid - left + 1;
        int n2 = right - mid;

        std::vector<int> L(n1), R(n2);

        for(int i = 0; i < n1; i++){
            L[i] = arr[left + i];
        }
        for(int i = 0; i < n2; i++){
            R[i] = arr[mid + 1 + i];
        }

        int i = 0, j = 0, k = left;
        while(i < n1 && j < n2){
            if(L[i] < R[j]){
                arr[k++] = L[i++];
            }   else{
                arr[k++] = R[j++];
            }
        }

        while(i < n1){
            arr[k++] = L[i++];
        }
        while(j < n2){
            arr[k++] = R[j++];
        }
    }

    void mergeSortImpl(std::vector<int>& arr, int left, int right){
        if(left < right){
            int mid = left + (right - left) / 2;

            mergeSortImpl(arr, left, mid);
            mergeSortImpl(arr, mid + 1, right);

            merge(arr, left, mid, right);
        }
    }
    //#######################################################


    //#######################################################
    //                    QUICK

    int partition(std::vector<int>& arr, int low, int high){
        int pivot = arr[high];
        int i = (low - 1);

        for(int j = low; j < high; j++){
            if(arr[j] <= pivot){
                i++;    
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return(i + 1);
    }

    void quickSortImpl(std::vector<int>& arr, int low, int high){
        if(low < high){
            int pi = partition(arr, low, high);
            quickSortImpl(arr, low, pi - 1);
            quickSortImpl(arr, pi + 1, high);
        }
    }
    //#######################################################


    //#######################################################
    //                     SELECTION

    void selectionSortImpl(std::vector<int>& arr) {
        int size = arr.size();
        for (int i = 0; i < size - 1; i++) {
            int smallestElement = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[smallestElement]) {
                    smallestElement = j;
                }
            }
            if (smallestElement != i) {
                swap(arr[i], arr[smallestElement]);
            }
        }
    }
    //#######################################################
}

namespace sort{
    void bubble(std::vector<int>& arr){
        bubbleSortImpl(arr);
    }

    void counting(std::vector<int>& arr){
        countingSortImpl(arr);
    }
    
    void insertion(std::vector<int>& arr){
        insertionSortImpl(arr);
    }

    void merge(std::vector<int>& arr, int left, int right){// inputs vector, first element and last element
        mergeSortImpl(arr, left, right); 
    }

    void quick(std::vector<int>& arr, int low, int high){// inputs vector, first element and last element
        quickSortImpl(arr, low, high);
    }

    void selection(std::vector<int>& arr){
        selectionSortImpl(arr);
    }

    void printArray(const std::vector<int>& arr){
        printArrayImpl(arr);
    }
}