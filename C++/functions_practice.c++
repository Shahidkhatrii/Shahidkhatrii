#include<iostream>
using namespace std;
//nth term of a given AP-->  
/*int nthterm(int n){
    int ans= (3*n)+7;
    return ans;
}


int main(){
int n;
cin>>n;
cout<<nthterm(n)<<endl;
return 0;
}*
//Finding total set bits in a&b
int setBit(int a,int b){
  int count=0;
while(a!=0){
  if (a&1){
      count++;
  }
  a = a>>1;
  }
while(b!=0){
  if(b&1){
        count++;
    }
  b = b>>1;
}  
return count;
}



int main(){

int a,b; 
cin>>a>>b;

cout<<"The total no. of set bits in a&b is "<<setBit(a,b)<<endl;
 
return 0; 
}*/
//Finding nth term of fibbonacci series//

int febnth(int n){
    int a = 0;
    int b = 1;
 if(n==1){
     return a;
 }
 if(n==2){
     return b;
 }
 int sum;
   for(int i = 1; i<=(n-2);i++){

       sum = a + b ; 
       a = b ;
       b = sum ;
   }
  return sum;
    }

int main(){
    
    int n;

    cout << "Enter the number of term you want to print "<<endl;
    cin>>n;

    int ans = febnth(n);
    
    cout << "The required term is "<<ans<<endl;


    return 0;
}