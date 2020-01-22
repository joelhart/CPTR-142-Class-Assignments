/*************************************************************************
 *
 * Homework Assignment: Class for taking a pizza order
 *
 * File Name:       pizza.h
 * Name:            ?
 * Course:          cp1TR 142
 * Date:            January 22, 2020
 *
 */
const int SMALL = 0;
const int MEDIUM = 1;
const int LARGE = 2;

const int DEEPDISH = 0;
const int HANDTOSSED = 1;
const int PAN = 2;

class Pizza {
public:
  Pizza();
  ~Pizza(){};

  // TODO Add the accessor and mutator functions for each class variable.

  //==================================
  // computePrice
  // Returns:
  //   Price of a pizza using the formula:
  //     Small = $10 + $2 per topping
  //     Medium = $14 + $2 per topping
  //     Large = $17 + $2 per topping
  //==================================
  double computePrice();

  void outputDescription();

private:
  int size, type, toppings;
};
