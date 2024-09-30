#include <iostream>
#include <ctime>
using namespace std;
// Функции

void foo() { // Типо возвращаемого значения и имя функции

    cout << "I func), me use" << endl; //Тело функции, (то что она будет делать)
    return;
}

int Sum(int a, int b) {

    int result;
        result = a + b; // Лучше написать так: return a + b;
        return result;
};

int main() {
    
    foo(); //Вызов функции
    int c;
    c = Sum(2,5); // передаються параметры
    cout << c << endl;
}
