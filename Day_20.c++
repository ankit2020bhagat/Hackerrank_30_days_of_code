#include <bits/stdc++.h>
using namespace std;
int Bubble_Sort(int *arr, int size)
{
    int flag = 0, count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                count++;
                flag = 1;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    return count;
}
void Print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size, data;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        arr[i] = data;
    }

    cout<<"Array is sorted in "<<Bubble_Sort(arr, size)<< "swaps."<<"\n";
    Print(arr,size);
    cout<<"First Element:" <<arr[0]<<"\n";
    cout<<"Last Element:" <<arr[size-1]<<"\n";


     
}
