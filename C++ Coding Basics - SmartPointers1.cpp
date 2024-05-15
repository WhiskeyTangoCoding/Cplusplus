// // Licensed under the MIT license. See LICENSE file in the project root for full license information.

/**/

/*====================================================    | GENERAL NOTES |    ======================================================*/

//--- C++ Coding Basics - SmartPointers1.cpp | C++ for Beginners

---

// SmartPointers1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

/*==============================================    Code Referencing Above    ======================================================*/


/* Introduction to 'General Coding Layout' for Beginners in C++ */
// 'Declaration' of a Functon()

#pragma once
class Console {
public:
    Console();                                           // constructor
    ~Console();                                          // destructor

    Console(string name, string type, int members) {
        *itsName = name;
        *itsType = type;
        *itsMembers = members;
    }

    void introduceMe() {
        cout << "Type: " << *itsType << endl;
        cout << "Name: " << *itsName << endl;
        cout << "Members: " << *itsMembers << endl;
    }

    string GetName() const { return *itsName; }
    void SetName(string name) { *itsName = name; }

    string GetType() const { return *itsType; }
    void SetType(string type) { *itsType = type; }

    int GetMembers() const { return *itsMembers; }
    void SetMembers(int members) { *itsMembers = members; }

private:
    string* itsName;
    string* itsType;
    int* itsMembers;
};

Console::Console() {
    cout << "Simple Console Constructor activating..." << endl;
    itsName = new string("PureArch ");
    itsType = new string("Computer Services ");
    itsMembers = new int (170);
}

Console::~Console() {
    cout << "Simple Console Destructor deleting...\n" << endl;
    delete itsType, itsName, itsMembers;
    cout << "Please press ENTER twice to exit console..." << endl;
}

void WriteLine();

/*================================================    End of Declaration    ========================================================*/

int main() {

    /*ConsoleTutorial.cpp : This file contains the 'main' function.*/
      
    Console* workString = new Console;

    WriteLine();

    //workString->introduceMe();

    workString->GetName();
    workString->SetName("PureArch Exanded");
    workString->GetName();
    delete workString;

    system("pause>0");
    return 0;
    
}

/*=======================================================    End Main    ============================================================*/

    // 'Definition' of a Function()
    /**/

void WriteLine() {
    cout << "Hello World!\n" << endl;

}

/*=====================================================   End  of  Listing    =======================================================*/
