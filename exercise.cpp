#include <iostream>
#include <cstring>
using namespace std;

struct book
{
    int id;
    char title[30];
    float price;

    void setData(int i, const char* t, float p) {
        id = i;
        strcpy(title, t);
        price = p;
    }

    void display() {
        cout << "ID: " << id << ", Title: " << title << ", Price: " << price << endl;
    }
};


class Student{
    private:
        int rollNo;
        char name[30];

    public:
        Student(){
            rollNo = 0;
            strcpy(name, "default");
            cout<<"Default Student created with rollNo: " << rollNo << " and name: " << name << endl;
        }

        Student(int r, const char* n){
            rollNo = r;
            strcpy(name, n);
            cout<<"Student created with rollNo: " << rollNo << " and name: " << name << endl;
        }

        void setData(int r, const char* n) {
            rollNo = r;
            strcpy(name, n);
        }

        void display();

        ~Student(){
            cout<<"Destructor called for Student with rollNo: " << rollNo << " and name: " << name << endl;
        }
};
void Student::display(){
    cout<<"Roll No: " << rollNo << ", Name: " << name << endl;
}

int main(){
    book book1;
    book1.setData(101, "C++ Programming", 29.99);
    book1.display();

    Student s1;
    s1.setData(1, "aaa");
    
    Student s2(2, "bbb");

    s1.display();
    s2.display();


    return 0;
}