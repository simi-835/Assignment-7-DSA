//Assignment: 7 Question 2:
//Name:Prabhkirat Kaur ; 1024240024 

#include <iostream>
using namespace std;

void improvedSelectionSort(int arr[], int n) {
    int left = 0;          
    int right = n - 1;      

    while (left < right) {
        int minIndex = left;
        int maxIndex = right;
        if (arr[minIndex] > arr[maxIndex])
            swap(arr[minIndex], arr[maxIndex]);
        for (int i = left + 1; i < right; i++) {
            if (arr[i] < arr[minIndex])
                minIndex = i;
            else if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }
        swap(arr[left], arr[minIndex]);
        if (maxIndex == left)
            maxIndex = minIndex;
        swap(arr[right], arr[maxIndex]);
        left++;
        right--;
    }
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    improvedSelectionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
