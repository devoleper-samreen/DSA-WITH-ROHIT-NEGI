#include<iostream>
#include<string>
using namespace std;

int num(char c)
{
    if(c=='I')
    {
        return 1;

    }else if(c=='V')
    {
        return 5;

    }else if(c=='X')
    {
        return 10;

    }else if(c=='L')
    {
        return 50;

    }else if(c=='C')
    {
        return 100;

    }else if(c=='O')
    {
        return 500;

    }else
    {
         return 1000;
    }
    
}

int main()
{
     //roman to integet
     //I ---> 1
     //III ---> 3

     //LOGIC IS IV ---> 4
     //AGAR PICLE SE AAGE WALE BADA HAIN TO PICHLE KO NEGETIVE MAANEGE(IV KE LIYE I--> 1 & V ---> 5  SO,  -1 + 5 = 4) 

     string s = "IV";
     int sum = 0;
     int index = 0;

     while ( index<s.size() -1 )
     {
        if( num(s[index]) < num(s[index+1]))
        {
            sum = sum - num(s[index]);
        }else{
            sum = sum + num(s[index]);
        }

        index++;
     }

     sum = sum + num(s[index]);

     cout<<sum;
     
}
