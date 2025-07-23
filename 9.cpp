#include<iostream>
using namespace std;


 void shot(int arr[],int n){
      int temp;
       for(int pass=0; pass<n-1;pass++){
              for (int j = 0; j < n - 1 - pass; j++) {
                   if (arr[j] > arr[j + 1]) {
                     temp = arr[j];
                      arr[j] = arr[j + 1];
                arr[j + 1] = temp;
               }
            }
       }
 };


int main()
{
      
      int arr[] = {22, 41, 11, 17, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    shot(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
return 0;
}