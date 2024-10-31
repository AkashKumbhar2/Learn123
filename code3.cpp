//Inheritance
//Nested class
/*
#include<iostream>
using namespace std;

//Base Class
class Animal{
public:
    virtual void makeSound(){
        cout<<"Animal makes sound"<<endl;
    }
};

//Derived class
class dog : public Animal{
public:
    //Overriding the base class function
    void makeSound() override {
        cout<<"Dog barks!" <<endl;
            }
};

class cat : public Animal{
public:
    //Overriding the base class function
    void makeSound() override{
        cout<<"cat meows"<<endl;
            }
};

int main(){
    Animal*animal1 = new dog();//Pointer to Animal,but object is Dog
    Animal*animal2 = new cat();//Pointer to Animal,but object is cat

    animal1->makeSound();//Calls Dog's overridden function
    animal2->makeSound();//Calls cat's overridden function

    //Clean up memory
    delete animal1;
    delete animal2;

    return 0;
}

//Friend Function
#include<iostream>
using namespace std;

class Alex{
private:
    string secret;

public:
    Alex() : secret("Alex's Secret!"){} //Constructor

    //Friend class Declaration
    friend class Bob;
};

//Class Bob(The Friend Class)
class Bob{
public:
    void revealSecret(Alex& a){
        cout<<"Bob Knows: " <<a.secret<<endl;
    }
};

int main(){
    Alex A;  
    Bob B;
    B.revealSecret(A);
    return 0;
}

//Muliple inheritance
#include<iostream>
using namespace std;
//first base class 
class Mammal{
public:
    void fur(){
        cout<<"It has fur"<<endl;
            }
};

//Second base class
class Bird{
public:
    void fly(){
        cout<<"It can fly"<<endl;
    }
};

//Derived class
class Bat : public Mammal , public Bird{
public:
    void prop(){
        cout<<"It sleeps upside down ";
    }
};

//driver code
int main()
{
    Bat b;
    b.fur();
    b.fly();
    b.prop();
    return 0;
}

//Multilevel inheritance
#include <iostream>
using namespace std;
// Base class (Grandparent)
class Person {
public:
    void speak() {
        cout << "Person speaks." << endl;
    }
};

// Derived class (Parent inherits from Person)
class Parent : public Person {
public:
    void work() {
        cout << "Parent works." << endl;
    }
};

// Further Derived class (Child inherits from Parent)
class Child : public Parent {
public:
    void play() {
        cout << "Child plays." <<endl;
    }
};

int main() {
    // Create a Child object
    Child myChild;

    // Access methods from each level of the hierarchy
    myChild.speak(); // Inherited from Person (Grandparent)
    myChild.work();  // Inherited from Parent (Parent)
    myChild.play();  // Defined in Child

    return 0;
}

//Hierarchical Inheritance
#include <iostream>
using namespace std;
class Animal {
public:
    void breathe() {
        cout << "This animal breathes." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;
    
    myDog.breathe(); // Inherited from Animal
    myDog.bark();    // Defined in Dog
    
    myCat.breathe(); // Inherited from Animal
    myCat.meow();    // Defined in Cat

    return 0;
}
*/

//HYBRID INHERITANCE
#include<iostream>
using namespace std;

class device{
public:
    void poweron(){
    cout<<"It is a Device"<<endl;
    }
};

class phone : public device{
public:
    void phn(){
    cout<<"You can make a call"<<endl;
 }
};

class camera : public device{
public:
    void cam(){
    cout<<"You can take a picture"<<endl;
 }
};

class smartphone : public phone,public camera{
public:
    void smp(){
    cout<<"Smartphone has both features"<<endl;
 }
};

int main(){
    smartphone smt;
    smt.phone::poweron();
    smt.cam();
    smt.smp();
    smt.phn();
    return 0;
}






