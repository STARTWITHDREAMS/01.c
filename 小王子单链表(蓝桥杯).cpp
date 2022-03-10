#include <iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
};
Node *head = new Node;

void init(){
  head -> next = nullptr;
  for(int i = 10;i >= 1;--i){
    Node *tmp = new Node;
    tmp -> data = i;
    tmp -> next = head -> next;
    head -> next = tmp;
  }
}
void insert(int x){
  Node *tmp = new Node;
  tmp -> data = x;
  tmp -> next = head -> next;
  head -> next = tmp;
}
void del(int x){
  Node *before = head;
  for(Node *T = head -> next;T != nullptr; T = T -> next){
    if(T -> data == x){
      before -> next = T -> next;
      delete T;
      return;
    }
    before = T;
  }
}
void show(){
  for(Node *T = head -> next;T != nullptr;T = T -> next){
    cout << T -> data << ' ';
  }
  cout << endl;
}
int main()
{
  init();
  int n;
  cin >> n;
  int x;
  for (int i = 1; i <= n;++i){
    cin >> x;
    del(x);
    insert(x);
    show();
  }
  return 0;
}