#include<bits/stdc++.h>
using namespace std;

class Test{
	public:	explicit Test();
		~Test();
		void dostuff();
};

Test::Test(){
	cout <<this<<"Contructor Created"<<endl;
}
Test::~Test(){
	cout<<this<<"Destroy"<<endl;
}
void Test::dostuff(){
	cout<<"info";
}

void manage(){
	unique_ptr<Test> t(new Test());
	t->dostuff();
	//pointer automatic deleted
}
int main(){
	manage();
	return 0;
}

