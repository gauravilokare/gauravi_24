#include <iostream>
#include <string>
using namespace std;

class Student {
private :
int rollNumber;
string name;
float marks [3];

float total;

float percentage;

string result;
public :
void acceptDetails()
{
    cout << "Enter rollNumber: ";
cin >> rollNumber;
cin.ignore();

cout << "Enter name: ";

getline(cin, name);

cout << "Enter marks for 3 subjects: ";

for (int i = 0; i < 3; i++){
cin >> marks [i];
}
}

void calculateResult() {

total = 0;

for (int i = 0; i < 3 ; i++ ) {
total += marks[i];
}

percentage = total /3.0;

if (percentage >= 60) result = "first class" ;

else if (percentage >= 50) result = "Second Class";
else if (percentage >= 40) result = "pass";

else result = "Fail";
}
void displayDetails() {
cout << "\n----- student details -----" << endl ;
cout << "rollNumber :" << rollNumber << endl ;
cout << "name :" ;
cout << "marks:" ;

for (int i=0; i < 3; i++) 
{ cout << marks[i] << " " ;
}
cout << endl;

cout << "total marks:"  << total << endl;
cout << "percentage :"  << percentage << "%" << endl ;
cout << "result :"  << result << endl ;
}
};

    int main ()
{

Student s ;

s.acceptDetails ();

s.calculateResult();

s.displayDetails();

return 0 ;
}