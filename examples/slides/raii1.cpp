class Solver {
    Options options;
public:
    Solver() = default;
    void initialize(const Options &options) {
        this->options = options;
    }

    void solve() {
        if (options.heuristic == "VSIDS") {...}
        ...
    }
};
