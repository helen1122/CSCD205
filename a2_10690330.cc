#include <iostream>
using namespace std;

	int main(){
		int a, b;
		bool isPrime = true;
	cout<<"Welcome to Helen's Prime number indicator"<<endl;
	cout<<"Enter a positive number: ";
	cin>>a;
	for(b=2; b<=a/2; ++b){
	if(a%b==0){
	     isPrime = false;
	  break;
     }

	}if(isPrime){
		cout<<"This is a prime number";
	}else{
		cout<<"This is not a prime number";
	}
	
return 0;
}
