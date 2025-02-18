#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"enter the year"<<endl;
	cin>>year;
	if(year%400==0||year%100!=0&&year%4==0){
		cout<<"The year is a leap yaer"<<endl;
	}
	else{
		cout<<"the year is not a laep year";
	}
}
