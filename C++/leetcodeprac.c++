#include<bits/stdc++.h>
using namespace std;

int main(){
/*the differnce b/w product and sum of digits of a number 
  int n;
  cout <<"Enter a number "<<endl;
  cin>>n;  
    int product = 1, sum = 0;
    while(n!=0){
        //last digit 
        int a;
        a= n%10;
        product =product * a;
        sum     =sum     + a;
        n= n/10;
    }
   int dif = product- sum;
    cout<< dif ;*
    **checking how many 1 in a number when a number in binary form
    int n ;
    cout <<"Enter n "<<endl;
    cin>>n;

    int count=0 ;

    while(n!=0){
        //checking last bit
        if(n&1){
           count++; 
        }
        n=n>>1;
    }
    cout<<count;*
    **reverse integer
   int n;
   cout<<"Enter the number "<<endl;
   cin>>n;
   int digit;
   while (n!=0)
   {
       digit = n%10;
       cout<<digit;
       n=n/10;
   }
    */
   
   /*
   int n;
   cout<<"Enter the number "<<endl;
   cin>>n;
    int sum = 0;
   for(int i = 0;n>0;i++){
       int digit;
       digit = n%2;
       sum = (digit * pow(10,i)) +sum ;
       n=n/2;

   }

cout<<sum;*
 int n; 
 cin>>n;
 int ans = 0;
 while(n!=0){
     int digit;
     digit = n%10;
    if ((ans < INT_MIN/10) || (ans > INT_MAX/10)){
        cout<<"0";
    }
    ans = (ans * 10) + digit ;
    n = n/10;
 }
cout<< ans <<endl;
}* 1's compliment of a number  

int n,m;
cin>>n;
m=n;
if(n==0){
     cout<<"1";
}
else{
int mask = 0;
while (m!=0){
   m = m>>1;
   mask = (mask<<1)|1;
}
int ans = (~n) & mask;
cout <<ans;}

}*
int n; 
cin>>n;

for(int i=0 ;i<=31;i++){
    int ans =pow(2,i);
    if(ans==n){
        cout<<"true";
           }

}
*/
}