#include <iostream>
using namespace std;
 
struct node
        {
    string name,title,author,release,date;
    node *next;
}nodee;
 
node *head,*tail,*new_node,*cur,*sorted;
 
    void insertbehindlist(string name,string date, string title, string author, string release){
        new_node= new node;
        new_node->name = name;
        new_node->date=date;
        new_node->title = title;
        new_node->author = author;
        new_node->release = release;
        new_node->next = NULL;
        if (head==NULL)
        {
            head=new_node;
        }
        else
        {
            tail->next=new_node;
        }
        tail=new_node;
    }
 
void printlist(){
        cur=head;
        while (cur != NULL){
            cout<<endl;
            cout<<"Nama Pembeli  : "<<cur->name<<endl;
            cout<<"tanggal beli  : "<<cur->date<<endl;
            cout<<"author        : "<<cur->author<<endl;
            cout<<"judul buku    : "<<cur->title<<endl;
            cout<<"tahun terbit  : "<<cur->release<<endl;
            cur=cur->next;
        }
    }
 
    void sortedInsert(node* new_node)
    {
        if (sorted == NULL ||
            sorted->date >= new_node->date)
        {
            new_node->next = sorted;
            sorted = new_node;
        }
        else
        {
            node* cur = sorted;
            while (cur->next != NULL &&
                   cur->next->date< new_node->date)
            {
                cur = cur->next;
            }
            new_node->next = cur->next;
            cur->next = new_node;
        }
    }
 void insertionSort(node* head)
    {
        sorted = NULL;
        cur = head;
        while (cur != NULL)
        {
            node* next = cur->next;
            sortedInsert(cur);
            cur = next;
        }
        head = sorted;
    }
 
void inputdata()
{
    cin.ignore();
    cout<<"nama pembeli  : ";
    getline(cin,nodee.name);
    cout<<"tanggal beli  : ";
    getline(cin,nodee.date);
    cout<<"author        : ";
    getline(cin,nodee.author);
    cout<<"judul buku    : ";
    getline(cin,nodee.title);
    cout<<"tahun terbit  : ";
    getline(cin,nodee.release);
}
 
void searchlinear()
{
    node *temp;
    string pos;
    int front1=1,in;
    cin.ignore();
    cout<<"kode barang yang di cari : ";
    getline(cin,pos);
    temp=head;
    while(temp!=NULL)
    {if(temp->name!=pos){
        temp=temp->next;
        front1++;
        }
        else
        {
        in=true;
        break;
        }
    }
    if(in==1)
    {
        cout<<"node at position : "<<front1<<endl;
        cout<<"Nama Pembeli  : "<<temp->name<<endl;
        cout<<"tanggal beli  : "<<temp->date<<endl;
        cout<<"author        : "<<temp->author<<endl;
        cout<<"judul buku    : "<<temp->title<<endl;
        cout<<"tahun terbit  : "<<temp->release<<endl;
    }
    else
    {
        cout<<"node not found :)"<<endl;
    }
}
 
 
int main(){
  int in,rep;
  do
  {
      system("cls");
      cout<<"1.input "<<endl;
      cout<<"2.sort  "<<endl;
      cout<<"3.search"<<endl;
      cout<<"4.view "<<endl;
      cout<<"input : ";
      cin>>in;
      if (in==1)
      {
          inputdata();
          insertbehindlist(nodee.name,nodee.date,nodee.author,nodee.title,nodee.release);
      }
      if (in==2)
      {
            insertionSort(head);
            printlist();
      }
      if (in==3)
      {
        searchlinear();
      }
      if (in==4)
      {
          printlist();
      }
      cout<<endl;
      cout<<"menu press 1 : ";
      cin>>rep;
  }
  while(rep==1);
}
