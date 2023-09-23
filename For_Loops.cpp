#include<iostream>
using namespace std;

int main()
{
    //print a to z
    for(char name='a'; name<='z'; name=name+1)
    {
        cout<<name<<" ";
    }

    //print n decreasing number
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=n; i>=1; i--)
    {
        cout<<i<<" ";
    }

    //print n with 3 no jums
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i=i+3)
    {
        cout<<i<<" ";
    }

    //print table
    int n;
    cout<<"Enter the Table: ";
    cin>>n;
    for(int i=1; i<=10; i++)
    {
        cout<<n<<" * "<<i<<" = " << n*i<<" "<<endl;
    }
    //OR
    for(int i=n; i<=n*10; i=i+n)
    {
        cout<<i<<" ";
    }

    //power program 
    int n,pow,num;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>pow;

    num=n;

    for(int i=1; i<pow; i++)
    {
        num=num*n;
    }
    cout<<num;

    //sum of n natural number
    int n, sum=0;
    cout<<"Enter the Number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i; //sum+=i;
    }
    cout<<sum;
    //OR
    cout<<n*(n+1)/2;

    //factorial 
    int n, fact=1; 
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++) //or you can start i=2
    {
        fact=fact*i; //fact*=i;
    }  
    cout<<fact;

    //prime or not
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n<2)
    {
        cout<<n<<"Not Prime";
        return 0;
    }
    else
    {
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                cout<<n<<"Not Prime";
                return 0;
            }
        }
        cout<<n<<"Prime";
        return 0;
    }
    return 0;

    //Fibonacci series
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int last = 0;
    int prev = 1;
    int curr; 
    cout<<last<<" "<<prev<<" ";
    for(int i=1; i<n-1; i++)
    {
        curr=last+prev;
        cout<<curr<<" ";
        last=prev;
        prev=curr;

    }
    return 0;

    //print numbers from 280 to 250
    for(int i=280; i>=250; i--)
    {
        cout<<i<<" ";
    }

    //print char from A to Z
    for(char ch='A'; ch<='Z'; ch++)
    {
        cout<<ch<<" ";
    }

    //print char from Z to A
    for(char ch='Z'; ch>='A'; ch--)
    {
        cout<<ch<<" ";
    }

    //print 220 to 730 with difference is 7 which follows the A.P
    for(int i=220; i<=730; i+=7)
    {
        cout<<i<<" ";
    }

    //print sum of square of n natural numbers
    int n, sum=0;
    cout<<"Enter a Number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum+=i*i;
    }
    cout<<sum;

    //or

    cout<< [n(n+1)(2n+1)] / 6.

    //print sum of cube of n natural numbers 
    int n, sum=0;
    cout<<"Enter a Number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum+=i*i*i;
    }
    cout<<sum;

    //print nth fibonacci numbers
    int n; 
    int first = 0; 
    int second = 1;
    int curr;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<first<<" "<<second<<" ";
    for(int i=1; i<n-1; i++)
    {
        curr = first + second;
        cout<<curr<<" ";
        first = second;
        second = curr;
    }
    return 0;
}
