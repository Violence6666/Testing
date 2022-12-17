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

    сout << "Hello. I am " << botName << endl
    сout << "What is your name?" << endl
    getline(cin; userName)
    cout << "Hello " << userName << endl
    cout << "What is weekday now?" << endl
    getline(cin; dayOfWeek);
    if(dayOfWeek = "monday") {
        cout << "Sunday is so far away!"\n;//Ошибка "Sunday is so far away!/n";
    }
    else if(dayOfWeek = "friday") { //elseif пишется раздельно 
        cout < "Hurraaa!"\n;//"Hurraaa!\n"
    }
    else {
        cout < "Working day ... Hrr"\n;//"Working day ... Hrr\n"
    }
    return 0;//Ошибка retyrn 0
}
