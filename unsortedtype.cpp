#include"unsortedtype.h"

UnsortedType::UnsortedType()
{

    length=0;
    currentPosition=-1;
}

void UnsortedType::makeEmpty()
{

    length=0;
}
bool UnsortedType::isFull()
{
    return  (length==MAX_ITEM);
}
int UnsortedType::lengthIs()
{
    return length;
}
void UnsortedType::insertItem(int item)
{
    data[length]=item;
    length++;

}
void UnsortedType::deleteItem(int item)
{

    int location=0;
    while(item!=data[location])
          {

              location++;
          }
    data[location]=data[length-1];
    length--;
}
void UnsortedType::retrieveItem(int& item,bool& found)
{

    int location=0;
    bool moreToSearch=(location<length);
    found=false;
    while((moreToSearch)&&(!found))
    {

        if(item==data[location])
        {

            found=true;
            item=data[location];
        }
        else{
            location++;
            moreToSearch=(location<length);

        }
    }
}

void UnsortedType::resetList()
{
    currentPosition=-1;
}

void UnsortedType::getNextItem(int& item)
{

    currentPosition++;
    item=data[currentPosition];
}
