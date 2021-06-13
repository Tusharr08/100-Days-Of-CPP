#include<iostream>
#include<conio.h>
using namespace std;

template <class X> class ArrayList
{
	private:
		struct ControlBlock
		{
			int capacity;
			X *arr_ptr;
		};
		ControlBlock *s;
		
	public:
		ArrayList(int cap)
		{
			s=new ControlBlock;
			s->capacity=cap;
			s->arr_ptr=new X[s->capacity];
		}
		void addElem(int i, X d)
		{
			if(i>=0 &&  i<=s->capacity-1)
			s->arr_ptr[i]=d;
			else
			cout<<"Invalid Array Index";
		}
		void viewEle(int i)
		{
			if(i>=0 &&  i<=s->capacity-1)
			cout<<s->arr_ptr[i];
			else
			cout<"Invalid array Index";
		}
		void viewList()
		{
			int j;
			for(j=0;j<s->capacity;j++)
			cout<<s->arr_ptr[j]<<endl;
		}
};
main()
{
	ArrayList <int> list(4);
	list.addElem(0,396);
	list.addElem(3,879);
//	list.addELem(1,200);
//	list.addELem(2,586);
	list.viewList();
	list.viewEle(2);
}
