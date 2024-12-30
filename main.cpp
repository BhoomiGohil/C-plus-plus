#include <iostream>
using namespace std;

// Class definition for Car
class Car
{
public:
    string brand;
    void drive()
    {
        cout << "Driving " << brand << endl;
    }
};

// Class definition for Student with encapsulation
class Student
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a; // Set the student's age
    }
    int getAge()
    {
        return age; // Get the student's age
    }
};

// Base class Vehicle
class Vehicle
{
public:
    void move() { cout << "Moving" << endl; }
};

// Derived class Car2 inherits from Vehicle
class Car2 : public Vehicle
{
};

// Base class Shape with a virtual function
class Shape
{
public:
    virtual void draw() { cout << "Drawing shape" << endl; }
};

// Derived class Circle overrides the draw() function
class Circle : public Shape
{
public:
    void draw() override { cout << "Drawing circle" << endl; }
};

// Template function for generic addition
template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Hello World!" << endl;

    ////////////////////////////////////////////////////
    // Demonstrate the Car class
    Car c;
    c.brand = "Tesla";
    c.drive();

    ////////////////////////////////////////////////////
    // Demonstrate the Student class with encapsulation
    Student s;
    s.setAge(10);
    int age = s.getAge();
    cout << "Student's age: " << age << endl;

    ////////////////////////////////////////////////////
    // Demonstrate inheritance with Vehicle and Car2
    Car2 c2;
    c2.move();

    ////////////////////////////////////////////////////
    // Demonstrate polymorphism with Shape and Circle
    Circle cir;
    cir.draw();

    ////////////////////////////////////////////////////
    // Demonstrate the use of templates
    cout << "Addition of integers: " << add(3, 4) << endl;    // Outputs: 7
    cout << "Addition of doubles: " << add(3.5, 4.5) << endl; // Outputs: 8.0

    ////////////////////////////////////////////////////
    return 0;
}
