//conversion
#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
void btd()
{
    long long int bin,dec=0,temp,i=-1;
    SetConsoleTextAttribute(h,10);
    cout<<"\nINPUT: Enter a binary Number=";
    cin>>bin;
    temp=bin;
    while(bin>0)
    {
        i++;
        dec+=bin%10*pow(2,i);
        bin/=10;
    }
    cout<<"OUTPUT: Given Binary ("<<temp<<") to decimal ("<<dec<<") coverted successfully!!\n\n";
    SetConsoleTextAttribute(h,7);
    cout<<">>Select another option from menu:";
}

void bto()
{
    long long int bin,dec=0,oct=0,temp,i=-1;
    SetConsoleTextAttribute(h,11);
    cout<<"\nINPUT: Enter a binary Number=";
    cin>>bin;
    temp=bin;
    while(bin>0)
    {
        i++;
        dec+=bin%10*pow(2,i);
        bin/=10;
    }
    i=1;
    while(dec>0)
    {
        oct+=dec%8*i;
        i*=10;
        dec/=8;
    }
    cout<<"OUTPUT: Given Binary ("<<temp<<") to octal ("<<oct<<") coverted successfully!!\n\n";
    SetConsoleTextAttribute(h,7);
    cout<<">>Select another option from menu:";
}
void bth()
{
    long long int bin,dec=0,i=-1,j,rem,temp;
    char hex[20];
    SetConsoleTextAttribute(h,12);
    cout<<"\nINPUT: Enter a binary Number=";
    cin>>bin;
    temp=bin;
    while(bin>0)
    {
        i++;
        dec+=bin%10*pow(2,i);
        bin/=10;
    }
    i=0;
    while(dec>0)
    {
        rem=dec%16;
        if(rem<10)
        hex[i++]=rem+48;
        else
        hex[i++]=rem+55;
        dec/=16;
    }
    cout<<"Given Binary ("<<temp<<") to Hexadecimal (";
    for(j=i-1;j>=0;j--)
    {
        cout<<hex[j];
    }
    cout<<") coverted successfully!!\n\n";
    SetConsoleTextAttribute(h,7);
    cout<<">>Select another option from menu:";
}
void dtb()
{
    long long int dec,bin=0,temp,i=1;
    SetConsoleTextAttribute(h,13);
    cout<<"\nINPUT: Enter a Decimal Number=";
    cin>>dec;
    temp=dec;
    while(dec>0)
    {
        bin+=dec%2*i;
        i*=10;
        dec/=2;
    }
    cout<<"OUTPUT: Given Decimal ("<<temp<<") to Binary ("<<bin<<") coverted successfully!!\n\n";
    SetConsoleTextAttribute(h,7);
    cout<<">>Select another option from menu:";
}
void dto()
{
    int dec,oct=0,temp,i=1;
    SetConsoleTextAttribute(h,14);
    cout<<"\nINPUT: Enter a Decimal Number=";
    cin>>dec;
    temp=dec;
    while(dec>0)
    {
        oct+=dec%8*i;
        i*=10;
        dec/=8;
    }
    cout<<"OUTPUT: Given Decimal ("<<temp<<") to Octal ("<<oct<<") coverted successfully!!\n\n";
    SetConsoleTextAttribute(h,7);
    cout<<">>Select another option from menu:";
}
void dth()
{
    int dec,temp,i=0,j,rem;
    char hex[20];
    SetConsoleTextAttribute(h,10);
    cout<<"\nINPUT: Enter a Decimal Number=";
    cin>>dec;
    temp=dec;
    while(dec>0)
    {
        rem=dec%16;
        rem<10? hex[i++]=rem+48:hex[i++]=rem+55;
        dec/=16;
    }
    cout<<"Given Decimal ("<<temp<<") to Hexadecimal (";
    for(j=i-1;j>=0;j--)
    {
        cout<<hex[j];
    }
    cout<<") coverted successfully!!\n\n";
    SetConsoleTextAttribute(h,7);
    cout<<">>Select another option from menu:";
}
void otb()
{
    long long int oct,dec=0,bin=0,rem,temp,i=-1;
    SetConsoleTextAttribute(h,11);
    cout<<"\nINPUT: Enter a Octal Number=";
    cin>>oct;
    temp=oct;
    // Octal to Decimal
    while(oct>0)
    {
        i++;
        rem=oct%10;
        dec+=rem*pow(8,i);
        oct/=10;
    }
    // Decimal to Binary
    i=1;
    while(dec>0)
    {
        rem=dec%2;
        bin+=rem*i;
        i*=10;
        dec/=2;
    }
    cout<<"OUTPUT: Given Octal ("<<temp<<") to Binary ("<<bin<<") coverted successfully!!\n\n";
    SetConsoleTextAttribute(h,7);
    cout<<">>Select another option from menu:";
}
void otd()
{
    int oct,dec=0,rem,temp,i=-1;
    SetConsoleTextAttribute(h,12);
    cout<<"\nINPUT: Enter a Octal Number=";
    cin>>oct;
    temp=oct;
    // Octal to Decimal
    while(oct>0)
    {
        i++;
        rem=oct%10;
        dec+=rem*pow(8,i);
        oct/=10;
    }
    cout<<"OUTPUT: Given Octal ("<<temp<<") to Decimal ("<<dec<<") coverted successfully!!\n\n";
    SetConsoleTextAttribute(h,7);
    cout<<">>Select another option from menu:";
}
void oth()
{
    int oct,dec=0,rem,i=-1,j,temp;
    char hex[20];
    SetConsoleTextAttribute(h,13);
    cout<<"\nINPUT: Enter a Octal Number=";
    cin>>oct;
    temp=oct;
    // Octal to Decimal
    while(oct>0)
    {
        i++;
        dec+=oct%10*pow(8,i);
        oct/=10;
    }
    // Decimal to Hexadecimal
    i=0;
    while(dec>0)
    {
        rem=dec%16;
        rem<10? hex[i++]=rem+48:hex[i++]=rem+55;
        dec/=16;
    }
    cout<<"Given Octal ("<<temp<<") to Hexadecimal (";
    for(j=i-1;j>=0;j--)
    {
        cout<<hex[j];
    }
    cout<<") coverted successfully!!\n\n";
    SetConsoleTextAttribute(h,7);
    cout<<">>Select another option from menu:";
}
int main()
{
    // logo
    SetConsoleTextAttribute(h,185);
    cout<<"\n ############################################################################ \n";
    cout<<" #                                                                          # \n";
    cout<<" #                             ";
    SetConsoleTextAttribute(h,96);
    cout<<"|_|NUSUAL CONVERTOR";
    SetConsoleTextAttribute(h,185);
    cout<<"                          # \n";
    cout<<" #                                                                          # \n";
    cout<<" ############################################################################ \n\n";

    // index
    SetConsoleTextAttribute(h,10);
    cout<<"1.Binary to Decimal          ";
    SetConsoleTextAttribute(h,11);
    cout<<"4.Decimal to Binary          ";
    SetConsoleTextAttribute(h,12);
    cout<<"7.Octal to Binary\n";
    SetConsoleTextAttribute(h,13);
    cout<<"2.Binary to Octal            ";
    SetConsoleTextAttribute(h,14);
    cout<<"5.Decimal to Octal           ";
    SetConsoleTextAttribute(h,10);
    cout<<"8.Octal to Decimal\n";
    SetConsoleTextAttribute(h,11);
    cout<<"3.Binary to Hexadecimal      ";
    SetConsoleTextAttribute(h,12);
    cout<<"6.Decimal to Hexadecimal     ";
    SetConsoleTextAttribute(h,13);
    cout<<"9.Octal to Hexadecimal\n";
    SetConsoleTextAttribute(h,14);
    cout<<"10.EXIT\n\n";
    SetConsoleTextAttribute(h,8);
    cout<<"NOTE:\nPlease enter valid input carefully\nBinary input number contain 0 and 1 only\nOctal input number contain 0-7 digits only\nDecimal input number contain 0-9 digits only\nHexadecimal input number contain 0-9 digits + A-F alphabets only\n\n"; 
    SetConsoleTextAttribute(h,7);
    cout<<">>Select any one option:";
    int n;
    while(cin>>n)
    {
    switch(n)
    {
        case 1: btd();break;
        case 2: bto();break;
        case 3: bth();break;
        case 4: dtb();break;
        case 5: dto();break;
        case 6: dth();break;
        case 7: otb();break;
        case 8: otd();break;
        case 9: oth();break;
        case 10: exit(1);break;
        default: cout<<">>Please select valid option\n";break;
    }
    }
    return 0;
}