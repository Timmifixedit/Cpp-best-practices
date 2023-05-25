// unecessary, int is trivially copyable
int add(const int& a, const int& b) {
    return a + b;
}

// good, no copy necessary
void printList(const std::list<int> &ints) {
    // elements of list are trivially copyable => no reference
    for (int i : ints) {
        std::cout << i << std::endl;
    }
}