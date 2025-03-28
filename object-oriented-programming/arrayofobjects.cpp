//array of objects
#include<iostream>
using namespace std;
class Item{
    private:
       char name[20];
       int price;
    public:
    void getitem();
    void printitem();
};

void Item::getitem(){
    cout<<"Enter name of item: ";
    cin>>name;
    cout<<"Enter price of item: ";
    cin>>price;
}
void Item::printitem(){
    cout<<"Name of item: "<<name<<endl;
    cout<<"Price of item: "<<price<<endl;
}

int main()
{
    Item item[5];
    for(int i=0;i<5;i++){
        cout<<"Enter details of item "<<i+1<<endl;
        item[i].getitem();
    }
    cout<<"Details of items are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<"Details of item "<<i+1<<endl;
        item[i].printitem();
    }
    return 0;
}






