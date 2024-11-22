#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted arrays
vector<int> merge(const vector<int>& arr1, const vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m + n); // Resultant merged array
    int i = 0, j = 0, k = 0;
    
    // Merge both arrays until one of them runs out
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            res[k++] = arr1[i++];
        } else {
            res[k++] = arr2[j++];
        }
    }
    
    // If arr1 still has remaining elements
    while (i < n) {
        res[k++] = arr1[i++];
    }
    
    // If arr2 still has remaining elements
    while (j < m) {
        res[k++] = arr2[j++];
    }
    
    return res; // Return the merged array
}

int main() {
    // Input size and elements of the first array
    int n1;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input size and elements of the second array
    int n2;
    cout << "Enter the size of the second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Print the first array
    cout << "The first array is: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Print the second array
    cout << "The second array is: ";
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Merge the two arrays
    vector<int> v = merge(arr1, arr2);

    // Print the merged array
    cout << "The merged array is: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
