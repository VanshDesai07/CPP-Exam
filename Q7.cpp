#include <iostream>
using namespace std;

class Animal {
public:
 
    virtual void sound() const = 0; 

    virtual void move() const = 0;   

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() const override {
        cout << "Dog barks: Woof Woof!" << endl;
    }

    void move() const override {
        cout << "Dog runs!" << endl;
    }
};

class Bird : public Animal {
public:
    void sound() const override {
        cout << "Bird chirps: Tweet Tweet!" << endl;
    }

    void move() const override {
        cout << "Bird flies!" << endl;
    }
};

int main() {
    
    Animal* animals[2];

    animals[0] = new Dog();
    animals[1] = new Bird();

    for (int i = 0; i < 2; ++i) {
        animals[i]->sound();  
        animals[i]->move();   
        cout << endl;
    }

    delete animals[0];
    delete animals[1];

    return 0;
}