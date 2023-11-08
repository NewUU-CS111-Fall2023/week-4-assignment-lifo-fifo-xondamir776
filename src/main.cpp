/*
 * Author: Zokirjonov Xondamir
 * Date: 8.11.2023
 * Name: 
 */

#include <iostream>
#include "week4e1.h"
#include "week4e2.h"
#include "week4e3.h"
#include "week4e5.h"

int main() {
    std::cout << "Task 1" << std::endl;
    // call for task 1
    std::cout << "Task 2" << std::endl;
    ex1 e;
    vector<int> v= {3, 2, 1};
    vector<pair<int, int>> a = e.sort(v);
    ex2 ee;
    cout << ee.check_ex2("{[()]}") << endl;

    std::cout << "Task 3" << std::endl;
    Expression E;
    cout << E.expression("8 9 + 1 7 - * ") << endl;
    std::cout << "Task 4" << std::endl;
    // call for task 4
    std::cout << "Task 5" << std::endl;
    TowerOfHanoi toh;
    toh.change(5, 1, 2, 3);
    return 0;
}
