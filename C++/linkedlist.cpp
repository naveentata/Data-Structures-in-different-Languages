#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct node
{
    int info;
    struct node *next;
}*start;

class single_llist
{
    public:
        node* create_node(int);
        void insert_begin();
        void insert_last();
        void delete_begin();
        void delete_end();
        void display();
        single_llist()
        {
            start = NULL;
        }
};

main()
{
    int choice, nodes, element, position, i;
    single_llist sl;
    start = NULL;
    while (1)
    {
        cout<<endl<<"---------------------------------"<<endl;
        cout<<endl<<"Operations on singly linked list"<<endl;
        cout<<endl<<"---------------------------------"<<endl;
        cout<<"1.Insert Node at beginning"<<endl;
        cout<<"2.Insert node at last"<<endl;
        cout<<"3.Delete Node at beginning"<<endl;
        cout<<"4.Delete Node at end"<<endl;
        cout<<"5.Display Linked List"<<endl;
        cout<<"6.Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Inserting Node at Beginning... "<<endl;
            sl.insert_begin();
            cout<<endl;
            break;
        case 2:
            cout<<"Inserting Node at Last... "<<endl;
            sl.insert_last();
            cout<<endl;
            break;

        case 3:
            cout<<"Deleting node at beginning... "<<endl;
            sl.delete_begin();
            break;
         case 4:
            cout<<"Deleting node at end... "<<endl;
            sl.delete_end();
            break;

        case 5:
            cout<<"Display elements of link list"<<endl;
            sl.display();
            cout<<endl;
            break;
        case 6:
            cout<<"Exiting..."<<endl;
            exit(1);
            break;
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
}

node *single_llist::create_node(int value)
{
    struct node *temp, *s;
    temp = new(struct node);
    if (temp == NULL)
    {
        cout<<"Memory not allocated "<<endl;
        return 0;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
        return temp;
    }
}

void single_llist::insert_begin()
{
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp, *p;
    temp = create_node(value);
    if (start == NULL)
    {
        start = temp;
        start->next = NULL;
    }
    else
    {
        p = start;
        start = temp;
        start->next = p;
    }
    cout<<"Element Inserted at beginning"<<endl;
}

void single_llist::insert_last()
{
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp, *s;
    temp = create_node(value);
    s = start;
    while (s->next != NULL)
    {
        s = s->next;
    }
    temp->next = NULL;
    s->next = temp;
    cout<<"Element Inserted at last"<<endl;
}
void single_llist::delete_begin()
{
    struct node *ptr;
    if(start==NULL)
    {
        cout<<"\nList is empty"<<endl;
    }
    else{
        ptr=start;
        start=ptr->next;
        free(ptr);
        cout<<"\n Node deleted from the beginning"<<endl;
    }
}
void single_llist::delete_end()
{
    struct node *temp=start;
    struct node *t;
    if(start->next==NULL)
    {
        free(start);
        temp=temp->next;
    }
    else{
        while(temp->next != NULL)
        {
            t=temp;
            temp=temp->next;
        }
        free(t->next);
        t->next=NULL;
    }


}

void single_llist::display()
{
    struct node *temp;
    if (start == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }
    temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
