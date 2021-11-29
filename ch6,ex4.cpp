#include<iostream>
#include<stdio.h>
#include<cstring>
#include <string>
#include <math.h>
#include <vector>


/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ivan Pavlov
 */

//chapter 6, ex 4
//Define a class Name_value that holds a string and a value. 
//Rework exercise 19 in Chapter 4 to use a
//vector<Name_value> instead of two vectors.
using namespace std;
class Name_value {       //define the class
  public:             
    string Name;      
    int value;  
};


int main(){
	std::vector <Name_value> people;
	int i;
	Name_value add;
	string nameToAdd;
	cout << "To exit at eny time please enter Noname for the name, and 0 for the value."<<endl;
	while(people.empty() || people.back().Name !="Noname" || people.back().value != 0){
			cout << "Please enter a name: ";
			cin >> nameToAdd;
			
			for(auto i = people.begin(); i != people.end() ; i++){	//check for same names
				if(i->Name == nameToAdd){
//					exit while loop with error
					goto stop;
					}
				}
			add.Name = nameToAdd;
			cout << "Please enter a value: ";
			cin >> add.value;
			people.push_back(add);
			
		}
	for (auto i = people.begin(); i != people.end(); i++){	//print the vector
		cout << i->value << ", " << i->Name << endl;
	}
	return 0;
	stop: cout << "ERROR: Name entered twice.";
	return -1;
}
