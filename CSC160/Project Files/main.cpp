#include<iostream>
#include<sstream>
#include<conio.h>
using namespace  std; 
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_X 120

class Rooms{
    public:
    string a = "room1";
    string b = "room2";
    string c = "room3";
    string d = "room4";
    string e = "room5";
    string f = "room6";
    string g = "room7";
};



class Player{
public:
    char name;
    int location = 0;
   
    int speed; 
   



//this is the player object 

};
void StartGame(){
    //welcome the player h4
};
//location 
class Location{
    public:
     int room[9] ={1,2,3,4,5,6,7,8,9}; 
     
        

};



int main(){
   //
char key = getch();
int value = key;
Player player;
Location location ;
Rooms rooms;
string currentRoom;
char arrowKeys;

int playerLocation= player.location;

//welcom the player 



cout<< "Welcome to our game\n\n";
cout<< "Do you have arrowkeys on your keyboard?\n\n (please enter Y or N)";
cin>>arrowKeys;
if(arrowKeys=='y'|| arrowKeys=='Y'){
    // arrow key cases

while(value != KEY_X)
{
    switch(getch())
    {
        case KEY_DOWN:
        {cout<<"you moved down\n\n";};
        //this is where the code to enter a new room. From a populated list of rooms at random 
        break;
        case KEY_UP:
        {cout<<"you moved up\n\n";};
        break;
        case KEY_LEFT:
        {cout<<"you moved left\n\n";};
        break;
        case KEY_RIGHT:
        {cout<<"you moved right\n\n";};
        break;


    }
}
}







// This is the key bind location 

while(value != KEY_X)
{
    switch(getch())
    {
        case KEY_DOWN:
        {cout<<"you moved down\n\n";};
        //this is where the code to enter a new room. From a populated list of rooms at random 
        break;
        case KEY_UP:
        {cout<<"you moved up\n\n";};
        break;
        case KEY_LEFT:
        {cout<<"you moved left\n\n";};
        break;
        case KEY_RIGHT:
        {cout<<"you moved right\n\n";};
        break;


    }
}



}