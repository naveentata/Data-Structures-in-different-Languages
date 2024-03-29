#include <iostream>
#include <deque>

using namespace std;

void showdata(deque<int> deque1)
{
  deque<int>::iterator iterator_1;
  for (iterator_1 = deque1.begin(); iterator_1 != deque1.end(); ++iterator_1)
    cout << "\t" << *iterator_1;
  cout << "\n";
}

int main()
{
  deque<int> myqueue;
  myqueue.push_front(230); // getting data from front
  myqueue.push_front(240); // getting data from front
  myqueue.push_back(250);  // getting data from back
  myqueue.push_back(260);  // getting data from back
  cout << "Deque elements are: ";
  showdata(myqueue);

  return (0);
}
