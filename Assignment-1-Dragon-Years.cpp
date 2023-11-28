/*==========================================================

 Title:       Assignment 1 - Dragon Years
 Course:      CIS 2252
 Author:      Mohammed Tanvvir
 Date:        < 5/28 /23 >
 Description: Dragon age

 ==========================================================
*/
#include <iostream>

using namespace std; 

int main()
{
//Formula: Wizard age = 21 +((Age-2)x4)
  string name;
  float age;
  

 cin>>name>>age;
  
  cout<<"The dragon named "<< name << " is "<< 21+((age-2)*4)<< " years old in wizard years.";
 

                   
  return 0;
}







