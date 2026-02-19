// Jared Anastacio Ferrer
// 835118894

#include <string>
#include <iostream>

template <typename T, typename U>
class box {
    public:
    box(T item, U other_item) : item_(item), other_item_(other_item) {}

    T getItem() const {
        return item_;
    }

    void setItem(T item, U other_item) {
        item_ = item;
        other_item_ = other_item;
    }

    void Print() {
        std::cout << "The first item is " 
                  << item_ 
                  << " The second item is " 
                  << other_item_ 
                  << std::endl;
    }

    private:
    T item_;
    U other_item_;
};


int main() {
    box b_pair(5, 2.2);

    b_pair.Print();
   
    return 0;
}