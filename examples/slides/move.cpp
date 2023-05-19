int main(void) {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = std::move(vec1);

    // vec1 = {}
    // vec2 = {1, 2, 3, 4, 5}
}