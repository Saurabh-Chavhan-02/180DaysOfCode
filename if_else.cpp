#include <iostream>
using namespace std;

int main()
{
    int package;
    cin>>package;

    if(package>10)
    {
        cout<<"Accepted";
    }
    else
    {
        cout<<"Rejected";
    }

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks > 33)
        cout << "Pass";
    else
        cout << "Fail";

    int a, b;
    cout<<"Enter your first Number: ";
    cin>>a;
    cout<<"Enter your second Number: ";
    cin>>b;

    if(a>b)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    int number;
    cout<<"Enter your first Number: ";
    cin>>number;

    if(number%2==0) // or if(number%2==1) print Odd else Print Even
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }

    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age>18)
    {
        cout<<"Adult";
    }
    else
    {
        cout<<"Teenager";
    }

    int num;
    cout<<"Enter a Number: ";
    cin>>num;

    if(num>0)
    cout<<"Positive";
    else if(num==0)
    cout<<"Zero";
    else
    cout<<"Negative";

    char c = 'k';

    if(c == 'a' && c ==  'e' && c ==  'i' && c ==  'o' && c ==  'u')
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"consonant";
    }

    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    if(n==1)
    {
        cout<<"Mon";
    }
    else if(n==2)
    {
        cout<<"Tue";
    }
    else if(n==3)
    {
        cout<<"Wed";
    }
    else if(n==4)
    {
        cout<<"Thu";
    }
    else if(n==5)
    {
        cout<<"Fri";
    }
    else if(n==6)
    {
        cout<<"Sat";
    }
    else  if(n==7)
    {
        cout<<"Sun";
    }
    else{
        cout<<"Enter Valid day";
    }

    int count=1;
    while(count<=100)
    {
        cout<<"Coder Army"<<endl;
        count=count+1;
    }

    for(int i=1; i<=10; i=i+1)
    {
        cout<< i*i<<endl;
    }

    for(int count = 1; count>0; count = count +1) 
    {
        cout<<"Coder Army\n";
    }

    for(int i=10; i<30; i++) 
    {
        cout<<"hello\n";
    }

    //print n natural numbers
    int n;
    cout<<"Enter the number: "; 
    cin>>n;
    
    for(int count=1; count<=n; count = count +1)
    {
        cout<<count<<" Square is: "<<count*count<<endl;
    }

    //print n Even numbers
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    
    for(int i=1; i<=n; i=i+1)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }

    //print n Odd numbers
    int n; 
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=1; i<=n; i++) 
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
    //1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49India will win the World Cup 2023

    //print India will win the World Cup 2023 for 20 times
    for(int i=1; i<=20; i++) 
    {
        cout<<"India will win the World Cup 2023"<<endl;
    }

    //print all numbers from 1 to n which is divisible by 4
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    for(int i=1; i<=n; i++) 
    {
        if(i%4==0)
        {
            cout<<i<<" ";
        }
    }


    //Month Program
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    if(n==1)
    cout<<"January";
    else if(n==2)
    cout<<"February";
    else if(n==3)
    cout<<"March";
    else if(n==4)
    cout<<"April";
    else if(n==5)
    cout<<"May";
    else if(n==6)
    cout<<"June";
    else if(n==7)
    cout<<"July";
    else if(n==8)
    cout<<"August";
    else if(n==9)
    cout<<"September";
    else if(n==10)
    cout<<"October";
    else if(n==11)
    cout<<"November";
    else if(n==12)
    cout<<"December";
    else
    cout<<"Enter Invalid Month";


    //print if you are eligible for ticket discount or not 
    int n;
    cout<<"Enter your Age: ";
    cin>>n;

    if(n<12 || n>65)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}           



