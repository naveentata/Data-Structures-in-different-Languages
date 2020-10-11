#include<iostream>
#include<conio.h>
#include<malloc.h>
using namespace std;
struct node
{
    int info; 
    struct node *next;
}
*start, *temp,*current;
void circular(int);
void circulardisplay();
int main()
{
    start=NULL;
    int item, choice, location, element, position;
    cout<<"Circular Singly Linked\n"<<endl;
    again:
        cout<<"\n1.Insert Item in Circular Linked List\n2.Display circular Linked List \n3.Exit\n";
        cout<<"Enter choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"enter an item to insert  :";
            cin>>item;
            circular(item);
            goto again;



            case 2:
                cout<<"\nInserted item = ";
                circulardisplay();
                 cout<<"\n";
                 goto again;
            case 3:
                cout<<"\nTHANK YOU";
            default:break;
        }
getch();
}
void circular(int item)
{
    temp=(node*)malloc(sizeof(node));
    temp->info=item;
    temp->next=start;
    node* current;
    if(start==NULL)
    {
        start=temp;
        temp->next=start;
    }
    else
        {
            current=start;
            while(current->next!=start)
            {
                current=current->next;
            }
    current->next=temp;
        }
}
void circulardisplay()
{
    current= start;
    do{
    cout<<current->info<<" ";
    current=current->next;
    }
    while(current!=start);

}
