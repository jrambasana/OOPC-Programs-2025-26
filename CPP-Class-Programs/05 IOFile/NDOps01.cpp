//Write a program in C++ to implement new and delete operator for arrays. 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr = new int[n]; //dynamic array allocation using new operator
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements in the array are: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr; //deallocating memory using delete operator
    // cout<<"deletion: ";
    // for(int i=0; i<n; i++)
    // {
    //     delete &arr[i]; //deleting each element of the array
    //     cout<<arr[i]<<" ";
    // }    
    return 0;
}