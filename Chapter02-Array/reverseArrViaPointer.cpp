#include<iostream>

using namespace std;

int fillArr(int [], int);
void showArr(int [], int);
void reverseArr(int *, int *);

int main(){
    int n=5;
    cin >>n;
    int * myArr =new int[n];

    int * pBegin = &myArr[0];
    int * pEnd = &myArr[0] + (n - 1);

    int iDim=fillArr(myArr,n);
    showArr(myArr, iDim);

    reverseArr(pBegin, pEnd);
    showArr(myArr, iDim);

    delete [] myArr;    
    return 0;
};

int fillArr(int arr[], int n){
    int iCount=0;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        if (!cin){
            cin.clear();
            while (cin.get() != '\n'){
                continue;
            }
            break;
        }
        iCount++;
    }
    return iCount;
}

void showArr(int arr[], int n)
{
    for (int i = 0; i < n; i++){
    cout << arr[i] << ' ';
    }
    cout << endl;
}

void reverseArr(int* arrBegin, int * arrEnd){
    int temp;
    while (arrBegin < arrEnd){
        temp = *arrBegin;
        *arrBegin = *arrEnd;
        *arrEnd = temp;
        arrBegin++;
        arrEnd--;
    }    
}
