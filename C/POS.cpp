#include <iostream>
using namespace std;

int main()
{
	char ask;
	int number,n;
	int total=0;
	int price [5]={200,210,215,220,225};
	
	retry:
	
	cout << "================================" <<endl;
	cout << "            LIST            	 " <<endl;
	cout << "================================" <<endl;
	cout <<	"\nName of Product\t        		Price\n" <<endl;
	cout << "1. CHEESE PIZZA\t        		Php.200" <<endl;
	cout << "2. PEPPERONI PIZZA\t       		Php.210" <<endl;
	cout << "3. SUPER SUPREME PIZZA\t      		Php.215" <<endl;
	cout << "4. HAWAIIAN PIZZA\t       		Php.220" <<endl;
	cout << "5. ALL MEAT PIZZA\t        	Php.225" <<endl;
	
	
	cout <<"\nPlease enter a number: "; 
	cin>>number;
	
	switch(number)
	{
		case 1:
			cout<<"Enter how many you want to buy: "; cin>>n;
			total+=price[0]*n;
			cout<<"Do you want to buy something else? (y/n) "; cin>>ask;
			if(ask=='y'){
				system("cls");
				goto retry;
			}else
				goto end;
				
		case 2:
			cout<<"Enter how many you want to buy: "; cin>>n;
			total+=price[1]*n;
			cout<<"Do you want to buy something else? (y/n) "; cin>>ask;
			if(ask=='y'){
				system("cls");
				goto retry;
			}else
				goto end;	
		case 3:
			cout<<"Enter how many you want to buy: "; cin>>n;
			total+=price[2]*n;
			cout<<"Do you want to buy something else? (y/n) "; cin>>ask;
			if(ask=='y'){
				system("cls");
				goto retry;
			}else
				goto end;	
		case 4:
			cout<<"Enter how many you want to buy: "; cin>>n;
			total+=price[3]*n;
			cout<<"Do you want to buy something else? (y/n) "; cin>>ask;
			if(ask=='y'){
				system("cls");
				goto retry;
			}else
				goto end;	
		case 5:
			cout<<"Enter how many you want to buy: "; cin>>n;
			total+=price[4]*n;
			cout<<"Do you want to buy something else? (y/n) "; cin>>ask;
			if(ask=='y'){
				system("cls");
				goto retry;
			}else
				goto end;	
		default:
            cout << "your order is not on the list, please try again:\n";
            break;					
	}
	end:
		cout<<"total: "<<total;
}
