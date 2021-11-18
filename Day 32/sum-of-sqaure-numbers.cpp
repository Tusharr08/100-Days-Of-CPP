#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        int a=0 , b=c-1 ,mid,x;
        while(a<=b)
        {
            cout<<a<<" "<<b<<endl;
           // mid= a + (b-a)/2;
            x= pow(a,2) +pow(b,2);
            if(x>c)
                b--;
            else if (x<c)
                a++;
            else
                return true;
        }
        return false;
    }
    
};

int main()
{
    Solution o1;
    cout<<"res"<<o1.judgeSquareSum(4);
}