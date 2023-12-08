#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter any character to check : ";
cin>>ch;
if(ch>='A'&&ch<='Z')
{
cout<<"\n The Entered Character "<<ch<<" is an UPPERCASE character.\n";
}
else if(ch>=48&&ch<=57)
{
cout<<"\n The Entered Character "<<ch<<" is a DIGIT.\n";
}
else if(ch>=97&&ch<=122)
{
cout<<"\n The Entered Character "<<ch<<" is a LOWERCASE character.\n";
}
return 0;
}