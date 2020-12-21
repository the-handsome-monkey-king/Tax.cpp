/************************************************
  * 
  * Tax.cpp
  *
  * A simple Canadian tax calculator.
  * Taxes from 2020.
  *
  * @author Ryan Morehouse
  * @license MIT
  *
  ************************************************/

#include <iostream>
#include <string>
#include <exception>
#include <sstream>
#include "Tax.h"

Tax::Tax(long base, std::string prov) {
  this->base_price = base;
  this->province = prov;

  if(this->pst_list.find(prov) == this->pst_list.end()) {
    throw std::invalid_argument("Province not found.");
  }
  
  this->pst_rate = this->pst_list[this->province];

  this->gst = base_price * this->gst_rate / 100;
  this->pst = base_price * this->pst_rate / 100;
  this->total_price = base_price + gst + pst;
}

int Tax::get_gst_rate() {
  return this->gst_rate;
}

int Tax::get_pst_rate() {
  return this->pst_rate;
}

std::string Tax::get_province() {
  return this->province;
}

long Tax::get_base_price() {
  return this->base_price;
}

long Tax::get_gst() {
  return this->gst;
}

long Tax::get_pst() {
  return this->pst;
}

long Tax::get_total_price() {
  return this->total_price;
}

std::ostream& operator<<(std::ostream& os, const Tax& t) {
  os << t.province << " Sale Info:" << std::endl;
  os << "Base Price: $" << t.base_price/100 << "." << t.base_price%100;
  os << std::endl;
  
  os << "GST: $" << t.gst/100 << "." << t.gst%100 << std::endl;

  os << "PST: $" << t.pst/100 << "." << t.pst%100 << std::endl;

  os << "Total Price: $" << t.total_price/100 << ".";
  os << t.total_price%100 << std::endl;
  return os;
}
