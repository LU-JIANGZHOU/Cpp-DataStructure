/**
 * @file 02-BigO.cpp
 * @author LU Jiangzhou 
 * @brief {To recall all the C++ programming}
 * @version 0.1
 * @date 2021-12-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
using namespace std;

/// O(1)
void myPrint(int a){
    cout<<a<<endl;
};

/// O(n)
void myPrint(int a[], int iSize){
    for (int i=0; i<iSize; i++) cout<<a[i]<<endl;
};

/// O(n^2)
void myPrint(int *a, int iRow, int iCol){
    for (int i=0; i<iRow; i++) 
        for(int j=0; j<iCol; j++) cout<<*((a+i*iCol)+j)<<endl;
        //for(int j=0; j<iCol; j++) cout<<a[i][j]<<endl;
};

int main(){
/// O(1)
    size_t a=100;
    int b[]{10,20,30};
    int c[][2]={{10,20},{30, 40}};

    myPrint(a);
    myPrint(b,3);
    myPrint((int *)c, 2,2);
    //myPrint(c,2,2);
    return 0;
}