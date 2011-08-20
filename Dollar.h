class Dollar {
 public:
 Dollar(int amount) : amount(amount) {}
  void times(int multiplier) {amount *= multiplier;}
  int amount;
};
