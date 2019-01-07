#include<iostream>
#include<iterator>
#include<algorithm>
#include<stack>
using namespace std;
int i, count1, k;
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
    cout<<"\nEnter the binary number:\t";
    for(int i=0; i<3; i++)
    {
        cin>>k;
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
    int j, sum, dec;
    for(int i=count1; i>0; i--)
    {
        dec=2^(i);
        sum=sum+dec;
    }
    cout<<"The decimal is "<<sum;
}
