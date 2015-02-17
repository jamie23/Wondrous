#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void recWonder(int x, int count){

	cout << "Current Number: " << x << endl << "count: " << count << endl << endl;

	if(x!=1){
		count++;
		if(x%2==0){
			recWonder(x/2,count++);
		}else{
			recWonder((3*x+1),count++);
		}
	}else{
		cout << "It took : " << count << " amount of calculations." << endl;

	}
}

void recWonder(int x){
	int count = 0;

	if(x!=1){
		cout << "Current Number: " << x << endl << "count: " << count << endl << endl;
		count++;
		if(x%2==0){
			recWonder(x/2,count++);
		}else{
			recWonder((3*x+1),count++);
		}
	}else{
		cout << "It took : " << count << " calculations." << endl;
	}
}

int main(){
	int number = 0;
	cout << "Enter a number: ";
	cin >> number; 
	recWonder(number); 
	return 0; 
}
