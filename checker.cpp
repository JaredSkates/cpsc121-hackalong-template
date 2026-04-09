// Jared Anastacio Ferrer
// CWID: 835118894
// Hack a long replacing Worksheet 21 @ 11 AM 
#include <vector>
#include <iostream>
#include <string>
int sumVector(const std::vector<int>& myVector, int index);

int main() {
    std::vector<int> numList = {3, 5, 7, 9, 13};
    int final_total = sumVector(numList, 0);

    std::cout << "The total is " << final_total << std::endl;
    return 0;
}

int sumVector(const std::vector<int>& myVector, int index) {
    if (index == myVector.size()) return 0;

    return myVector[index] + sumVector(myVector, index + 1);
}