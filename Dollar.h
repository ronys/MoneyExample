class Dollar {
 public:
 Dollar(int amount) : amount(amount) {}
  Dollar times(int multiplier) {return Dollar(amount * multiplier);}
  int amount;
};
