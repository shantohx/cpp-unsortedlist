#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEM=5;

class UnsortedType
{
private:
    int length;
    int data[MAX_ITEM];
    int currentPosition;

public:
    UnsortedType();
    void makeEmpty();
    bool isFull();
    int lengthIs();
    void insertItem(int);
    void deleteItem(int);
    void retrieveItem(int&,bool&);
    void resetList();
    void getNextItem(int&);

};

#endif // UNSORTEDTYPE_H_INCLUDED
