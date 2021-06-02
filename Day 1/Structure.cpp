#include<iostream>
#include<conio.h>

using namespace std;

struct book{
	private:
		int bookid;
		char title[20];
		float price;
	public:
		void input()
		{
			cout << "Enter book id,title and price:";
			cin >>bookid>>title>>price;
			if(bookid<0)
			bookid=-bookid;
		}
		void display()
		{
			cout<<"\n Bookid:"<<bookid<<"\ntitle:"<<title<<"\nprice:"<<price;
		}
};
 
 main()
{
	book b1;
	//clrscr();
	b1.input();
	b1.display();
	getch();
}
	
