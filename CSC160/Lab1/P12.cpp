#include<iostream>
using namespace std;

int main (){
    int cases_per_day, bottles_per_day, profit_per_day,profit_per_year,end,bottle_total,bottle_year,bottle_10_year,profit_per_10_years;    
    int bottles_per_case = 12;   
    double profit_per_bottle = 0.22;  
  
        cout << "Press enter after entering each number \n";  
        cout << "Enter number of cases \n";   
        cin >> cases_per_day ;
       
           profit_per_day = cases_per_day * bottles_per_case * profit_per_bottle;    
        profit_per_year = 365 * profit_per_day;
        bottle_total=cases_per_day*bottles_per_case;
        bottle_year=bottle_total*365;
        bottle_10_year = bottle_year*10;
        profit_per_10_years = profit_per_year*10;
        cout << "The store sold : " <<bottle_total<<" bottles today\n";   
        cout << "The store will sell : " <<bottle_year<<" bottles  in a year\n";   
        cout << "The store will sell : " <<bottle_10_year<<" bottles in 10 years\n";   
        cout << "The store has a made : $";   
        cout << profit_per_day; 
        cout << "  per day. \n";   
        cout << "That means the profit for one year will be: $"; 
  
        cout << profit_per_year << endl;
        cout << "That means the profit for 10 years will be: $";
        cout<<profit_per_10_years<<endl;
        cout << "Good business?! \n";  
        cin>>end;  
        return 0;
}


