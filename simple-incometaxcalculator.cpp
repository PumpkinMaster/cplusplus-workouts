#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void returning()
{
	cout<<"\n<<Returning to SYSTEM MENU>>"<<endl;
	cout<<"  ."<<endl;
	cout<<"  ."<<endl;
	cout<<"  ."<<endl;
	cout<<"  ."<<endl;
	cout<<"  ."<<endl;
}

int main(int argc, char** argv)
{
	while (true)
	{
		float tax_amt,inc_year;
		int option;
		cout<<"\n      [Income Tax Calculation System]"<<endl;
		cout<<"-==========================================-"<<endl;
		cout<<"||                                        ||"<<endl;
		cout<<"||     Calculate Income Tax  --- '1'      ||"<<endl;
		cout<<"||                                        ||"<<endl;
		cout<<"||     Exit system           --- '0'      ||"<<endl;
		cout<<"||                                        ||"<<endl;
		cout<<"-==========================================-"<<endl;
		cout<<"\nEnter desired option: "; 
		cin>>option;
		
		if (option==1)
		{
			while (true)
			{
				cout<<"\nEnter annual income: RM ";
				cin>>inc_year;
				 
				// To ensure income amount entered is numerical
				if (cin.fail())
				{
					cout<<"\n<<ERROR>><<Numbers only>><<Please re-enter income amount>>"<<endl;
					cin.clear();
					cin.ignore(1000, '\n');		// Throws away the stream input from before
					continue;		// Goes back to the beginning of the while loop
				}
				
				// If it is, the calculation process continues...
				else
				{
					cout<<"\n============================================="<<endl;
					cout<<"\nCalculating total income tax amount...."<<endl;
					cout<<"  ."<<endl;
					cout<<"  ."<<endl;
					cout<<"  ."<<endl;
					cout<<"  ."<<endl;
					cout<<"  ."<<endl;
					break;
				}
			}
			
			if (inc_year<0)
			{
				cout<<"\n<<ERROR>><<Negative values are not processable>>"<<endl;
				returning();
				continue;
			}
			
			else if (inc_year>=0 && inc_year<5001)
			{
				cout<<"\nTotal tax amount: RM 0.00"<<endl;
				returning();
				continue;
			}
			
			else if (inc_year<20001)
			{
				tax_amt = 0.01*inc_year;
				cout<<"\nTotal tax amount: RM "<<tax_amt<<endl;
				returning();
				continue;
			}
			
			else if (inc_year<35001)
			{
				tax_amt = 0.03*inc_year;
				cout<<"\nTotal tax amount: RM "<<tax_amt<<endl;
				returning();
				continue;
			}
			
			else if (inc_year<50001)
			{
				tax_amt = 0.08*inc_year;
				cout<<"\nTotal tax amount: RM "<<tax_amt<<endl;
				returning();
				continue;
			}
			
			else if (inc_year<70001)
			{
				tax_amt = 0.14*inc_year;
				cout<<"\nTotal tax amount: RM "<<tax_amt<<endl;
				returning();
				continue;
			}
			
			else if (inc_year<=100000) 
			{
				tax_amt = 0.21*inc_year;
				cout<<"\nTotal tax amount: RM "<<tax_amt<<endl;
				returning();
				continue;
			}
			
			else if (inc_year>100000)
			{
				cout<<"\n<<ERROR>><<For income below RM 100000.00 only>>"<<endl;
				returning();
				continue;
			}
		}
		
		else if (cin.fail())
		{
			cout<<"\n<<ERROR>><<Integers only>>\n"<<endl;
			returning();
			cin.clear();
			cin.ignore(1000, '\n');
			continue;
		}
		
		else if (option==0)
		{
			cout<<"\n<<EXITING Income Tax Calculation System>>\n";
			break;
		}

		else
		{
			cout<<"\n<<ERROR>><<Invalid option entered>>"<<endl;
			returning();
			continue;
		}
		
		
	}

	return 0;
}
