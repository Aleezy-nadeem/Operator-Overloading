#include<iostream>
using namespace std;

class Counter{

 private:
 	int count;
 public:
 	Counter():count(0){
 		
	 }
	 Counter(int c):count(c){
	 	cout<<"parametirzed consturtor called:"<<endl;
	 }
 	void operator ++(int){
 		++count;
 		
	 }
 	Counter operator +(Counter c2){
 		
 		int temp = count + c2.count;
 		return Counter(temp); // anonymous/nameless objects
	 }
	 bool operator >(Counter c2){
	 	return count > c2.count;
	 	
	 }
	 
	 void print_value(){
	 	cout<<"value of count is: "<<count<<endl;
	 }
};


int main(){
	Counter c1(5),c2(10), result;
	c1++;
	if(c1>c2)
		cout<<"c1 is greater than c2; "<<endl;
	}
	else{
		cout<<"yar it's false"<<endl;
	}
	result = c1 + c2;
	result.print_value();
}
