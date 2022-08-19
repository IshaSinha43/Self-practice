#pragma once
#include"Function overidden.h"
#include "Main.h"
#include <cstdlib>

//#include "construct.h"
//#include "c_constructor.h"
#include"SinglyList.h"
int main() 
{

    //// Functionoveridden::FunctionOverriding();
    // copyconstructor:: CopyConstructor();
    // CopyConstructor::Line line(10);
    // CopyConstructor::display(line);

    //list<int>li;
    //Linkedlist list;

    //// Inserting nodes
    //list.insertElement(1);
    //list.insertElement(2);
    //list.insertElement(3);
    //list.insertElement(4);

    //cout << "Elements of the list are: ";

    //// Print the list
    //list.printList();
    //cout << endl;

    //// Delete node at position 2.
    //list.deleteElement(2);

    //cout << "Elements of the list are: ";
    //list.printList();
    //cout << endl;



   SinglyList<int> list;
    int ch, item, index;
    bool quit = false;
    do {
        cout << "====================================" << endl;
        cout << "select option :" << endl;
        cout << "1: insert back" << endl;
        cout << "2: insert front" << endl;
        cout << "3: insert at index" << endl;
        cout << "4: display items" << endl;
        cout << "5: get item at index" << endl;
        cout << "6: delete back" << endl;
        cout << "7: delete front" << endl;
        cout << "8: delete at index" << endl;
        cout << "9: exit" << endl;
        cin >> ch;
        cout << "====================================" << endl;
        switch (ch)
        {
        case 1:
            cout << "enter item to insert:" << endl;
            cin >> item;
            list.PushElement(item);
            break;
        case 2:
            cout << "enter item to insert:" << endl;
            cin >> item;
            list.addFront(item);
            break;
        case 3:
            cout << "enter item to insert:" << endl;
            cin >> item;
            cout << "enter index:" << endl;
            cin >> index;
            list.PushElement(index, item);
            break;
        case 4:
            list.displayAll();
            break;

        case 5:
            cout << "enter index:" << endl;
            cin >> index;
            cout << "item at index " << index << ": " << list.NextValue(index) << endl;
            break;
        case 6:
            list.RemoveElement();
            break;
        case 7:
            list.removeFront();
            break;
        case 8:
            cout << "enter index:" << endl;
            cin >> index;
            list.RemoveElement(index);
            break;
        case 9:
            quit = true;
            break;
        default:
            cout << "invalid selection" << endl;
            break;
        }
    } while (!quit);
    return 0;
}


    


























































  

