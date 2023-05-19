int main(void) {
    std::vector<std::vector<int>> numbers;
    numbers.reserve(10);
    for (int i = 0; i < 10; ++i) {
        std::vector<int> nums;
        nums.reserve(10);
        for (int j = 0; j < 10; ++j) {
            nums.emplace_back(10 * i + j);
        }

        // nums will be destroyed every iteration => move it
        numbers.emplace_back(std::move(nums));
    }
}