#include <iostream>
using namespace std;
void display(int a[]){
    /*int temp = a;
    a = b;
    b = temp;
    return;*/
    for(int i= 0; i<=4; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return;

}

void change(int b[]){
    b[0] = 100;
}

int main(){
    int arr[5] = {1,4,2,7,4};
    display(arr);
    change(arr);
    display(arr);

    return 0;
}

