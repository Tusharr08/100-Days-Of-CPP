#include <iostream>
using namespace std;

int bags(int a, int b, int c, int d)
{
    if((a+b+c)<=d)
    return 1;
    else if((a+b)<=d  ||  (a+c)<=d)
    return 2;
    else
    return 3;
    /*
    else 
    {
        int m= (a+b+c)%d;
        if(m!=0)
        return int((a+b+c)/d + 1);
        else
        return int((a+b+c)/d);
    }*/
}

int main() {
	// your code goes here
	int t,a,b,c,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    cout<<bags(a,b,c,d)<<endl;
	}
	return 0;
}
