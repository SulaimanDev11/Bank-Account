#include<iostream>
using namespace std;
class bankAccount{
	private:
		int accountNo;
		string title;
		float balance,bal;
	public:
		bankAccount(){
			accountNo=0;
			title="Salman";
			balance=500.00;
		}
		void setAccountInfo(){
			cout<<"\n\nSet Account Inforamtion\n\n";
			cout<<"Enter account title: ";
			cin>>title;
			cout<<"Enter account number: ";
			cin>>accountNo;
			cout<<"Enter balance for deposite or withdraw: ";
			cin>>bal;
			if(bal>0){
				balance+=bal;
			}
			else{
				balance-=bal;
			}
		}
		void getAccountInfo(){
			cout<<"\n\nAccount Inforamtion\n\n";
			cout<<"Account title is: ";
			cout<<title;
			cout<<"\nAccount number is: ";
			cout<<accountNo;
			if(bal>0){
				cout<<"\nTotal balance after deposite: ";
				cout<<balance;
			}
			else{
				cout<<"\nTotal balance after withdraw: ";
				cout<<balance;
			}
		}
};
int main(){
	bankAccount customer1;
	customer1.setAccountInfo();
	customer1.getAccountInfo();
}
