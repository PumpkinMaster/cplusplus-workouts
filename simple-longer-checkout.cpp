#include <iostream>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void orderORpay();
void payment(int &but_qty, int &choco_qty, int &ban_qty, int &but_bill, int &choco_bill, int &ban_bill, int &total_bill);
void option_2(int &option2, int &but_qty, int &choco_qty, int &ban_qty, int &but_bill, int &choco_bill, int &ban_bill, int &total_bill);

int main()
{
	int option1, option2, but_qty=0, choco_qty=0, ban_qty=0, but_bill=0, choco_bill=0, ban_bill=0, total_bill=0;		// declare outside of loop so that figure doesn't reset to 0 each loop

	while (true)
	{
		cout<<"\n             [Uncle John's Cake House]           \n"<<endl;
		cout<<"-===================================================-"<<endl;
		cout<<"!                      CHECKOUT                     !"<<endl;
		cout<<"!===================================================!"<<endl;
		cout<<"!                                                   !"<<endl;
		cout<<"!   Butter cake       (RM10.00/piece)     ~ '1'     !"<<endl;
		cout<<"!   Chocolate cake    (RM15.00/piece)     ~ '2'     !"<<endl;
		cout<<"!   Banana cake       (RM15.00/piece)     ~ '3'     !"<<endl;
		cout<<"!                                                   !"<<endl;
		cout<<"!   Proceed to PAYMENT                    ~ '4'     !"<<endl;
		cout<<"!   CANCEL checkout                       ~ '0'     !"<<endl;
		cout<<"!                                                   !"<<endl;
		cout<<"-===================================================-"<<endl;
		cout<<"\nEnter option: ";
		cin>>option1;
		
		// Error handling for invalid options like letters or symbols
		if (cin.fail())	
		{
			cout<<"\n\n<<ERROR>><<Invalid option:Integers only>><<ERROR>>\n\n"<<endl;
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}
		
		// For cancelling checkouts
		else if (option1==0)
		{
			cout<<"\n<<Checkout CANCELLED>>\n";
			break;
		}
		
		// For BUTTER CAKE
		else if (option1==1)
		{
			cout<<"\nQuantity: ";
			cin>>but_qty;
			but_bill = 10*but_qty;
			total_bill += but_bill;
			cout<<"\nTotal price for BUTTER CAKE: RM "<<but_bill<<endl;
			cout<<"\n<<Order has been recorded>>"<<endl;		
			orderORpay();
			cin>>option2;
			option_2(option2, but_qty, choco_qty, ban_qty, but_bill, choco_bill, ban_bill, total_bill);	
			continue;
		}
		
		// For CHOCO CAKE
		else if (option1==2)
		{
			cout<<"\nQuantity: ";
			cin>>choco_qty;
			choco_bill = 15*choco_qty;
			total_bill += choco_bill;
			cout<<"\nTotal price for CHOCOLATE CAKE: RM "<<choco_bill<<endl;
			cout<<"\n<<Order has been recorded>>"<<endl;
			orderORpay();
			cin>>option2;
			option_2(option2, but_qty, choco_qty, ban_qty, but_bill, choco_bill, ban_bill, total_bill);
			continue;
		}
		
		// For BANANA CAKE
		else if (option1==3)
		{
			cout<<"\nQuantity: ";
			cin>>ban_qty;
			ban_bill = 15*ban_qty;
			total_bill += ban_bill;
			cout<<"\nTotal price for BANANA CAKE: RM "<<ban_bill<<endl;
			cout<<"\n\n<<Order has been recorded>>"<<endl;
			orderORpay();
			cin>>option2;
			option_2(option2, but_qty, choco_qty, ban_qty, but_bill, choco_bill, ban_bill, total_bill);
			continue;
		}
		
		// For PAYMENT
		else if (option1==4)
		{
			if (but_qty==0 && choco_qty==0 && ban_qty==0)
			{
				cout<<"\n\n<<ERROR>><<No order recorded>><<ERROR>>\n\n"<<endl;
				cin.clear();
				cin.ignore(1000, '\n');
				continue;
			}
			
			else
			{
				payment(but_qty, choco_qty, ban_qty, but_bill, choco_bill, ban_bill, total_bill);
				cout<<"<<RECEIPT Printed>>"<<endl;
				cout<<"<<AUTO-returning to checkout screen>>\n"<<endl;
				continue;
			} 
		}
		
		else
		{
			cout<<"\n\n<<ERROR>><<Invalid option>><<ERROR>>"<<endl;
			cout<<"\n<<AUTO-returning to CHECKOUT screen>>\n"<<endl;
			continue;
		}
	
	}

	return 0;
}

void orderORpay()
{
	cout<<"\n"<<endl;
	cout<<"-========================================-"<<endl;
	cout<<"!                                        !"<<endl;
	cout<<"!    Return to CHECKOUT screen   ~ '0'   !"<<endl;
	cout<<"!    Proceed to PAYMENT          ~ '1'   !"<<endl;
	cout<<"!                                        !"<<endl;
	cout<<"-========================================-"<<endl;
	cout<<"\nEnter option: ";
}

void payment(int &but_qty, int &choco_qty, int &ban_qty, int &but_bill, int &choco_bill, int &ban_bill, int &total_bill)
{
	cout<<"\t."<<endl;
	cout<<"\t."<<endl;
	cout<<"\t."<<endl;
	cout<<"\t."<<endl;
	cout<<"-===============================================-"<<endl;
	cout<<"!              Uncle John's Cake House\t\t!"<<endl;
	cout<<"!\t\t\t\t\t\t!"<<endl;
	cout<<"! Your Purchased:\t\t\t\t!"<<endl; 
	cout<<"! ----------------\t\t\t\t!"<<endl;
	cout<<"! Butter cake      Quantity: "<<but_qty<<"\t\tRM "<<but_bill<<"\t!"<<endl;
	cout<<"! Chocolate cake   Quantity: "<<choco_qty<<"\t\tRM "<<choco_bill<<"\t!"<<endl;
	cout<<"! Banana cake      Quantity: "<<ban_qty<<"\t\tRM "<<ban_bill<<"\t!"<<endl;
	cout<<"!\t\t\t\t\t\t!"<<endl;
	cout<<"!\t\t\t\t\t\t!"<<endl;
	cout<<"! Total bill amount: RM "<<total_bill<<"\t\t\t!"<<endl;
	cout<<"!\t\t\t\t\t\t!"<<endl;
	cout<<"!\t\t\t\t\t\t!"<<endl;
	cout<<"! Thank you! Please come again!\t\t\t!"<<endl;
	cout<<"-===============================================-"<<endl;
	cout<<"\t."<<endl;
	cout<<"\t."<<endl;
	cout<<"\t."<<endl;
	cout<<"\t."<<endl;
}

void option_2(int &option2, int &but_qty, int &choco_qty, int &ban_qty, int &but_bill, int &choco_bill, int &ban_bill, int &total_bill)
{
	if (cin.fail())
	{
		cout<<"\n<<ERROR>><<Invalid option:Integers only>><<ERROR>>"<<endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cout<<"\n<<AUTO-returning to CHECKOUT screen>>\n"<<endl;
	}
			
	else if (option2==0)
	{
		cout<<"\n\n<<Returning to CHECKOUT screen>>\n"<<endl;
	}
			
	else if (option2==1)
	{
		cout<<"\n\n<<Processing RECEIPT>>"<<endl;
		payment(but_qty, choco_qty, ban_qty, but_bill, choco_bill, ban_bill, total_bill);
		cout<<"<<RECEIPT Printed>>"<<endl;
		cout<<"<<AUTO-returning to CHECKOUT screen>>\n"<<endl;
	}
	
	else
	{
		cout<<"\n\n<<ERROR>><<Invalid option>><<ERROR>>"<<endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cout<<"\n<<AUTO-returning to CHECKOUT screen>>\n"<<endl;
	}
	
}
