//--------------------------------------------------------------------------------------//
// 27 / 9 / 2564
#include <iostream> //เริ่มเขียน

using namespace std;//use library std all variable

int main()
{                
    int number;
    double i;
    float number2;
    char c;
    string name;
    bool b = true;
    
    cout << "Na" << endl;

//--------------------------------------------------------------------------------------//
//EXAMPLE find odd / even integer.
//endl เว้นบรรทัด
#include <iostream> //เริ่มเขียนโปรแกรม

using namespace std;//use library std all variable for cin cout

int main()
{                   
    int number;
    cout << "enter number: ";
    cin >> number; // %d %c 
    cout << number << endl;
    if (number % 2 == 0)
    {
        cout << number << " is even" << endl;
    }
    else
    {
        cout << number << " is odd" << endl;
    }
}
//--------------------------------------------------------------------------------------//
//EXAMPLE find odd / even integer.
//endl เว้นบรรทัด
#include <iostream> //เริ่มเขียนโปรแกรม
#include <cstdio> //for C programer lover

using namespace std;//use library std all variable

int main()
{               
    int number;
    cout << "enter number: ";
    cin >> number; // %d %c 
    cout << number << endl;
    if (number % 2 == 0)
    {
        //cout << number << " is even" << endl;
        printf("%d is even.\n", number);
    }
    else
    {
        //cout << number << " is odd" << endl;
        printf("%d is even.\n", number);
    }
}
//--------------------------------------------------------------------------------------//
//EXAMPLE รับชื่อ user by string
//endl เว้นบรรทัด
#include <iostream> //เริ่มเขียนโปรแกรม
#include <cstdio> //for C programer lover

using namespace std;//use library std all variable

int main()
{                   //วิธี output coutเรียกมาจาก ไลบรารี่ std
    string name;
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "hello " << name << endl;
    
}
//--------------------------------------------------------------------------------------//
//EXAMPLE รับชื่อ user 5 คน by string
//endl เว้นบรรทัด
#include <iostream> //เริ่มเขียนโปรแกรม
#include <cstdio> //for C programer lover

using namespace std;//use library std all variable

int main()
{                   //วิธี output coutเรียกมาจาก ไลบรารี่ std
    string name[5];
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter your name: ";
        cin >> name[i];

    }
    for(int i = 0; i < 5; i++)
    {
        cout << "hello " << name[i] << endl;
    }
}
//--------------------------------------------------------------------------------------//
//EXAMPLE struct
//endl เว้นบรรทัด
#include <iostream> //เริ่มเขียนโปรแกรม
#include <cstdio> //for C programer lover

using namespace std;//use library std all variable

struct Student
{
    string name;
    string id;
    double score;
};

int main()
{                   //วิธี output coutเรียกมาจาก ไลบรารี่ std
    
    Student student1;
    cout << "Enter your name: ";
    cin >> student1.name;
    
    cout << "Enter your id: ";
    cin >> student1.id;
    
    cout << "Enter your score: ";
    cin >> student1.score;
    
    cout << "hello " << student1.name << endl 
         << "your id is " << student1.id << endl
         <<"your score is " << student1.score << endl;
}
//--------------------------------------------------------------------------------------//
//CLass Constructor
#include <iostream> 
#include <cstdio>

using namespace std;

class Student// เรียกชื่อ class ขึ้นต้นด้วยตัวพิมพ์ใหญ่
{
private://ข้างใน
    string name;
    string id;
    double score;
public : explicit Student(string name, string id)
{
    this->name = name;
    this->id = id;
    this->score = 0;
}
public:            //ข้างนอก
    double getScore()
    {
        return this->score;
    }
};

int main()
{
    
    Student Hyunjin("Hyunjin", "59104097");
    
    //cout << Hyunjin.score << endl; // not find score value because it private
    cout << Hyunjin.getScore() << endl;
}
//--------------------------------------------------------------------------------------//
//Class Constructor
#include <iostream>
#include <cstdio>

using namespace std;

class Student
{
private://ข้างใน
    string name;
    string id;
    double score;
public : explicit Student(string name, string id)
{
    this->name = name;
    this->id = id;
    this->score = 0;
}
public://ข้างนอก
    void setName(string name)
    {
        this->name = name;
    }
    void addScore(double score)
    {
        if (score >= 0)
        {
            this->score += score;
        }
    }
    double getScore()
    {
        return this->score;
    }
    void toString()
    {
        cout << "name: " << this->name << endl
             << "id: " << this->id << endl
             << "score: " << this->score << endl;
    }
};

int main()
{
    
    Student Na("Na", "6310400908");
    Na.toString();
    cout << "---------------------------" << endl;
    Na.setName("Hyunjin");//เปลี่ยนชื่อ
    Na.addScore(99);//เพิ่ม คะแนน
    Na.toString();
 
}
//--------------------------------------------------------------------------------------//
//CLass toString()
#include <iostream> //เริ่มเขียนโปรแกรม
#include <sstream> // สำหรับใช้ stringstream

using namespace std;//use library std all variable

class Student// เรียกชื่อ class ขึ้นต้นด้วยตัวพิมพ์ใหญ่
{
private://ข้างใน
    string name;
    string id;
    double score;
public : explicit Student(string name, string id)
{
    this->name = name;
    this->id = id;
    this->score = 0;
}
public://ข้างนอก
    void setName(string name)
    {
        this->name = name;
    }
    void addScore(double score)
    {
        if (score >= 0)
        {
            this->score += score;
        }
    }
    void getName()
    {
        this->name = name;;
    }
    double getScore()
    {
        return this->score;
    }
    string toString() const
    {
        stringstream ss;
        ss << name << " (" << id << "):" << score;
      return ss.str();

    }
};

int main()
{
    
    Student Hyunjin("Hyunjin", "5910401097");
    Hyunjin.toString();
    cout << "---------------------------" << endl;
    Hyunjin.setName("Hyunjinny");
    Hyunjin.addScore(97);
    cout << Hyunjin.toString() << endl;
}

//--------------------------------------------------------------------------------------//

// 4 / 1 / 2564
#include <iostream>
#include <fstream> // ช้เมื่อต้องการใช้ฟังก์ชันเกี่ยวกับไฟล์ // flie stream
using namespace std;

//write flie
int main()
{
    fstream myFlie; //เปิดไฟล์
    myFlie.open("textflie.txt",ios::out); // สำหรับเปิดไฟล์ // output ไปที่ไฟล์ // เขียนไฟล์ 
    if(myFlie.is_open()) // เปิดการเช็คว่าไฟล์สำเร็จหรือไม่
    { 
        myFlie << "Hello World" << endl; // เอาท์พุตไปออกที่ myFlie ไม่ออกใน terminal
        myFlie << "name : Hyunjin\n" << endl;
    }
    myFlie.close(); // เปิดไฟล์แล้วต้องผิดไฟล์ด้วย
}

//--------------------------------------------------------------------------------------//

//read file
#include <iostream>
#include <fstream> //ใช้เมื่อต้องการใช้ฟังก์ชันเกี่ยวกับไฟล์
#include <string> // Method getline 
using namespace std;

int main()
{
    fstream myFlie;
    myFlie.open("textflie.txt",ios::in); //สำหรับเปิดไฟล์ // ios::in รับ Input จากไฟล์ // อ่านไฟล์
    if(myFlie.is_open()) //เปิดการเช็คว่าไฟล์สำเร็จหรือไม่
    { 
        string line;
        while (getline(myFlie, line)) // get บรรทัดจาก myFlie มาไว้ที่ตัวแปร line
        {
            cout << line << endl;
        }
    }
    else{ cout << "Flie not found"; }
    myFlie.close(); //เปิดไฟล์แล้วต้องผิดไฟล์ด้วย
}

//--------------------------------------------------------------------------------------//

//append flie
#include <iostream>
#include <fstream> //ใช้เมื่อต้องการใช้ฟังก์ชันเกี่ยวกับไฟล์
using namespace std;

int main()
{
    fstream myFlie;
    myFlie.open("textflie.txt",ios::app); //สำหรับเปิดไฟล์ 
    if(myFlie.is_open()) //เปิดการเช็คว่าไฟล์สำเร็จหรือไม่
    { 
        myFlie << "id : 6310400908" << endl;
    }
    myFlie.close(); //เปิดไฟล์แล้วต้องผิดไฟล์ด้วย
}
//เอาไว้เพิ่มข้อมูลในไฟล์

//--------------------------------------------------------------------------------------//

//pointer
#include <iostream>
#include <sstream>
using namespace std;

class Hero {
    private:
        string name; //เก็บข้อมูลชื่อของ Hero
        int level;//level เก็บข้อมูลเลเวลของ Hero 
    public:
        Hero* next;

    public:
        explicit Hero(string name, int level){ //constructo
            this->name = name;
            this->level = level;
        }
    string getName(){ // getter ของชื่อ
        return this->name;
    }
    int getLevel(){ // getter ของเลเวล
        return this->level;
    }
    string toString() const{
        stringstream ss;
        ss  << "name; "
            << this->name << endl;
            << "id: "
            << this->level << endl;
        return ss.str();
    }
};

int main(){
    Hero *pointer = new Hero("Todoroki", 20);
    pointer->next = new Hero("Overhaul", 10);
    pointer = pointer->next;
    pointer->next = new Hero("Overhaul", 10);
    //pointer -> [Hero: Todoroki,20], next -> [Hero: Overhaul,10], next -> NULL
}
//--------------------------------------------------------------------------------------//

//hero list
#include <iostream>
#include <sstream>
using namespace std;

#include "hero.cpp";

class Herolist{
    private:
        Hero hero_list[10];
}