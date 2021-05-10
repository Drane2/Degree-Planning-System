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
#include <iomanip>
#include <fstream>

using namespace std;

// Global variables
string newl = "\n"; // for newlines
string typenum = "\n>  Enter a number: "; // prompt for choosing a feature
string border = "\n--------------------------------------------------------------------\n";

// List of options in the main menu
vector<string> menu = {"Student Records: Edit and display student info",
                       "Courses: Edit and display course info",
                       "Degree Plan: Edit and display degree plan",
                       "Semester Schedules: Edit and display semester info",
                       "Exit: Close the program"};
// List of degree plans
vector<string> degreePlans = {"CIT, Desktop Support and Microsoft Network Administration",
                            "CIT, Information Technology Cyber Security Specialty",
                            "CIT, Introductory Game Design and Development",
                            "CIT, Network Administration Cisco Specialty",
                            "COMPUTER INFORMATION TECHNOLOGY - NETWORKING",
                            "COMPUTER INFORMATION TECHNOLOGY - PROGRAMMING"};

// Edit or Display
vector<string> editDisplay = {"Edit", "Display"};

// To display the files
void readFile(string fileName)
{
    string line;
    ifstream myfile(fileName);
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << "\n";
        }
        myfile.close();
    }
    else cout << "\n> Error: file not open\n" << endl;
}

// To display a menu with options and a heading
static void showMenu(char end, string heading, vector<string> list)
{
    cout << border;
    cout << setw(0) << " " << heading;
    cout << border << newl;
    
    for(int i=0;i<list.size();i++)
    {
        auto menu_option = list[i].substr(0, list[i].find(end));
        cout << i+1 << ": " << menu_option << "\n\n";
    }
}

// To navigate the menu
void chooseOption(int x, int y)
{
    // Variables
    int z;

    if(x==1)
    {
        if(y==1)
        {
            // loadStudents();
        }
        else if(y==2)
        {
            readFile("students.txt");
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
            readFile("students.txt");
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
            showMenu('\n', "Choose a Degree Plan you'd like to display", degreePlans);
            
            cout << typenum;
            cin >> z;

            string txtfile = degreePlans[z-1] + ".txt";
            readFile(txtfile);
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

  // List the options in the menu
    showMenu(':', "Degree Planning System", menu);

  // Ask user to choose
  cout << typenum;
  cin >> x;
  
  // Call Functions
  showMenu('\n', menu[x-1], editDisplay);
  cout << typenum;

  cin >> y;

  chooseOption(x, y);
  
  return 0;
}
