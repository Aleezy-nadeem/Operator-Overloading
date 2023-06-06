#include<iostream>
using namespace std;
class Cube{
	private:
		double length;
		double width;
		double height;
	public:
	    Cube(){
	    	length=0.0;
	    	width=0.0;
	    	height=0.0;
		}	
		Cube(double l, double w, double  h ){
			length = l;
			width = w;
			height = h;
		}
		void Display(){
			cout<<"Length: "<<length<<endl;
			cout<<"Width: "<<width<<endl;
			cout<<"Height: "<<height<<endl;
		}
		Cube operator +( Cube&y){
			double templength = length + y.length;
			double tempwidth = width + y.width;
			double tempheight = height + y.height;
		    return Cube( templength , tempwidth , tempheight);
			
		} 
		Cube operator -( Cube&y){
			double templength = length - y.length;
			double tempwidth = width - y.width;
			double tempheight = height - y.height;
		    return Cube( templength , tempwidth , tempheight);
		} 
		Cube operator *( Cube&y){
			double templength = length * y.length;
			double tempwidth = width * y.width;
			double tempheight = height * y.height;
		    return Cube( templength , tempwidth , tempheight);
		} 
		Cube operator /( Cube&y){
			double templength = length / y.length;
			double tempwidth = width / y.width;
			double tempheight = height / y.height;
		    return Cube( templength , tempwidth , tempheight);
		} 
		void operator =( Cube&y){
			length = y.length;
			width = y.width;
			height = y.height;
		} 
	    bool operator ==( Cube&y){
	    	return (length == y.length) && (width == y.width) && (height == y.height);
		} 		 
};
int main(){
	Cube c1(5.5,2.0,3.5) , c2(5.0,2.0,1.5);
	Cube c3 = (c1 + c2);
	c3.Display();
	cout<<endl;
	if ( c1 == c2 ){
		cout<<"true";
	}
	else{
		cout<<"False";
	}	
}
