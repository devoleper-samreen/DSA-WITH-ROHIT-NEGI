#include<iostream>
using namespace std;
#include<algorithm>
#include<string>

int main()
{
    //ADD STRING 
    //leetcode 415
    //NUM1 = "26583"
    //NUM2 = "698"
    //RESULT = "27272"

    string num1 = "26583";
    string num2 = "698";
    string ans;

    int carry = 0;
    int sum;

    int index1 = num1.size()-1;
    int index2 = num2.size()-1;

    while(index2>=0)
    {
        sum = ( num1[index1] - '0') + (num2[index2] - '0') + carry;

        carry = sum/10;

        char c = '0' + sum%10;

        ans = ans + c;

        index1--;
        index2--;

    }

    //index1 bacha hain abhi
    while ( index1>=0)
    {
        sum = (num1[index1] - '0') + carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans = ans + c;
        index1--;
    }

    if(carry)
    {
        ans = ans + '1';
    }

    reverse(ans.begin(), ans.end());

    cout<<ans;
    
     
    
}
