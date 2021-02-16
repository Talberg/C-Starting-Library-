#include <iostream>
using namespace std;
int main(void)
{
int x,y,z, p, q, r; // (A)
int numArray[3];
int total;
int count;
count=0;
total=0;
int temp;

 double average;
  int numGrades;
 // prompt the user:
 cout << "How many grades are you entering?" << endl;
 cin>>numGrades;
 // read and store six integers: 
 //how many grades? 
 cout<<"Please enter your grades one at a time, the average will be displayed after you enter the last number.\n";

while (count<numGrades){
cout<<"Grade :"<<count+1<<endl;
cin>>temp; 

total= total+temp;
count ++;


cout<<"Current Total :"<<total<<endl;
}; 

average= total/numGrades;
 cout << "The average is " << average << endl;
 cin>>numGrades;
 return 0;
}