#include <iostream>
#include <algorithm> 
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return -1; 
}
int main() {
    int arr[] = {10, 3, 5, 8, 7, 2, 6, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target = 5;
    
    std::sort(arr, arr + size);
    
    int index = binarySearch(arr, size, target);
    
    if (index != -1) {
        std::cout << "Element found at index: " << index << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    return 0;
}
