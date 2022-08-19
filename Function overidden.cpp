#include "Function overidden.h"

void Functionoveridden::Base_class::display_message()
{
    cout << "Called Base class function.\n\n";
}


void Functionoveridden::Derived_class::display_message()
{
    cout << "Called derived class function.\n\n";
}

void Functionoveridden::Derived_class::show()
{
    cout << "Pure virtual function in Derived"<< endl;
}

void Functionoveridden::FunctionOverriding()
{

    // pointer of Base type that points to Derived class
  
   Base_class* ptr = new Derived_class();
   

    // call function of Base class using ptr
   if (ptr != NULL)
   {
       ptr->display_message();
       ptr->show();
    
   }
  
   delete ptr;
   ptr = NULL;
}
