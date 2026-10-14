#include <iostream>
using namespace std;

int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    name.append("@lpnu.ua");
    cout << "Your account has ID: " << name;


    // name.at(0) - виписує першу літеру name
    /* name.empty() - якщо у вводі натиснути пробіл, то залишиться пусте місце, 
    використовуємо щоб написати наприклад cout і дати підказку */
    // name.clear() - видаляє значення name, вивід cout ... << name; даватиме ...
    // name.insert(0, @) - на заданній позиції name дописує задане в дужках 
    // name.find(' ') - шукає найперший заданий символ, тут це пробіл
    // name.erase(0, 3) - видаляє з першого по останній задані номери символів
    return 0;
}