#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string str = "AABBBCBBAC";

     vector<int>count(256,0);
     int first = 0, second = 0, len = str.size();
     int diff = 0;

     //calculate all unique char
     while ( first<str.size())
     {
        if(count[str[first]]==0)
        {
            diff++;
        }

        count[str[first]]++;
        first++;
     }

     //ab count ko zero bana do
     for ( int i = 0; i < 256; i++)
     {
        count[i] = 0;
     }

     first = 0;

     while ( second<str.size())
     {
        //diff exist karta hain
        while ( diff && second<str.size())
        {
            if(count[str[second]] == 0)
            {
                diff--;
            }

            count[str[second]]++;
            second++;
        }

        len = min(len, second-first);
        
        //jab tak diff 1 na ban jaye
        while ( diff != 1)
        {
            len = min(len, second-first);
            count[str[first]]--;

            if(count[str[first]]==0)
            {
                diff++;
            }

            first++;
        }
        
     }

     cout<<len;  
     
}
