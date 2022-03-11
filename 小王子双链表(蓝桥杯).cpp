#include <iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
  Node *before;
};
Node *head = new Node;
void insert(int x){
  Node *tmp = new Node;
  tmp -> data = x;
  tmp -> next = head -> next;
  tmp -> before = head;
  head -> next = tmp;
  if(tmp -> next)
  tmp ->next -> before = tmp;
}
void init(){
  head -> next = nullptr;
  head -> before = nullptr;
  for(int i = 10; i >= 1; --i)
    insert(i);
}
void del(int x){
  for(Node *T = head -> next; T != nullptr; T = T -> next)
    if(T->data == x){
      T -> before -> next = T -> next;
      T -> next -> before = T -> before;
      delete T;
      return;
    }
}
void show(){
  for(Node *T = head->next;T != nullptr; T = T -> next)
  cout << T -> data << ' ';
  cout << endl;
}
int main()
{
  int M,x;
  cin >> M;
  init();
  for(int i = 1; i <= M;++i){
    cin >> x;
    del(x);
    insert(x);
    show();
  }
  return 0;
}