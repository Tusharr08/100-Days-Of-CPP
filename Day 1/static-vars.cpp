#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Account
{
	private:
		
		int balance;
		static float roi;
	public:
		void setBalance(int b)
		{
			balance=b;
		}
	
};
float Account:: roi=3.5f;
main()
{
	system("cls");
	Account a1;
	
}
