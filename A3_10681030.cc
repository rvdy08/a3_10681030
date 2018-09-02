#include <iostream>
using namespace std;
int main()
{  int s=0;
  //Input exam score
cout << "University of Ghana Grading System" << endl;
cout << "Input Exam score" << endl;
cin >> s;
//If statement for assigning exam grade
 if ( s >= 90)
 cout << "You had grade A+" << endl;
 
 else if (s >= 80)
 cout << "You had grade A" << endl;
 
 else if (s >= 75)
 cout << "You had grade B+" << endl;
 
 else if (s >= 70)
 cout << " You had grade B" << endl;
 
 else if (s >= 65)
 cout << "You had grade C+" << endl;
 
 else if (s >= 60)
 cout << "You had grade C" << endl;
 
  else if (s >= 55)
  cout << "You had grade D+" << endl;
  
  else if (s >= 50)
  cout << "You had grade D" << endl;
  
  else if (s >= 45)
    cout << "You had grade E" << endl;
    
    else if (s >= 40)
    cout << "You had grade F" << endl;
    return 0;
}


