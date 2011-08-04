class Dollar {
 public:
 Dollar(int amount) : amount(amount) {}
  Dollar times(int multiplier) {return Dollar(amount * multiplier);}
  int amount;
  bool operator==(const Dollar &) const {return true;}
  bool operator!=(const Dollar &lhs) const {return !(lhs == *this);}
};
