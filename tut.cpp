#include<iostream>
using namespace std;
int main()
{
int digit,originalCode,code,temp,digitCount=0;
cout<<"Enter the number you want to switch in alphas:";
cin>>code;
cout<<"\nThe entered number is:"<<code<<endl; 
originalCode=code;
int divisor=1;


while(code/divisor>=10)
{
   divisor=divisor*10;
}
while(divisor>0)
{
    digit=code/divisor;
    if (digitCount > 0)
{
    cout << " ";
}
   
    switch(digit)
    {
        case 0:
        cout <<"Zero";
        break;
        case 1:
        cout <<"One";
        break;
        case 2:
        cout <<"Two";
        break;
        case 3:
        cout <<"Three";
        break;
        case 4:
        cout <<"Four";
        break;
        case 5:
        cout <<"Five";
        break;
        case 6:
        cout <<"Six";
        break;
        case 7:
        cout <<"Seven";
        break;
        case 8:
        cout <<"Eight";
        break;
        case 9:
        cout <<"nine";
        break;
        default:
        cout <<"Invalid input";
    }
    code=code%divisor;
    divisor=divisor/10;
    
    digitCount++;
}
cout<<"The original code is:"<<originalCode<<endl;
cout<<"The number of digits said were:"<<digitCount;
return 0;
}
