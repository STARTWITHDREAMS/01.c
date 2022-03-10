#include <iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
};
int main()
{
  int n,k,m;
  cin >> n >> k >> m;
  Node *first = new Node;
  first -> data = 1;
  Node *p = first;
  Node *q = nullptr;
  for(int i = 2; i <= n;++i){
    q = new Node;
    q -> data = i;
    p -> next = q;
    p = p -> next;
  }
  p -> next = first;
  p = first;
  for(int i = 1; i < k;++i)
    p = p -> next;
  while(p != p->next){
  for(int i = 1; i < m - 1; ++i){
    p = p -> next;
  }
  q = p -> next;
  cout << q -> data << endl;
  p -> next = q -> next;
  p = p -> next;
  delete q;
  }
  cout << p -> data;
  return 0;
}