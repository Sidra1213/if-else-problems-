#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter the character"<<endl;
	cin>>ch;
	if(ch=='a'||ch=='A'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='e'||ch=='E'||ch=='u'||ch=='U'){
		cout<<"The character is vowel"<<endl;
	}
	else{
		cout<<"The cahracter is constant"<<endl;
	}
}
