#include "c_constructor.h"

copyconstructor::Test::Test(const Test& t)
{
	cout << "Copy constructor called " << endl;
}

void copyconstructor::CopyConstructor()
{
	Test t1, t2;				
	t2 = t1;
	Test t3 = t1;
	

}
