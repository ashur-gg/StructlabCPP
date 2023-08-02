// Title : Airport Stats
// Desc  : Use structs to hold information on plane stats
// Author: Ashur Baroutta
// Date  : 06/20/23


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


// monthly stats structure to hold travel info

struct monthlystats{
    float landed, departed, maxday, minday;
};

int main(){

    // array of structs to hold monthly data
    monthlystats months[12];
    string month[12] = {"Jan", "Feb","March","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    // variables for tracking various stats
    float totalintheyear=0.0;
    float totaldepartedinyear=0;
  
    float mostinday = months[0].maxday;
    float leastinday = months[0].minday;
  
    float avglanded = 0;
    float avgdeparted = 0;
  
    string maxlandingmonth = month[0];
    string minlandingmonth = month[0];
  

    // data from user for each months flights
    for(int i = 0; i<12; i++){

      cout << "Enter stats for " << month[i] << ":" << endl;

      // total number of landed
      cout << "Total number of planes that landed : ";
      cin >> months[i].landed;

      // total number of planes departed
      cout << "Total number of planes that departed : ";
      cin >> months[i].departed;

      // max number of planes that landed in a day
      cout << "Most amount of planes that landed in a day : ";
      cin >> months[i].maxday;

      // min number of planes that landed in a day
      cout << "Least amount of planes that landed in a day : ";
      cin >> months[i].minday;

      cout << endl;
      
    }
    

    // calculate our stats

  for(int i = 0; i<12;i++){

    // total for landed/departed
    totalintheyear += months[i].landed;
    totaldepartedinyear += months[i].departed;

    // track which month had max in a day
    if(months[i].maxday > mostinday){
      mostinday = months[i].maxday;
      maxlandingmonth = month[i];
    }

    // which had min in day
    if(months[i].minday < leastinday){
      leastinday = months[i].minday;
      minlandingmonth = month[i];
    }
    
  }

    // averages
    avglanded = totalintheyear / 12.0;
    avgdeparted  = totaldepartedinyear / 12.0;



    cout << fixed << setprecision(2);
    // outputs
     cout << "Travel info for the year : " << endl << endl;
     cout << "Avg monthly number of landed planes : " << avglanded << endl;
     cout << "Avg monthly number of departed planes : " << avgdeparted << endl;
     cout << "Total number of landings : " << totalintheyear << endl;
     cout << "Total number of departings : " << totaldepartedinyear << endl;
     cout << "Max number of planes that landed on any one day : " << mostinday << " in " << maxlandingmonth << endl; 
     cout << "Min number of planes that landed on any one day : " << leastinday << " in " << minlandingmonth << endl;
  
  return 0;
}