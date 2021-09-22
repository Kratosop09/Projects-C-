#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Bank{
   
   private :
   	string name;
   	int accountno ;
   	char type[10];
   	int amount =0;
   	int total=0;
   	
   public:
    
	void setvalue()
	{
		cout<<"Enter Name : \n";
		cin.ignore();
		
		getline(cin, name);
		
		cout<<"Enter Account Number :\n";
		cin>>accountno;
		cout<<"Enter Account Type :\n";
		cin>>type;
		cout<<"Enter Balance :\n";
		cin>>total;
	}
	void showdata()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Account Number :"<<accountno<<endl;
		cout<<"Account Type :"<<type<<endl;
		cout<<"Balance :"<<total<<endl;
		
		}
		
		void deposite()
		{
			cout<<"\nEnter Amount you want to Deposite :\n";
			cin>>amount;
		}	
		
		
		void showbalance ()
		{
			total+=amount;
			cout<<"\nTotal Balance is : "<<total;
		 } 
		 
		 
		 void withdraw()
		 {
		 	int a , avail_balance;
		 	
		 	cout<<"\nEnter amount to withdraw :\n";
		 	cin>>a;
		 	avail_balance=total-a;
		 	cout<<"Available Balance is : "<<avail_balance;
		 }
};

int main()
{
	Bank b;
	
	int choice ;
	
	while(1){
		
		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n~~~~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cout<<"Enter your Choice :\n";
		cout<<"\t1. Enter name , Account number , Account type \n";
		cout<<"\t2. Balance Enquiry\n";
		cout<<"\t3. Deposite Money\n";
		cout<<"\t4.Show Total Balance \n";
		cout<<"\t5.Withdraw Money\n";
		cout<<"\t6.Cancel\n";
		cin>>choice;
		
		
		switch(choice)
		{
			case 1:
				b.setvalue();
				break;
			
			case 2:
				b.showdata();
				break;
			
			case 3:
				b.deposite();
				break;
			
			case 4:
				b.showbalance();
				break;
				
			case 5:
			    b.withdraw();
				break;
				
			case 6:
			    exit(1);
				break;
				
		    default :
			cout<<"\nInvalid Choice\n";	
			break;	
		}
	}
}
