//question 2
#include<iostream> 
using namespace std; 
  
void RightRotate(int a[], int n, int k) 
{
    k = k % n; 
  
    for(int i = 0; i < n; i++) 
    { 
       if(i < k) 
       { 
           cout << a[n + i - k] << " "; 
       } 
       else
       { 
           cout << (a[i - k]) << " "; 
       } 
    } 
    cout << "\n"; 
} 
      
int main() 
{ 
    int Array[] = { 1, 2, 3, 4, 5 }; 
    int N = sizeof(Array) / sizeof(Array[0]); 
    int K ;
    cout<<"Enter the rotation times : - ";
    cin>>K;
      
    RightRotate(Array, N, K); 
} 