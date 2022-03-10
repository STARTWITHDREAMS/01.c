#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = new Node; //先生成头结点
void init()
{
    head->next = nullptr; //形成空链，由上文已知单链表最后一个结点的指针为空。

    for (int i = 10; i >= 1; i--)
    {
        Node *temp = new Node;
        temp->data = i;

        temp->next = head->next;
        head->next = temp;
    }
}
void del(int x)
{
    Node *Befor = head;                                   //用于存放当前节点的前驱，因为单链表单向遍历，我们不能从下一个找到上一个
    for (Node *T = head->next; T != nullptr; T = T->next) //链表的遍历常用写法
    {
        if (T->data == x) //找到要的那个数了
        {
            Node *temp = T; //先临时保存结点

            Befor->next = T->next; //将节点从链表上摘除

            delete temp; //从内存中删除结点。

            return; //删除结束后，结束函数。
        }
        Befor = T; //前驱改变
    }
}
void insert(int x)
{
    Node *temp = new Node;
    temp->data = x;

    temp->next = head->next;
    head->next = temp;
}
void show(int i)
{
    cout << "这是第" << i << "次操作"; //提交代码时删掉这一行
    for (Node *T = head->next; T != nullptr; T = T->next) //链表的遍历常用写法
    {
        cout << T->data << " ";
    }
    cout << endl;
}
int main()
{

    init();
    show(0);//提交代码时删掉这一行
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int x;
        cin >> x;
        del(x);
        insert(x);
        show(i);
    }
}