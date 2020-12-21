/************************************
  *
  * Tax.h
  *
  * A simple Canadian tax calculator.
  * Taxes from 2020, and are simplified to ignore
  * HST vs PST, etc, and also to ingore
  * extra conditional taxes in some provinces.
  *
  * @author Ryan Morehouse
  * @license MIT
  *
************************************/

#ifndef TAX_H
#define TAX_H

#include <string>
#include <iostream>
#include <map>

class Tax {
  private:
    long base_price, pst, gst, total_price;
    int gst_rate = 5;
    int pst_rate;
    std::string province;


    // This is ignoring the "type" of provincial sales tax
    // Quebec rounded up to 10 from 9.975
    // Standard postal abbreviations for provinces
    std::map<std::string, int> pst_list = {
      {"AB", 0},
      {"BC", 7},
      {"MB", 7},
      {"NB", 10},
      {"NL", 10},
      {"NT", 0},
      {"NS", 10},
      {"NU", 0},
      {"ON", 8},
      {"PE", 10},
      {"QC", 10},
      {"SK", 6},
      {"YK", 0},
    };


  public:
    Tax(long base, std::string province);

    int get_gst_rate();
    int get_pst_rate();
    std::string get_province();

    long get_base_price();
    long get_gst();
    long get_pst();
    long get_total_price();
    friend std::ostream& operator<<(std::ostream& os, const Tax& t);
};

#endif
