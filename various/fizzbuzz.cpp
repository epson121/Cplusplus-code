#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

int i ;
//try one
/*
for (i = 1; i <= 100; i++){

	if (i % 3 == 0 && i % 5 != 0){
		cout << "fizz" << endl;
	}
	else if(i % 5 == 0 && i % 3 != 0){
		cout << "buzz" << endl;
	}
	else if(i % 5 == 0 && i % 3 == 0){
		cout << "fizzbuzz" << endl;
	}
	else{
		cout << i << endl;
	}
}

//try two
for (i = 1; i <= 100; i++){
	if (i % 15 == 0){
		cout << "Fizzbuzz" << endl;
	}
	else if (i % 3 == 0){
		cout << "fizz" << endl;
	}
	else if(i % 5 == 0){
		cout << "buzz" << endl;
	}
	else{
		cout << i << endl;
	}
}
*/
//try three
for (i = 1; i <= 100; i++){

	(i % 15 == 0) ? cout << "fizzbuz" << endl : (i % 3 == 0) ? cout << "fizz" << endl : (i % 5 == 0) ? cout << "buzz" << endl : cout << i << endl ;

}
system("PAUSE");
return 0;

}