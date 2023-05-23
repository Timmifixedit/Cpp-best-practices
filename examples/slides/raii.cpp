std::mutex mutex{};
int shared_resource = 0;

void doStuff() {
    std::lock_guard<std::mutex> lockGuard{mutex};
    shared_resource = 17;
    shared_resource += functionThatCanThrow();
}
