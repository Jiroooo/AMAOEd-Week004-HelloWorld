#include <iostream>
using namespace std;

class activity{
public:
void activityone();
void activitytwo();
void activitythree();
void activityfour();
void activityfive();
void activitysix();
};

void activity::activityone() {
  cout << "\n" << "Activity 1:" << "\n";
  cout << "\n" << "For Loop:" << "\n";
 for(int i=1; i<=5; i++){
      cout << i << "\n";
    }
  cout << "\n" << "While Loop:" << "\n";
   int i = 1;
   while( i<=5) {
     cout << i << "\n";
     i++;
   }
  cout << "\n" << "Do/While Loop:" << "\n";
   int k = 1;
   do{
     cout << k << "\n";
     k++;
   }
   while(k<=5);
}

void activity::activitytwo() {
  cout << "\n" << "Activity 2:" << "\n";
  string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  cout << months[9] << "\n";
  cout << months[10] << "\n";
  cout << months[11];
} 

void activity::activitythree() {
  cout << "\n" << "Activity 3:" << "\n";
  int arr[10] = {};
  for(int i=0; i<=9; i++){
  arr[i] = i*10;
  cout << arr[i] << "\n";
  }
  
  for(int i=0; i<=9; i+=3){
  arr[i] = i*10;
  cout << arr[i] << "\n";

  }
}

void activity::activityfour() {
   
  int i; 
  int EnterNumber = 5;
  float Sum;
  float Arr[500];
  float average;

  cout << "\n" << "Activity 4:" << "\n";
  
  cout << "Enter " << EnterNumber << " Numbers \n";
   for(i = 0; i<EnterNumber; i++) {
     cin >> Arr[i];
   }

  Sum = 0;
  for(i = 0; i<EnterNumber; i++) {
    Sum += Arr[i];
  }

  average = (float)Sum/EnterNumber;
  cout << "Average = " << average;

}

void activity::activityfive() {
  cout << "\n" << "Activity 5:" << "\n";
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8 ,9}, i;
  for(i=(9-1); i>=0; i--){
   cout << arr[i] << " ";
  }
}

void activity::activitysix() {
  cout << "\n" << "Activity 6:" << "\n";
  int  arr[5] = {}, i;
  cout << "Please input 5 numbers you want to arrange" << "\n";
  for(i=0; i<5; i++){
  cin>>arr[i];  
  }
  cout << "\n" "Ascending Order:" << "\n";
  for(i=0; i<5; i++){
    cout << arr[i] << "\n";
  }
  cout << "\n" "Descending Order" << "\n";
  for(i=(5-1); i>=0; i--){
    cout << arr[i] << "\n";
  }
}

int main() {

  int activitynumber;

  cout << "Please choose an activity between 1 to 6" << "\n";
  cin >> activitynumber;

    if(activitynumber == 1){
    activity actobject;
    actobject.activityone();
    };

    if(activitynumber == 2){
    activity actobject;
    actobject.activitytwo();
    };

    if(activitynumber == 3){
    activity actobject;
    actobject.activitythree();
    };

    if(activitynumber == 4){
    activity actobject;
    actobject.activityfour();
    };

    if(activitynumber == 5){
    activity actobject;
    actobject.activityfive();
    };

    if(activitynumber == 6){
    activity actobject;
    actobject.activitysix();
    };
}

