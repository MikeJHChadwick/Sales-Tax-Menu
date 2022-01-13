#include <iostream>
#include <string>
using namespace std;

/* Michael Chadwick
 5.Sales Tax
 3/22/2020 */
 
 int main()
 {
 	int item, cost, adjusted;

 	cout << "Select an item listed below to calculate its sales tax:\t" << endl;
 	cin >> item;
 	cost = item *.06;
 	adjusted = item + cost;
 	
 	switch(item)
 	{
		case 1:
			cout << "The total including tax is:\t" << adjusted << endl;
			break;
 		case 2:
 			cout << "The total including tax is:\t" << adjusted << endl;
			break;
		case 3:
			cout << "The total including tax is:\t" << adjusted << endl;
			break;
		case 4:
			cout << "The total including tax is:\t" << adjusted << endl;
			break;
		case 5:
			cout << "The total including tax is:\t" << adjusted << endl;
			break;
	}
	return 0;
 }
 
