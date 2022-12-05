// Balanced_Braket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 
using namespace std;
bool match_check(char c1, char c2) {
    if (c1 == '{' && c2 == '}') return true;
    if (c1 == '[' && c2 == ']') return true;
    if (c1 == '(' && c2 == ')') return true;
    return false;
}
bool braket_check(string str)
{
    bool t1;
    int t2 = -1;
    for (int i = 0; i < str.length(); i++)
    {
        t1 = match_check(str[t2], str[i]);
        if (t2 < 0 || t1 == 0) {
            ++t2;
            str[t2] = str[i];
        }
        else {
            --t2;
        }
    }
    return t2 == -1;
}
int main()
{
    bool t;
    string str = "(){}";
    t=braket_check(str);
    if(t==1)
    {
        cout << "Balanced" << endl;
    }
    else {
        cout << "Not Balanced" << endl;
    }
}
