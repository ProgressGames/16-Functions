#include <iostream>
#include <ctime>
using namespace std;
// �������

void foo() { // ���� ������������� �������� � ��� �������

    cout << "I func), me use" << endl; //���� �������, (�� ��� ��� ����� ������)
    return;
}

int Sum(int a, int b) {

    int result;
        result = a + b; // ����� �������� ���: return a + b;
        return result;
};

int main() {
    
    foo(); //����� �������
    int c;
    c = Sum(2,5); // ����������� ���������
    cout << c << endl;
}
