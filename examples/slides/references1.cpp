class Solver {
public:
    auto getConstraints() -> std::list<Constraint>& {
        return this->constraints;
    }
private:
    std::list<Constraint> constriaints;
    ...
}

int main(void) {
    Solver s(...);
    auto &constraints = s.getConstraints();
}