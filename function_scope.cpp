#include<bits/stdc++.h>
using namespace std;

class Animal{
	public:	explicit Animal(string name);
		void sayhello(string message);
		string name;
};

Animal::Animal(string name){ 		//memory address of name is fixed for all objects
	this->name=name;
	cout<<"1. Address=> "<<&this->name<<" Value=>"<<this->name<<endl;
	cout<<"2. Address=> "<<&name<<"value=> "<<name<<endl;
}

int main(){
	Animal cat("abc");
	Animal dog("def");
	return 0;
}
