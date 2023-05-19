template<typename T>
auto move(T &&object) {
    return static_cast<std::remove_reference_t<T>&&>(object);
}