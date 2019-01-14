#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
void dectobin();
void bintodec();
int main()
{
int ch;
do
{
cout<<"Enter 1 to convert decimal to binary enter 2 to convert binary to decimal"<<endl;
cin>>ch;
switch(ch)
{
case 1:dectobin();
break;
case 2:bintodec();
break;
case 3:;
break;


}
}while(ch!=3);


}

void dectobin()
{
int n,rem;
stack<int>a;
cout<<"Enter a decimal num"<<endl;
cin>>n;
while(n>0)
{
rem=n%2;
a.push(rem);
n=n/2;

}
while(!a.empty())
{
cout<<a.top();
a.pop();


}

}




void bintodec()
{
int n,rem,sum=0,temp;
int i=0;
cout<<"enter a binary num"<<endl;
cin>>n;
while(n>0)
{
rem=n%10;
sum=sum+rem*(pow(2,i));
i=i+1;
n=n/10;

}
cout<<sum;
}





