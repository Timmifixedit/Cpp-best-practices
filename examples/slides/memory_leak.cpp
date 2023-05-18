auto createArray(int size) -> int* {
    auto *ret = new int[size];
    for (int i = 0; i < size; ++i) {
        ret[i] = i;
    }
    return ret;
}

void work() {
    int *array = createArray(5);
    functionThatCanThrow(array);
    delete[] array;
}