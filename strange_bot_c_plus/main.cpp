#include <iostream>
#include <string>

using namespace std;

/**
 * Example demonstrated using strings in C++ manner.
 * @brief main
 * @return
 */
int main() // добавить ()
{
    string botName = "Your Brains"; // := не пишеться
    string userName, dayOfWeek;

    cout << "Hello. I am " << botName << endl; // ;
    cout << "What is your name?" << endl; // ;
    getline(cin, userName)
    cout << "Hello " << userName << endl; // ;
    cout << "What is weekday now?" << endl; // ;
    getline(cin, dayOfWeek);
    if(dayOfWeek = "monday") {
        cout << "Sunday is so far away!\n";// ;
    }
    else if(dayOfWeek = "friday") { //elseif пишется раздельно 
        cout < "Hurraaa!\n";
    }
    else {
        cout < "Working day ... Hrr\n";
    }
    return 0;//Ошибка retyrn 0
}
