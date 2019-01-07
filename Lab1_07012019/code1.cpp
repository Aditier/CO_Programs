#include<iostream>
#include<iterator>
#include<algorithm>
#include<stack>
using namespace std;
int i, count1;
void display(stack<int>);
void binary(stack<int>);
int main()
{
    int dec;
    int count;
    stack<int>a1;
    cout<<"Enter the decimal value\n";
    cin>>dec;
    while(dec>0)
    {
        i=dec%2;
        a1.push(i);
        count++;
        dec=dec/2;
    }
    display(a1);
    stack<int>b1;
    cout<<"Enter the binary number:\t";
    for(int i=0; i<10; i++)
    {
        b1.push(i);
        count1++;
    }
    binary(b1);
}
void display(stack<int>a)
{
    while(!a.empty())
    {
        cout<<a.top()<<"\t";
        a.pop();
    }
}
void binary(stack<int>)
{
for(count1=j; count1>0; count--)
{
dec=i*2^(j)
sum=sum+dec;
}
cout<<"The decimal is "<<sum;
}
