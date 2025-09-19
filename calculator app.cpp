  #include <iostream>
  #include <iomanip>
  using namespace std;

  int main()
  {
	double num1 , num2;
	char op;
	
	cout << "========Simple Calculator========" << endl;
	
	
	//Take input from user
	cout << "Enter first number: ";
	cin >> num1;
	
	cout <<"Enter any operator (+ , - , * , /) ";
	cin >> op;
	
	cout << "Enter second number: ";
	cin >> num2;
	
	//process based on operators
	switch(op) {
		case '+':
			cout << "Result = "<< num1 + num2 << endl;
			break;
		case '-':
			cout << "Result = "<< num1 - num2 << endl;
			break;
		case '*':
			cout << "Result = "<< num1 * num2 << endl;
			break;
		case '/':
			if( num2 !=0)
				cout << "Result = "<< num1 / num2 << endl;
			
			else 
			 cout << " Error: division by zero is not allowed "<<endl;
			 break;
	default:
		cout << "Invalid operator entered. "<<endl;
	}

  system ("pause");
  return 0;
 	}

