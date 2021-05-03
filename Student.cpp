//
//  Student.cpp
//  Degree Planning System
//
//  Created by Videsh Bridgelal on 5/3/21.
//

#include "Student.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void Student::SetName(string name){
    full_name = name;
}

void Student::AddCourse(string course){
    courses.push_back(course);
}

void Student::SetMajor(string major){
    this->major = major;
}

string Student::GetName(){
    return full_name;
}

string Student::GetMajor(){
    return major;
}

int Student::GetCourseCnt(){
    
}

void Student::WithMajor(){
    
}

void Student::ShowInfo(){
    //Output name and major
    cout << setw(15) << right;
    cout << full_name << '\t';
    cout << major << '\t';
    
    //Output each course they're taking
    for(int i = 0; i < courses.size(); ++i){
        cout << courses.at(i) << ' ';
    }
}
