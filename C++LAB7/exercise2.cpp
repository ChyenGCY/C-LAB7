//
//  exercise2.cpp
//  C++LAB7
//
//  Created by CHYEN on 2022/4/17.
//

#include <iostream>

using namespace std;

template<typename T>
T max5(T arr[5]);

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    double arr2[] = {1.1, 2.0, 3.0, 4.0, 5.5};
    cout<<"Max int = "<< max5(arr1)<<endl;
    cout<<"Max double = "<<max5(arr2)<<endl;
}

template<typename T>
T max5(T arr[5]){
    T max = arr[0];
    for (int i = 0; i<5; i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    return max;
}
