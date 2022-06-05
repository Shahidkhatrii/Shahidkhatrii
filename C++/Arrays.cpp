#include<bits/stdc++.h>
using namespace std;

/*int main(){
  //Declare
    int arr[300];
  //Putting values in each element of Array
   for (int i = 0;i<300;i++){

        arr[i]=i+1;
        cout<<arr[i]<<endl;

    }

    int arrSize = sizeof(arr)/sizeof(int);
    cout << " size of arr is "<<arrSize ;
    return 0;
}*
int getmin(int num[],int n){

    int min = INT_MAX;

    for(int i = 0;i<n ; i++ ){
      if(num[i] < min){
        min = num[i];
      }
    }
    return min;
}
int getmax(int num[],int n){

int max = INT_MIN;

  for(int i = 0; i<n;i++){
   if(num[i] > max){
     max = num[i];
   }
  }
  return max;
}
int main(){

  int size;
  cin>>size;

  int num[100];

  for(int i = 0; i<size; i++){
    cin>>num[i];

  }

  cout<<" Maximum value is "<<getmax(num,size)<<endl;
  cout<<" Minimum value is "<<getmin(num,size)<<endl;

  return 0;
}*
int sumofarray(int arr[],int n){
   int sum = 0;
    for (int i = 0; i<n ;i++){

      sum = sum + arr[i];

    }
     return sum;
}

int main(){

    int size;
    cin>>size;

    int arr[100];

    for(int i = 0; i<size; i++){

      cin>>arr[i];
    }
  
  int ans = sumofarray(arr,size);
  
  cout<<"The sum of array is "<<ans<<endl;

  return 0;
}
*
//****LENEAR SEARCH******
bool iskeypresent(int arr[],int n,int key){

    for(int i = 0;i<n;i++){
      if(arr[i]==key){
        return 1;
      }
    }
      return 0;
}
int main(){
  int arr[10] = {3,5,-7,8,98,76,5,4,6,7};
  
  int key ;
  cout <<"Enter the number you want to find "<<endl;
  cin>>key;

  bool found = iskeypresent(arr,10,key);

  if(found){
    cout<<"The key is present "<<endl;
  }
  else{
    cout<< "The key is absent "<<endl;

  }

return 0;

)*
//***REVERSE AN ARRAY by c language's approach***
void reverse(int arr[],int n){
  int temp;
  for(int i =0;i<n/2;i++){
    //arr[i]-->arr[n-i-1]
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
  }
  for (int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}

int main (){

  int arr[5];
  for (int i = 0;i<5;i++){
    cin>>arr[i];
  }

  reverse(arr,5);

}*
//***REVERSE AN ARRAY BY SWAP FUNCTION***
void reverse(int arr[],int n){
  int start = 0;
  int end = n-1;

  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
void printarray(int arr[],int n){

  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){

  int arr[6]={8,0,3,5,27,65};
  int brr[5]={7,6,5,4,3};

  reverse(arr,6);
  reverse(brr,5);

  printarray(arr,6);
  printarray(brr,5);

  return 0;
}*
//***ALTERNATE SWAP IN ARRAY***
void alternateswap(int arr[],int n){

   for ( int i = 0; i<n-1; i=i+2){

     swap(arr[i],arr[i+1]);
   } 
}
void printarray(int arr[],int n){
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){

  int arr[6] = {3,5,6,9,8,6};

  alternateswap(arr,6);

  printarray(arr,6);

  return 0;
}***INTERSECTION OF TWO ARRAY***
void interic(int arr[],int a,int brr[],int b){
  for (int i = 0; i<a; i++){
     for(int j =0; j<b; j++){
       if(arr[i]==brr[j]){
         cout<<arr[i]<<" ";
         brr[j]= INT_MIN;//is no. ko hum min. value isliye de rhe h kyoki ye aage kisi or element se equal na ho pae//
         break;
         }
       }
    }
  }

int main(){

  int arr[6]={4,6,7,22,7,23};
  int brr[6]={22,22,22,22,7,2};
  
  interic(arr,6,brr,6);

  return 0;
}*
//***find duplicate in array***
int main (){
  int arr[7]={1,2,3,4,6,5,1};

  int ans = 0;

  for (int i = 0 ; i<7; i++){

      ans = ans^arr[i];

  }
  cout<<ans<<endl;
  
  for(int i = 1; i<7; i++ ) {
  ans = ans^i;
  }
 cout <<ans<<endl;

 return 0;
 
