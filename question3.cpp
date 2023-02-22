//write a program to check whether a character is uppercase , lowercase , special character or numbers
#include <iostream>
using namespace std;
int main ()
{
   char ch ;
   cout<<"enter the character :"<<endl;
   cin>>ch;
   if ( ch >= 'A' && ch<= 'Z' ) {
   cout<<"upper case"<<endl;
   }
   else if ( ch >= 'a' && ch <= 'z'){
    cout<<"lower case"<<endl;
   }
   else if ( ch >= '0' && ch <= '9' ){
    cout<<"numbers"<<endl;
   }
   else {
    cout<<"special characters"<<endl;
   }
    return 0;
}