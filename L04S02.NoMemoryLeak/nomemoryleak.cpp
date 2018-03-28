
#include <iostream>
#include <memory>
using namespace std;
struct A
{
	int b;
};

int main(){
	
	unique_ptr<A> i(make_unique<A>());
	unique_ptr<A> j(new A);
	i->b = 6;
	cout << i->b << endl;
	j = move(i);
	cout << j->b << endl;
	if (i)
	{
		cout << i->b << endl;
	}
	else
	{
		cout << "i is missing" << endl;

	}
	

	
	
	system("PAUSE");
	return 0;

}
