#pragma once
// C++ program to access overridden function using pointer
// of Base type that points to an object of Derived class

#include <iostream>
using namespace std;
namespace Functionoveridden {

    // define the base class
    class Base_class {
   
    public:

        // define overridden function
        virtual void display_message();
        virtual void show() = 0;
       
        Base_class()        //default const
        {
            
            cout << "Default Constructor of base class called\n";
        }
        ~Base_class()        //default const
        {

            cout << "Destructor of base class called\n";
        }
    };
    
    // define the derived class
    class Derived_class:public Base_class           
    {
  
        public:
         

          // define overriding function
          void display_message();
          void show(); 
          ~Derived_class()        //default const
          {

              cout << "Destructor of derived class called\n";
          }
        };
  void  FunctionOverriding();
    }