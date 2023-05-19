class Base {
public:
    // Interface method for derived classes
    virtual void work() = 0;

    // DTor needs to be virtual
    virtual ~Base() = default;
    Base(const Base &) = default; 
    Base(Base &&) noexcept = default; 
    Base &operator=(const Base &) = default; 
    Base &operator=(Base &&) noexcept = default; 
};