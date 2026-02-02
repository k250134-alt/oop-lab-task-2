#include <iostream>
using namespace std;

class StationeryShop {
private:
    string items[100];
    double prices[100];
    int count = 0;
public:
    void addItem() 
	{
        cout<<"Enter item name: ";
        cin>>items[count];
        cout<<"Enter item price: ";
        cin>>prices[count];
        count++;
    }
    void showItems() {
        for(int i=0;i<count;i++) 
		{
            cout<<i+1<<". "<<items[i]<<" - "<<prices[i]<<endl;
        }
    }
    void editPrice() 
	{
        int choice;
        showItems();
        cout<<"Enter item number to edit price: ";
        cin>>choice;
        cout<<"Enter new price: ";
        cin>>prices[choice-1];
    }
    void generateReceipt() 
	{
        int choice, qty;
        char more;
        double total = 0;
        do 
		{
            showItems();
            cout<<"Enter item number: ";
            cin>>choice;
            cout<<"Enter quantity: ";
            cin>>qty;
			double cost=prices[choice-1]*qty;
            total+=cost;
            cout<<"Added to bill: "<<items[choice-1]<<" x"<<qty<<" = "<<cost<<endl;
		    cout<<"Add more items? (y/n): ";
            cin>>more;

        }while(more == 'y' || more == 'Y');
		cout<<"\nTotal Bill = "<< total<<endl;
    }
};

int main() {
    StationeryShop shop;
    int option;
   do {
        cout<<"\n1. Add Item\n2. Show Items\n3. Edit Price\n4. Generate Receipt\n5. Exit\n";
        cout<<"Enter choice: ";
        cin>>option;
		if(option==1) 
		{
			shop.addItem();
		}
        else if(option==2)
        {
        	shop.showItems();
		}
        else if(option==3) 
        {
        	shop.editPrice();
		}
        else if(option==4) 
        {
        	shop.generateReceipt();
		}

    } while(option!=5);
    return 0;
}

