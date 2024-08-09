#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //use sliding window techneque
    string s = "abcabcbb";

    vector<bool>count(256, 0);

    int first = 0, second = 0, len = 0;

    while ( second<s.size())
    {
        //find repeating char
        while ( count[s[second]])
        {
            count[s[first]] = 0;
            first++;
        }

        //jinhe dekh liya hain unhe 1 banado
        count[s[second]] = 1;

        // maximun length ko len mein dall do
        len = max(len, second-first+1 );
        second++;
        
    }

    cout<<len;
    

}
