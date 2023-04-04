//SAIRISAN
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#include <time.h>
#include <random>
using namespace std;  

const int length_=15;  //define length
int top_val = -1; //initilization of stack top
int arr[length_];  //create an array of len 15.


//check whether stack empty
bool if_empty() {
    return top_val == -1;
}

//checking whether stack is full...
bool if_full() {
    return top_val == length_ - 1;
}

// function for push elment in to stack
void push(int val) {
    if (if_full()) {        
        cout << "Stack Overflow\n";
        return;
    }
    top_val++;
    if (top_val > length_) {
        cout << "Stack Overflow\n";
        return;
    }
    arr[top_val] = val;
}

// function for code
int pop() {
    if (if_empty()) {
        cout << "stack Underflow\n";
        return -1;
    }
    int val = arr[top_val];
    top_val--;
    return val;
}

//to display the current stack elements in row
void display() { 
    if (if_empty()) {
        cout << "\stack is empty\n";
        return;
    }
    cout << "\nelements:\n";
    for (int i = top_val; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

int main() {
    
    clock_t start, end;
    double cpu_time_used;
    start = clock();  
    
    
    push(8);
    push(10);
    push(5);
    push(11);
    push(15);
    push(23);
    push(6);
    push(18);
    push(20);
    push(17);
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();
    push(4);
    push(30);
    push(3);
    push(1);
    display();
    
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout << "\nTime Taken For Stack: " << cpu_time_used << " seconds." << endl;
    
    return 0;
}
