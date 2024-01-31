#include <iostream>

using namespace std;

void addServo(int a, int b,int *c){
    *c = a + b;
}

int main()
{
    
    int servo1 = 180;
    int *ptr_servo = &servo1;
    int servo2 = 90;

    int hasil;

    // cout << &servo;
    // cout << ptr_servo;

    addServo(servo1,servo2, &hasil);

    cout << hasil;
}