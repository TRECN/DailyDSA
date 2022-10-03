#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {

   int N,D;

   public:

   // Complete the class

   Fraction(int n,int d){

       N=n;

       D=d;

   }

   void add(Fraction a2){

       N=(N*a2.D)+(a2.N*D);

       D=(D*a2.D);

       int gcd=__gcd(N,D);

       N=N/gcd;

       D=D/gcd;    

   }

   void mult(Fraction a2){

       D=D*a2.D;

       N=(N*(a2.N));

       int gcd=__gcd(N,D);

       N/=gcd;

       D/=gcd;        

   }

   void print(){

       cout<<N<<"/"<<D<<endl;

   }

};

int main() {//Write your code here

   int n1,d1;

   cin>>n1>>d1;

   Fraction a1(n1,d1);

   int choice,t,i;

   cin>>t;  

   for(i=0;i<t;i++){

       cin>>choice;

       int n2,d2;

    cin>>n2>>d2;

       Fraction a2(n2,d2);

    if(choice==1){

           a1.add(a2);

           a1.print();

       }

       if(choice==2){

           a1.mult(a2);

           a1.print();

       }

   }

   return 0;

}