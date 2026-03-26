#include <string>
#include <vector>
#include <iostream>
#include <map>

int main() {
    std::map<std::string, double> prices = {
        {"banana", 0.99},
        {"apple", 1.49},
        {"pear", 1.29}
    };

    std::string fruit;
    double price;

    while (true) {
        std::cout << "Enter a fruit name (or 'done' to quit)" ;
        std::cin >> fruit;
        if (fruit == "done") break;

        std::cout << "Enter price for " << fruit << ": ";
        std::cin >> price;
        prices[fruit] = price;
    }

    std::cout << "\nFruit Prices: \n";
    for (const auto& [name, p] : prices) {
        std::cout << " " << name << ": $" << p << "\n";
    }

    std::cout << "Raising Prices by 10%" << "\n";
    double percent = .1;
    for (auto& [name, price] : prices) {
        price *= (1.0 + percent);
    }

    std::cout << "\nNew Fruit Prices: \n";
    for (std::map<std::string, double>::iterator it = prices.begin(); it != prices.end(); ++it) {
        std::cout << " " << it->first << ": $" << it->second << "\n";
    }

    return 0;
};