#include<iostream>
using namespace std;

class add{
    private:
        int a=10,b=20;
    public:
        addition(){
           cout<<"addition= "<<a+b<<endl;
        }
        friend void add1();
};

void add1(){
    add A;
    cout<<"addition = "<<A.a+A.b<<endl;
}
int main(){
    add c;
    c.addition();
    add();
    return 0;
}

