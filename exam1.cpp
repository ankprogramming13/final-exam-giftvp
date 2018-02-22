#include <iostream>
using namespace std;

int main()
{
     float student_score,max_score,student_percent;

       cout << "Enter student score : ";
       cin >> student_score;
       cout << "Enter max score : ";
       cin >> max_score;

       student_percent =  (student_score / max_score) * 100.0;
        cout << student_percent << "% ";
        {
            cout << "Pass";
        }

         {
             cout << "Fail";
         }
           cout << endl << endl;

            return 0;
}
