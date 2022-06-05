

 /* int a= 143;
  cout <<" the value of a is\n" << a <<endl;
  int size = sizeof(a);
  cout<< "the size of a is : "<< sizeof(a) <<endl;
  

 int a=90,b=78;
 
 
 if(a>b){
   cout<<"answer is A"<<endl;
 }
 if (b>a){
   cout<<"answer is B"<<endl;
 }
}

 int a,b;
 //cin>>a>>b;  
  a = cin.get();
 b = cin.get();


 // cout<<"the value of A and B is "<<a <<",89 "<<b <<endl;
  cout<< "the value of a and b is "<< a <<endl;
  
  
  int a ; 
  cout<<"Enter the value of a "<<endl;
  cin>>a;
  if(a>0){
  cout<<"the number is positive "<<endl;

  }


else if (a<0){
  cout<<"the number is negative "<<endl;
  }
else
{
  cout <<"the number is zero"<<endl;
}

  }
*
char c;
cout << "enter a value "<<endl;
cin >>c;
 
 if('0'<=c && c<='9'){
  cout <<"This is number "<<endl;
 }
 else if ('A'<=c && c<='Z'){
  cout <<"This is upper case letters "<<endl;

 }
 else if('a'<=c && c<='z')
 {
   cout <<"This is lower case letters "<<endl;
    }
}
*
int a =24;

if (a >20) {
  cout<<"LOVE";

}
else if (a == 24){
  cout <<"Lovely";
}
else {
  cout <<"shahid";
}
cout<<a;
}*
int a = 2;
 int b = a+1;
 if ((a=3)==b) //false statement//
 {
   cout <<a;
 }
 else 
 {
   cout <<a+1;
 }
}
LOOPS:-
*
int n;
cout <<"Enter nth term "<<endl;
cin>>n;
int i=1;
while(i<=n){
  cout<<i<<endl;
  i++;
}
int n, sum=0;
cout <<"Enter nth term "<<endl;
cin>>n;
int i=1;
while (i<=n){
  sum=sum+i;
  i++;
}
cout<<"the sum is:"<<sum;
}*
int n,sum =0;
cin>>n;
int i=2;
while (i<=n){
    
   sum = sum + i;
   i = i + 2;
}
cout << sum ;*
  int f,c; 
  cin>>f;
  c=(f-32)*5/9;
  cout << c;
*
 int n;
 cin>> n;
 int i=2;
 while(i<n){
   if(n%i==0){
 
   cout <<"not prime for "<<i<<endl;
  
 }
 else if (n%i!=0){
   cout <<"prime for "<<i<<endl;

 }
   i++;
 }
 *Pettern problems
  int n;
  cin>>n;
  int i=1;
  while(i<=n){

      int j=1;
      while (j<=n){
        cout <<i<<" ";
       j++;
      }
      cout<<endl;
    i++;

  }
*program for the pattern 
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
int n;
cin>>n;

int i = 1;
while(i<=n){
  int j=1;
  while(j<=n){
    cout <<j<<" ";
    j++;
  }
  cout <<endl;
  i++;

}*
  int n;
  cin>>n;

  int i = 1 ;
  int count = 1;
  while (i<=n){
    int j=1;
    while (j<=n){

      cout <<count<<" ";
      count++;
      j++;
    }
    cout <<endl;
    i++;



  }*
  int n;
cin>>n;

int i = 1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout <<"* ";
    j++;
  }
  cout <<endl;
  i++;
}*pattern
  1
  2 2
  3 3 3 
  4 4 4 4 
------------:
 int n;
cin>>n;

int i = 1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout <<i<<" ";
    j++;
  }
  cout <<endl;
  i++;
}*pattern
1
2 3
4 5 6
7 8 9 10
int n;
cin>>n;
int count = 1;
int i = 1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout <<count<<" ";
    count++;
    j++;
  }
  cout <<endl;
  i++;
}*
int n;
cin>>n;

int i = 1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout <<i+j-1<<" ";
    j++;
  }
  cout <<endl;
  i++;
}*
int n;
cin>>n;

int i = 1;
while(i<=n){
  int j=1;
  while(j<=i){
    cout <<i-j+1<<" ";
    j++;
  }
  cout <<endl;
  i++;

}*pattern
  A A A A 
  B B B B 
  C C C C
  D D D D 
int n;
cin>>n;
int i = 1;
while(i<=n){
  int j=1;
  while(j<=n){
   char ch='A'+i-1;
    cout <<ch<<" ";
    j++;
  }
  cout <<endl;
  i++;
}*
int n;
cin>>n;
int i = 1;
while(i<=n){
  int j=1;
  while(j<=n){
  char ch='A'+j-1;
  char fn=ch+i-1;
    cout <<fn<<" ";
    j++;
  }
  cout <<endl;
  i++;
}*
int n;
cin>>n;
int i = 1;
while(i<=n){
  int j=1;
  while (j<=i){
    char ch ='A'+i-1;
    cout <<ch<<" ";
    j++;
  }
  cout <<endl;
  */

#include<iostream>    
using namespace std;
int main(){
/*
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while (j<=i){
      char ch='M'+n-i-j+2;
      cout<<ch<<" ";
      j++;

    }
    cout<<endl;
    i++;
  }*pattern:-
        *
      * *
    * * *
  * * * * 
  int main(){
int n; 
cin>>n;
int i=1; 
while(i<=n){
int j=(n-i);
while(j){
  cout<<" ";
  
  j--;
  }
  int k=1;
  while(k<=i){
    cout<<"*";
    k++;
  
}
  cout<<endl;
  i++;
}*pattern :-
  * * * *
    * * *
      * *
        *
  int main(){
int n; 
cin>>n;
int i=1; 
while(i<=n){

int j=1;
while(j<=(i-1)){
  cout<<" ";
  
  j++;
  }
  int k=1;
  while(k<=n-i+1){
    cout<<"*";
    k++;
  
}
  cout<<endl;
  i++;

  }*pattern:-
  1 1 1 1 
    2 2 2 
      2 2
        2 
*
int n;
cin>>n;

int i=1;

while(i<=n){
  int space=1;
  while(space<=(i-1)){
    cout<<" ";
    space++;
  }
  int j=1;
  while(j<=n-i+1){
    cout<<i;
    j++;
  }
  cout<<endl;
  i++;
}* pattern:-
  1 1 1 1
   2 2 2
    3 3
     4 
      *
  int n;
cin>>n;

int i=1;

while(i<=n){
  int space=1;
  while(space<=(i-1)){
    cout<<" ";
    space++;
  }
  int j=1;
  while(j<=n-i+1){
    cout<<i<<" ";
    j++;
  }
  cout<<endl;
  i++;    
}*Pattern:-*
   1
  121
 12321
1234321
int n;
cin>>n;

int i=1;

while(i<=n){
  int space=1;
  while(space<=n-i+1){
    cout<<" ";
    space++;
  }
  int j=1;
  while(j<=i){
    cout<<j;
    j++;
    

  }
  int start= i-1;

  while(start){
    
    cout<<start;
    start--;
    
  }
  cout<<endl;
  i++;    
}*
int n;
cin>>n;
int i=1;
while(i<=n){
  //firt triangle
  int j=1;
  while(j<=n-i+1){
    cout<<j;
    j++;
  }
  //second tringle
  int k=1;
   while(k<=(2*i)-2){
     cout <<"*";
     k++;
   }
    //third tringle
    int l=1;
    while(l<=n-i+1){
      
      cout<<n-l-i+2;
      
      l++;
    }
    cout<<endl;
    i++;
}* Switch statement*
int num;
num = 2;
cout <<endl;

switch(num){
  case 2: cout <<"first"<<endl;
          break;
  case 1: cout <<"second"<<endl;
          break;
  default: cout <<"default"<<endl;

}
cout <<endl;
*Calculater using switch*
int a,b; 
char opn;
cout <<"Enter the value of a "<<endl;
cin>>a;
cout <<"Enter operation"<<endl;
cin>>opn;
cout <<"Enter the value of b "<<endl;
cin>>b;

cout<<"The answer is ";
switch(opn){

  case '+':cout<<(a+b); 
          break;
  case '-':cout<<(a-b);
          break;
  case '*':cout<<(a*b);
          break;
  case '/':cout<<(a/b);
          break;        
  default : cout <<"Please enter a valid operation "<<endl;
}*
****total amount in notes*****
int n; 
cout <<"Enter the amount in Rs."<<endl;
cin>>n;
switch(1){

  case 1:if((n/100)!=0){
         cout <<"It requires "<<n/100<<" 100Rs. bill"<<endl;
          }
          n=n%100;
  case 2:if((n/50)!=0){
         cout <<"It requires "<<n/50<<" 50Rs. bill"<<endl;
          }
          n=n%50;
  case 3:if((n/20)!=0){
         cout <<"It requires "<<n/20<<" 20Rs. bill"<<endl;
           }
          n=n%20;
  case 4:if((n/1)!=0){ cout <<"It requires "<<n/1<<" 1Rs. bill"<<endl;
                      }
}
*/


}