#include<iostream>
using namespace std;
class Point{
    int x, y;
    public: 
    Point(){};
    Point(int a, int b){
        cout<<"Constructor 1 called!"<<endl;
        this->x = a;
        this->y = b;
        
    }
    Point(const Point& p){
        cout<<"Copy constructor called!"<<endl;
        this->x = p.x;
        this->y = p.y;
    }
    void display (){
        cout<<"coordinates are: ["<<this->x<<" ] ["<<this->y<<" ]"<<endl;
    }

};
int main(){
    Point p1(3, 4);
    Point p2(p1);
    p1.display();
    p2.display();
    return 0;
}