//input : 7891
//output : 4(count digits)

#include<iostream>
using namespace std;

int DisplayDigits(int iNo)
{
    static int  iCount = 0;
   if(iNo != 0)
   {    
        DisplayDigits(iNo/10);
        cout<<iNo<<"\n";
   }
      
    
}
int main()
{
    int iValue = 0;
    cout<<"Enter number : \n";
    cin>>iValue;

   DisplayDigits(iValue);

    return 0;
}