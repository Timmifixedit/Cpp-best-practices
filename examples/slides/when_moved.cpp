auto createVector() -> std::vector<int> {
    std::vector<int> ret = {1, 2, 3, 4};
    return ret;
}

int main(void) {
    std::vector<int> ints = createVector(); // move ctor
    ints = std::vector<int>{7, 8, 9}; // move assignment
    std::vector<int> ints2 = ints; // copy ctor
    std::vector<int> ints3 = std::move(ints); // move ctor
}