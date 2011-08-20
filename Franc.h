class Franc {
 public:
 Franc(int amount) : amount(amount) {}
  Franc times(int multiplier) {return Franc(amount * multiplier);}
  bool operator==(const Franc &lhs) const {return lhs.amount == this->amount;}
  bool operator!=(const Franc &lhs) const {return !(lhs == *this);}
 private:
  int amount;
};
