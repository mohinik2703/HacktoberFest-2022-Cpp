// C++ program to implement Linear Search
#include <iostream>
using namespace std;
 

int linearSearch(int arr[],int size ,int element)
{  
    // enter your code here
 for(int i=0;i<size;i++)
 {
  if(arr[i] == element)
  {
   return i;
  }
  return -1;
}
 
//Driver Code
int main()
{   
    int size;
    cin>>size; //size of array
    int arr[size];
    
    for(int i=0;i<size;i++){
       cin>>arr[i]; // elemnents in the array
    }
   
   int element; // element to be searched
    cin>>element;
 
    int result = linearSearch(arr,size,element);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
