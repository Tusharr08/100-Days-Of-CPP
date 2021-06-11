#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
	private:
		int l,b,h;
	public:
		void setDimension(int l,int b,int h)
		{
			this->l=l;
			this->b=b;
			this->h=h;
		}
		void showDimenison()
		{
			cout<<l<<endl<<b<<endl<<h<<endl;
		}
};
main()
{
	Box smallbox;
	Box *p=&smallbox;
	p->setDimension(12,10,5);
	p->showDimenison();
	getch();
}
