// C++ Homework 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<string>
#include <regex>

using namespace std;

void ProblemOne(int a, int b)
{
	int count = a;
	while (count <= 1000)
	{
		while (count % b == 0)
		{
			cout << count << '\t';
			break;
		}
		count++;
	}
}
void ProblemTwo()
{
    
    string str = "Hello World";

    //Initialize reverse
    string rev = "";

    //Iterate input string in revrese order
    for (int i = str.length() - 1; i >= 0; i--) {
       
        rev = rev + str[i];
    }
	cout << str<< endl;
    cout << rev;
 
}
void ProblemThree(string str)
{

   
}


int main()
{
	cout << "Problem One"<< endl;
	ProblemOne(5,10);
	cout << endl <<"Problem Two" << endl;
	ProblemTwo();
	cout << endl<< "Problem Three" << endl;
	ProblemThree("the cake is a lie");
	
	
	return 0;
}

