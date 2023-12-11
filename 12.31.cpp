#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << " years" << std::endl;
    }

private:
    std::string name;
    int age;
};

class Student : public Person {
public:
    Student(const std::string& name, int age, const std::string& program)
        : Person(name, age), program(program) {}

    void displayStudentInfo() const {
        displayInfo(); 
        std::cout << "Program: " << program << std::endl;
    }

private:
    std::string program;
};

int main() {
    Person person("John Doe", 25);
    Student student("Elina", 19, "Computer Science");

    std::cout << "Person Info:" << std::endl;
    person.displayInfo();

    std::cout << "\nStudent Info:" << std::endl;
    student.displayStudentInfo();

    return 0;
}

