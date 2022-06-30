#include <iostream>
using namespace std;

struct simpul_90486
{
    int data;
    simpul_90486 *next;
    simpul_90486 *prev;
};
int main()
{
    simpul_90486 *awal=NULL, *akhir=NULL, *baru, *bantu;
    int i, j,a=0,b=1,c,n;
     cout<<"Masukan nilai ke-n : ";cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i!=0)
        {
        	c=a+b;
        	a=b;
        	b=c;
            baru=new simpul_90486;
            baru->data=c;
            baru->next=NULL;
            baru->prev=NULL;
            if(awal==NULL)
            {
                awal=baru;
                akhir=baru;
            }
            else
            {
                baru->prev=akhir;
                akhir->next=baru;
                akhir=baru;
            }
        }

    }
    bantu=awal;
    while(bantu != NULL){
        cout<<bantu->data<<" ";
        bantu=bantu->next;
    }
}
