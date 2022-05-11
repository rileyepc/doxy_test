// using function definition after main() function
// function prototype is declared before main()

#include <iostream>

using namespace std;

// function prototype
/**
 * @brief derived class test
 * @class a is the derived class
 * @class b is the derivaed class
 * @param a this is parameter describes a
 * @param b this parameter descirbes b
 * @return int 
 */
int add(int, int);

int main() {
    int sum;

    // calling the function and storing
    // the returned value in sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}

// function definition
int add(int a, int b) {
    return (a + b);
}