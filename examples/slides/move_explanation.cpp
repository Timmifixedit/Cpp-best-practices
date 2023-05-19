template<typename T>
class vector {
    T *data;
    std::size_t numElems;
public:
    // Move CTor takes an R-value reference (&&)
    vector(vector &&other) noexcept:
                                    data(other.data),
                                    numElems(other.numElems) {
        other.data = nullptr;
        other.numElems = 0;
    }
};