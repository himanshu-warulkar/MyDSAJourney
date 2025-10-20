#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int i = 0, j = n - 1;

    while (i < j) {
        if(a[i] < 0 && a[j] < 0) i++;
        else if(a[i] > 0 && a[j] > 0) j--;
        else if(a[i] > 0 && a[j] < 0){
            swap(a[i], a[j]);
            i++;
            j--;
        } 
        else {
            i++;
            j--;
        }

    }

    cout << "The rearranged array is: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}
