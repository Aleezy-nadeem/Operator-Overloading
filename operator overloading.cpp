#include<iostream>
using namespace std;

class temp{
	private:
		int count;
	public:
		temp():count(0){
			
		}
		
		void inc(){
			count++;
		}
		temp operator ++(){
			count++;
			temp t1;
			t1.count = count;
			return t1;
		}
		void print_value(){
			cout<<"the value of count is: "<<count<<endl;
			
		}
};

int main(){
	temp t1,t2;
 	++t1;
	t2 = ++t1;
	t2++;
	
	
	
	t2.print_value();
}