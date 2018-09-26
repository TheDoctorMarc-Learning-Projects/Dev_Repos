#include<iostream>
#include"String.h"
using namespace std; 

void main() {
	String a; 
	cout << "a) does not have a name" << endl; 
	String b("hello"); 
	cout << "b) is called: " << b.name << endl; 
	String c(b); 
	cout << "c) is called: " << c.name << endl; 
	a = "bye"; 
	cout << "a) is called: " << a.name << endl;
	c.operator==("hello"); 
	system("pause"); 
}