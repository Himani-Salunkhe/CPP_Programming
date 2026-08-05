//input : 7891
//output : 4(count digits)

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
    static int  iCount = 0;
   if(iNo != 0)
   {
    
        iCount++;
        iNo = iNo/10;
        CountDigits(iNo);
   }
        return iCount;
    
}
int main()
{
    int iValue = 0,iRet = 0;
    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = CountDigits(iValue);

    cout<<"\n";

    return 0;
}