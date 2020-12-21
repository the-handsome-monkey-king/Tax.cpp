/**************************************
  *
  * test.cpp
  *
  * A simple test of a simple tax calculator.
  *
  * @author Ryan Morehouse
  * @license MIT
  *
*****************************************/

#include <iostream>
#include <string>
#include "Tax.h"

int main() {
  // $15.00
  long base_price = 1500;

  Tax ab_tax = Tax(base_price, "AB");
  Tax bc_tax = Tax(base_price, "BC");
  Tax mb_tax = Tax(base_price, "MB");
  Tax nb_tax = Tax(base_price, "NB");
  Tax nl_tax = Tax(base_price, "NL");
  Tax nt_tax = Tax(base_price, "NT");
  Tax ns_tax = Tax(base_price, "NS");
  Tax nu_tax = Tax(base_price, "NU");
  Tax on_tax = Tax(base_price, "ON");
  Tax pe_tax = Tax(base_price, "PE");
  Tax qc_tax = Tax(base_price, "QC");
  Tax sk_tax = Tax(base_price, "SK");
  Tax yk_tax = Tax(base_price, "YK");

  std::cout << ab_tax << std::endl;
  std::cout << bc_tax << std::endl;
  std::cout << mb_tax << std::endl;
  std::cout << nb_tax << std::endl;
  std::cout << nl_tax << std::endl;
  std::cout << nt_tax << std::endl;
  std::cout << ns_tax << std::endl;
  std::cout << nu_tax << std::endl;
  std::cout << on_tax << std::endl;
  std::cout << pe_tax << std::endl;
  std::cout << qc_tax << std::endl;
  std::cout << sk_tax << std::endl;
  std::cout << yk_tax << std::endl;

  

  return 0;
}
