#include"unsortedtype.cpp"
#include <iostream>

using namespace std;

int main()
{
    UnsortedType u;
    int c=u.lengthIs();
    if(c==0)
    {
        cout<<"List is empty."<<endl;
    }
    cout<<"Enter four elements:"<<endl;
    u.resetList();
    for(int i=0;i<4;i++)
    {
        int a;
        cin >> a ;
        u.insertItem(a);
    }

    u.resetList();
     cout<<"After insert four elements list is:"<<endl;

    for(int i=0;i<4;i++)
    {
        int a;
        a=i;
        u.getNextItem(a);
        cout<<a<<endl;
    }
    u.resetList();

    cout<<"Enter a element"<<endl;

    int a;
    cin >> a ;
    u.insertItem(a);
    cout<<"After adding one element list is:"<<endl;
     u.resetList();
      for(int i=0;i<5;i++)
    {
        int a;
        a=i;
        u.getNextItem(a);
        cout<<a<<endl;
    }
     cout<<"List length="<<u.lengthIs()<<endl;
    cout<<"Enter a element for searching..."<<endl;
     int b;
     cin>>b;
     bool found=false;
     u.retrieveItem(b,found);
     if(found==1)
        cout<<"Found"<<endl;
     else
        cout<<"Not Found"<<endl;
    cout<<"Enter a element for searching..."<<endl;
     int f;
     cin>>f;
     bool fou=false;
     u.retrieveItem(f,fou);
     if(fou==1)
        cout<<"Found"<<endl;
     else
        cout<<"Not Found"<<endl;


        cout<<"Enter a element to delete..."<<endl;

        int d;
        cin>>d;
        u.deleteItem(d);
            u.resetList();
     cout<<"After delete one  elements list is:"<<endl;

    for(int i=0;i<4;i++)
    {
        int a;
        a=i;
        u.getNextItem(a);
        cout<<a<<endl;
    }

   int e= u.isFull();
    if(c==5)
    {
        cout<<"Full."<<endl;
    }
    else
    {
         cout<<"List is not full."<<endl;

    }





    return 0;
}
