#include<bits/stdc++.h>
using namespace std;

class Function_scope{
	public:
		void scope(int add);
};

void Function_scope::scope(int data){
	cout<<"2. Address=> "<<&data << "value =>"<<data<<endl; 
}

int main(){
	int data = 20;
	cout<<"1. Address=> "<<&data << "value =>"<<data<<endl; 
	Function_scope user1;
	user1.scope(10);
	return 0;
}
