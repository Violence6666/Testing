//Код рабочий я закомментировал не все ошибки

#include <iostream>

using namespace std;

void cheers(int n){
for (int i = 0; i < n; i++) {  // {}, ++
cout << "Cheers! "; // cout, ;
cout << endl; // ;
}
}

double cube(double x)
{
return x * x * x;
}

int main(){
cout << "Give me a number: "; // ;
double side; // ;
cin >> side; // ;
double volume = cube(side); // вызов функции, ;
cout << "A " << side << "-foot cube has a volume of ";
cout << volume << " cubic feet.\n";
cheers(27);
return 0; //return
}
