#include <iostream>
using namespace std;
struct Node {     // struct node is created
   int data;
   struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main() {
   int p, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;  //This choices the user to select one of them
      cin>>p;
      switch(p) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val); //This adds a data value to the top of the stack
            break;
         }
         case 2: {
            pop();  //This removes the data value on top of the stack
            break;
         }
         case 3: {
            display(); //This displays the data value of the stack
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;  //This exits the choice
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(p!=4);
   return 0;
}
