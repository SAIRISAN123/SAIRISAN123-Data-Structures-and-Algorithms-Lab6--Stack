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




// pop function for code
int pop() {
    if (if_empty()) {
        cout << "stack Underflow\n";
        return -1;
    }
    int val = arr[top_val];
    top_val--;
    return val;
}






