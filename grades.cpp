#include <iostream>
#include <fstream> //allow to access the ifstream file
using namespace std;

int main() 
{
	fstream grades; //works as input 
	grades.open ("grades.txt"); //opening the text file 
	if(grades.is_open()){
		string line;  //Accessing the line
		while(getline(grades,line)){
		
			cout << line << endl;  //print the line
		}
		
	}
	system("pause>0"); //to pause the program

	return 0;
}