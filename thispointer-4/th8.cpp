#include<iostream>
#include<string>
using namespace std;
class Book{
    string title, author;
    int price;
    public:
    Book(){
        cout<<"Default constructor called!"<<endl;
    }
    Book(string t, string a, int p){
        cout<<"Constructor 1 called!"<<endl;
        this->title = t;
        this->author = a;
        this->price =p;
    }
    Book(const Book& b){
        cout<<"Copy constructor called!"<<endl;
        this->title = b.title;
        this->author = b.author;
        this->price = b.price;
    }
    void display(){
        cout<<title<<" "<<author<<" "<<price<<endl;
    }
};
int main(){
    Book b1("C++", "Balagurusamy", 800);
    Book b2 = b1; 
    b1.display();
    b2.display();
    return 0;
}