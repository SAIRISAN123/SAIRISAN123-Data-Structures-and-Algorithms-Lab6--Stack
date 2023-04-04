//SAIRISAN
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#include <time.h>
#include <random>
using namespace std; 

struct Node {
    int val;
    Node *next;
};

Node *head = NULL; //new node is head of  list
Node *top = NULL; //new node is top

bool isEmpty() {      //to check wheather list is empty or not
    return top == NULL;
}

void push(int value) {
    Node *newNode = new Node();
    newNode->val = value; 
    newNode->next = NULL;
    
    if (isEmpty()) {
        head = newNode; //new node is head
        top = newNode; //new node is top
    }
    else {
        top->next = newNode;
        top = newNode;
    }
}

int pop() {
    if (isEmpty()) {
        cout << "stack Underflow" << endl;
        return -1;
    }
    else {
        int x = top->val;
        if (top == head) { // only one head
            top = NULL;
            head = NULL;
        }
        else {
            Node *tmp = head;
            while (tmp->next != top) { //iterate to the node prevous to stop
                tmp = tmp->next;
            }
            tmp->next = NULL; //making the next of the nnode null
            top = tmp; // change top pointer
        }
        return x;
    }
}

void display() { 
    if (isEmpty()) {
        cout << "stack is Empty" << endl;
        return;
    }
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
    cout << "\nelements:\n";
    display();
    pop(); 
    pop(); 
    pop(); 
    pop(); 
    pop();
    cout << "\nelements:\n";
    display();
    push(4);
    push(30);
    push(3);
    push(1);
    cout << "\nelements:\n";
    display();
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout << "\nTime Taken For linked list: " << cpu_time_used << " seconds." << endl;
    
    return 0;
}
