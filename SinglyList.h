
#include<iostream>
using namespace std;

template<typename T>class Node 
{
private:
    T data;
    Node<T>* next;
    template<typename U>friend class SinglyList;
public:
    Node()
    {
        this->next = NULL;
    }
};

template<typename T>class SinglyList {
private:
    Node<T>* head;
public:
    SinglyList() {
        this->head = NULL;
    }
    //[] operator
    T& operator[](size_t n)const
 {
    // Start at the head of the list
    Node* current = head;

    while (current != nullptr && n-- > 0)          //`n` is larger than zero ,Also decrement `n` after checking its value
    {
        current = current->next;         // Make `current` point to the next node in the list
        cout << "Error: Index Out oF Bounds!!" << endl;
        exit(0);

    }
        return (current == nullptr ? 0 : current->data);
}

    void PushElement(T item)
    {
        Node<T>* node = new Node<T>[1];
        node->data = item;
        if (head == NULL) {
            head = node;
            cout << "new node added(firstnode) !" << endl;
            return;
        }
        Node<T>* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
        cout << "new node added at back!" << endl;
    }

    void addFront(T item) {
        Node<T>* node = new Node<T>[1];
        node->data = item;
        if (head == NULL) {
            head = node;
            cout << "new node added(firstnode) !" << endl;
            return;
        }
        node->next = head;
        head = node;
        cout << "new node added at front !" << endl;
    }

    void PushElement(int index, T item)
    {
        if (index > length() || index < 0) 
        {
            cout << "index out of bound !" << endl;
            return;
        }
        Node<T>* node = new Node<T>[1];
        node->data = item;
        int count = 0;
        Node<T>* temp = head;
        while (temp != NULL && count < index) 
        {
            if (count == index - 1) 
            {
                if (temp->next != NULL)
                {
                    node->next = temp->next;
                }
                temp->next = node;
                cout << "new node added at index " << index << " !" << endl;
                break;
            }
            count++;
            temp = temp->next;
        }

    }

    int length() 
    {
        int len = 0;
        Node<int>* temp = head;
        while (temp != NULL) 
        {
            len++;
            temp = temp->next;
        }
        return len;
    }

    void displayAll()
    {
        if (head == NULL) 
        {
            cout << "linked list is empty" << endl;
            return;
        }
        cout << endl << "----link list items------" << endl;
        Node<T>* temp = head;
        while (temp != NULL) 
        {
            cout << temp->data << " | ";
            temp = temp->next;
        }
        cout << endl << "--------------------------" << endl;
    }

    void RemoveElement() {
        if (head == NULL) {
            cout << "linked list is empty !" << endl;
            return;
        }
        if (head->next == NULL) 
        {
            head = NULL;
            cout << "last item removed" << endl;
            return;
        }

        Node<T>* temp = head;
        while (temp != NULL) {
            if (temp->next->next == NULL) 
            {
                temp->next = NULL;
                cout << "last item removed" << endl;
                break;
            }
            temp = temp->next;
        }

    }

    void RemoveElement(int index) 
    {
        if (head == NULL) {
            cout << "linked list is empty !" << endl;
            return;
        }
        if (index >= length() || index < 0) {
            cout << "index out of bound !" << endl;
            return;
        }
        if (index == 0)
        {
            removeFront();
            cout << "item removed at index " << index << endl;
            return;
        }

        int count = 0;
        Node<T>* temp = head;
        while (temp != NULL) 
        {
            if (count == index - 1)
            {
                temp->next = temp->next->next;
                cout << "item removed at index " << index << endl;
                break;
            }
            count++;
            temp = temp->next;
        }
    }

    void removeFront()
    {
        if (head == NULL)
        {
            cout << "linked list is empty !" << endl;
            return;
        }
        head = head->next;
        cout << "front item removed" << endl;
    }

    T NextValue(int index) 
    {
        if (head == NULL) 
        {
            cout << "linked list is empty !" << endl;
            return -9999;
        }
        if (index >= length() || index < 0) {
            cout << "index out of bound !" << endl;
            return -9999;
        }
        if (index == 0) 
        {
            return head->data;
        }
        int count = 0;
        T res;
        Node<T>* temp = head;
        while (temp != NULL)
        {
            if (count++ == index)
            {
                res = temp->data;
                break;
            }
            temp = temp->next;
        }
        return res;
    }

    void  getLength()
    {
      int count = 0;
      class Node<T>temp;
      temp = head;
      while (temp != 0)
      {
          count++;
          temp = temp->next;
      }
    }
  
};


























