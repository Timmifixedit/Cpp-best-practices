auto createArray() -> int* {
    int ret[4] = {1, 2, 3, 4};
    return ret;
}

int main(void) {
    int *array = createArray();
    std::cout << array[2] << std::endl; // boom
}