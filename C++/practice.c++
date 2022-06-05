#include<iostream>
using namespace std;


  /*  int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    cout<< "printing counting from one to "<<n<<endl;
    for(int i = 1;i<=n/2;i++){
      cout <<2*i<<endl;
    }*
    int n; 
    cout<<"enter the value of n"<<endl;
    cin>>n;
  int sum = 0;
  int a = 0;
  int b = 1;
           
  for (int i=1;i<=(n-2); i++){
   
    sum = a + b; 
    a = b; 
    b = sum;
  }
    cout<<sum<<" ";
}*
for (int i=0 ; i<=15 ; i+=2){ 
  cout << i << " ";
  
  if( i&1){
    continue ;
  }
  i++;
}*
int factorial(int n){
  int fact = 1;
  for(int i=1;i<=n;i++){
    fact = fact * i;
  }
  return fact;
}
int nCr(int n, int r){
  int ans ;
  ans = (factorial(n))/((factorial(r)) * (factorial(n-r)));
  return ans;
}
int main(){
  int n,r;
  cin>>n>>r;
  int answer = nCr(n,r);
  cout <<"The answer is "<<answer<<endl;
  
}*/
int main (){
  int n= 6;
  for(int i = 0 ;i<n; i++){
    for(int j = i+1;j<n; j++){
      for(int k = j+1; k<n; k++){
        cout<<i<<j<<k<<endl;
      }
    }
  }
}