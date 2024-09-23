#include<iostream>
using namespace std;

class stack{
    private:
        int arr[10];
        int top;
        int value=10;
    public:

        stack(){
            top=-1;
            cout<<"stack is initialized"<<endl;
        }
        void push(int val){
            if(top>= value-1){
                cout<<"stack overflow"<<endl;


            }

            else{
                top++;
                arr[top]=val;
                cout<<"element entered to stack is :"<<val<<endl;
            }
        }
        void pop(){
            if(top<=-1){
                cout<<"stack underflow"<<endl;

            }
            else{
                cout<<"element removed is: "<<arr[top]<<endl;
                top--;
                
            }
        }
        void display(){
            if(top>=0){
                cout<<"stack elements are:";
                for(int i=top; i>=0; i--){
                    cout<<arr[i]<<" ";
                    }
                cout<<endl;
            }

        }
};

int main(){
    stack p;
    int choice, val;
    cout<<"press 1 to push element in stack:"<<endl;
    cout<<"press 2 to pop element from stack:"<<endl;
    cout<<"press 3 to display the stack:"<<endl;
    cout<<"press 4 to exit:"<<endl;
    do{
        cout<<"enter choice:"<<endl;
        cin>>choice>>endl;

        switch (choice)
        {
        case 1:
            cout<<"enter the value to be pushed:"<<endl;
            cin>>val>>endl;
            p.push(val);
            
            break;
        case 2:
            p.pop();
            break;
        case 3:
            p.display();
            break;
        case 4:
            cout<<"EXIT"<<endl;
            break;

        default:
            cout<<"invalid choice"<<endl;
        }

    } while(choice!=4);
    
    
    // p.push(10);
    // p.push(20);
    // p.pop();
    // p.push(30);
    // p.display();
    return 0;
    


};