#include<iostream>
using namespace std;



class Temp{
	private:
		int a;
		int b;
	public:
		Temp():a(1),b(2){
		}
		void printObjectAddress(){
			this->a = 5;
			cout<<"The address of the object is: "<<this<<endl;
			//return *this;
		}
};

int main(){
//	Temp t;
//	t.printObjectAddress();
//	Temp t1;
//	t1.printObjectAddress();

 char *msg = "this is my work";
 cout<<msg[14];
}
