#include<iostream>
using namespace std;

/* OOP is the concept implementation of real world problem
 in the programming in form of classes & object
 */ 
// NOTE : by default class members are private and generate default constructor
// Access Modifier : Public , Private , Protected

// classes & Objects

//Abstraction
class base{
    virtual void fame()=0; //Contract 
};

// Classes 
class freelancer : base {

    // Encapsulation
    // private:
    // int Age ; //encapsulated 
    // string Name; //encapsulated \

    // Protected
    protected:
    int Age ; 
    string Name; 

    public:
    //  int Age ;
    //  string Name;

    // Setters & Getters
    // Setters
    void setage(int age){
        Age = age;
    };
    // Getters
    int getage(){
        return Age;
    };
    // Setters
    void setname(string name){
        Name = name;
    };
    // Getters
    string getname(){
        return Name;
    };

    // Constructors
    freelancer(int age , string name ){
    Age = age;
    Name = name;
    }

    // Default Constructors
    freelancer(){
    Age = 0;
    Name = "N/A";
    }

    // Polymorphism : it define the presence of same function/ method in parent and derived class
    // This virtaul classes say check if there is presence of any other same polymorphism class in derived class
    virtual void promo(){
        cout<<"you work well freelancer we love you";
    }

    // Abstraction Contract
    void fame(){
      if(Age>=18){
        cout<<"\nYou are famous broooo!!\n";
      }else{
        cout<<"\nYou are not famous yet!!\n";
      }
    };

    // Introduction 
    void intro(){
        cout<<"Age : "<<Age<<endl;
        cout<<"Name : "<<Name<<endl;
    };
};

// Inheritance 
class developer : public freelancer{
    public:
    string Lang;
    int Pay;
    
    developer(int age, string name, string lang, int pay ) : freelancer( age, name ){
        Lang = lang;
        Pay = pay;
    }

    // Polymorphism Child
    void promo(){
        cout<<"you work well as Developer & we love you";
    }

    // Developer Introduction
    void devintro(){
        cout<<"Age : "<<Age<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"Language : "<<Lang<<endl;
        cout<<"Payment : "<<Pay<<endl;
    }
};

// Inheritance 
class designer : public freelancer{
    public:
    string Software;

    designer(int age, string name, string soft) : freelancer( age, name ){
        Software = soft;
    }

    void designintro(){
        cout<<"Age : "<<Age<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"Software : "<<Software<<endl;
    }
};


int main(){

    // OLD WAY
    // freelancer f1;
    // f1.Age  = 24;
    // f1.Name = "Himanshu";

    // NEW WAY WITH CONSTRUCTOR
    freelancer f1 = freelancer(24,"selena");
    f1.intro();
    freelancer f2 = freelancer(20,"Himanshu");
    f2.intro();

    // Setters & Getters
    f2.setname("Bahubali coder");
    cout<<"New Name of f2 : "<<f2.getname();

    // Abstraction 
    f1.fame();
    f2.fame();

    // Inheritance with Protected Access Modifier
    developer d3 = developer(24,"Abort","C++",289);
    d3.devintro();

    // Inheritance 
    designer d4 = designer(14,"aisha","figma");
    d4.designintro();
    cout<<endl;
    d4.promo();
    cout<<endl;

    // Polymorphism
    f1.promo();
    cout<<endl;
    f2.promo();
    cout<<endl;
    d3.promo();
    cout<<endl;

    return 0;
}