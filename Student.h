//
//  Student.hpp
//  Degree Planning System
//
//  Created by Videsh Bridgelal on 5/3/21.
//

#ifndef Student_h
#define Student_h

#include <stdio.h>
#include <string>
#include <vector>
#include "Course.h"

using namespace std;

class Student{
public:
    void SetName(string name);
    void AddCourse(string course);
    void SetMajor(string major);
    string GetName();
    string GetMajor();
    int GetCourseCnt();
    void WithMajor();
    void ShowInfo();
    
private:
    string full_name;
    vector<string> courses;
    string major;
}

#endif /* Student_h */
