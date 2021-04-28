//
//  main.cpp
//  Degree Planning System
//
//  Created by Taj on 4/27/21.
//  Copyright © 2021 Cin>>City Assassins. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string newl = "\n";            // for newlines
string typenum = "\n> ";       // prompt for choosing a feature

void chooseOption(int x, int y)
{
    if(x==1)
    {
        if(y==1)
        {
            // loadStudents();
        }
        else if(y==2)
        {
            // showStudents();
        }
    }
    else if(x==2)
    {
        if(y==1)
        {
            // loadCourses();
        }
        else if(y==2)
        {
            // showCourses();
        }
    }
    else if(x==3)
    {
        if(y==1)
        {
            // loadDegreePlan();
        }
        else if(y==2)
        {
            // showDegreePlan();
        }
    }
    else if(x==4)
    {
        if(y==1)
        {
            // loadSemester();
        }
        else if(y==2)
        {
            // showSemester();
        }
    }
    else if(x==5)
    {
        // exit();
    }
}

int main()
{
  // Declare variables
  int x, y;
  vector<string> menu = {"Students: Edit and display student info",
                         "Courses: Edit and display course info",
                         "Degree Plan: Edit and display degree plan",
                         "Semester: Edit and display semester info",
                         "Exit: Close the program"};

  // List the options in the menu
  cout << "\nWelcome to the Degree Planning System\n\n";
  for(int i=0;i<menu.size();i++)
  {
    auto menu_option = menu[i].substr(0, menu[i].find(':')); // So it doesn't print the
    cout << i+1 << ") " << menu_option << newl;              // descripttion
  }

  // Ask user to choose
  cout << typenum;
  cin >> x;
  
  // Call functions
  cout << newl << menu[x-1] << newl;
  cout << "\n1) Edit";
  cout << "\n2) Display\n";
  cout << typenum;

  cin >> y;

  chooseOption(x, y);
  
  return 0;
}
