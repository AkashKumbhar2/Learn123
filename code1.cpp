//Fundamentals of OOP
'''
//objects and classes
#include<iostream>
using namespace std;
class car{
    public:
    string company;
    string color;
    int series;

    void displayInfo(){
        cout<<"company:"<<company<<endl<<"color:"<<color<<endl<<"series:"<<series<<endl;  
         }
};
''
int main() {
    car brand;
    brand.company="audi";
    brand.color="black";
    brand.series=12;
    brand.displayInfo();
    return 0;
}






//Encapsulation
#include<iostream>
using namespace std;
class Encapsulation
{
    private:  //Data hidden from outside world
    int x;

    public:
    // Function to set value of
    // variable x
        void set(int a) {x =a;}

    // Function to return value of
    // variable x

        int get() {return x;}
};
//Driver Code
int main()
{
    Encapsulation obj;
    obj.set(5);
    cout<<obj.get();
    return 0;
}





//Abstraction
#include<iostream>
using namespace std;
class implementAbstraction
{
    private:
    int a,b;

    public:
        // method to set values of
    // private members
    void set(int x,int y)
{  
    a=x;
    b=y;
}

void display()
{
    cout<<"a =  "<<a<<endl<<"b =  "<<b<<endl;
}
};
int main()
{
    implementAbstraction obj;
    obj.set(10,10);
    obj.display();
    return 0;
}




//Functions
#include<iostream>
using namespace std;

// Function that adds two numbers
int add(int a,int b)
{
// Returns the sum of a and b
    return(a+b);
}
int main()
{
    cout<<"Addition is:"<<add(1,1); //You can combine the calling of function and outputting of the result
    return 0;
}

#include<iostream>
using namespace std;
void greet(){
    cout<<"Hello World";
}
int main()
{
    greet();
    return 0;
}




//Constructor
#include<iostream>
using namespace std;
class ToyCar
{
    public:
    string color;
    int wheels;

    ToyCar(string c,wheels w){
        color=c;
        wheels=w;
        return 0;
    }
};

#include <iostream>
using namespace std;

class SimpleClass {
public:
    // Constructor
    SimpleClass() {
        cout << "Constructor called: Object created." << endl;
    }

    // Destructor
  //  ~SimpleClass() {
    //    cout << "Destructor called: Object destroyed." << endl;
   // }
};

int main() {
    SimpleClass obj; // Create an object of SimpleClass
    // The constructor is called when the object is created
    // The destructor will be called automatically when obj goes out of scope

    return 0; // End of main function
}

#include <iostream>
using namespace std;

class Car {
private:
    string model; // Member variable to hold the car's model

public:
    // Constructor to initialize the car model
    Car(string carModel) {
        model = carModel;
        cout << "Constructor called: Car model is " << model << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor called: Destroying car model " << model << endl;
    }

    // Method to display the car model
    void display() {
        cout << "Car model: " << model << endl;
    }
};

int main() {
    Car myCar("Toyota"); // Create an object of Car, constructor is called
    myCar.display();     // Call the display method to show the car model

    // When myCar goes out of scope, the destructor is automatically called
    return 0; // End of the program
}
'''
