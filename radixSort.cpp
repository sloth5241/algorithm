#include <iostream>
using namespace std;

void print(int *arrRadix) {
    for(int i=1; i<=100; i++) {
        if(0 != arrRadix[i]) {
            int tempCount = arrRadix[i];
            for(int j=0; j<tempCount; j++) {
                cout << i << " "; 
            }
        }
    }
    cout << endl;
}


int radixSort(int *arr, const int count) {
    //准备桶
    int arrRadix[100] = {};
    for(int i=1; i<=100; i++) {
       arrRadix[i] = 0; 
    }

    //计数
    for(int i=1; i<=count; i++) {
        int temp = arr[i]; 
        arrRadix[temp]+=1;
    }

    //打印
    print(arrRadix);
}

int main() {
    int tempNumber;    //输入临时数字
    const int n=5;    //未排序数组长度
    int arrOrigin[n]={};    //未排序原始数组
    //录入原始数据
    cout << "please input 5 numbers:" << endl;
    for(int i=1; i<=5; i++) {
        cin >> tempNumber;   
        arrOrigin[i] = tempNumber;
    }
    //通排序
    radixSort(arrOrigin, n);
    return 0;
}
