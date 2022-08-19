#include <iostream>
#include <stdio.h>
using namespace std;
namespace copyconstructor {
    class Test {
   
    public:
        Test() {}                            //Default constructor
        Test(const Test& t);                //copy constructor

        Test& operator=(const Test& t)       //Assignment operator
        {
            cout << "Assignment operator called " << endl;
            return *this;
        }
    };
   void CopyConstructor();
    
}

