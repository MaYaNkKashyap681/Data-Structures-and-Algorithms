#include <bits/stdc++.h>
using namespace std;

class Stack {
    int top;
    int MAX;
    int *st;

public: 
    Stack(int size) {
        top = -1;
        MAX = size;
        st = new int[size];
    }

    void push(int data) {
        if(top == MAX - 1){
            cout<<"Stack is Full"<<"\n";
            return;
        }

        top++;
        st[top] = data;
    }

    int pop() {
        if(top == -1){
            cout<<"Stack is Empty"<<"\n";
            return -1;
        }

        int x = st[top];
        top--;

        return x;
    }

    int tops() {
        if(top == -1){
            cout<<"Stack is Empty"<<"\n";
            return -1;
        }

        return st[top];
    }

    void display_stack() {
        for(int i = top;i >= 0;--i){
            cout<<st[i]<<"\n";
        }
        cout<<"======="<<"\n";
    }

};

int main() {

 Stack st1(10); //creating the object to use features and functions in the class
  
 return 0;
}