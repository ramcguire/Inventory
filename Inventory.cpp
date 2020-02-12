#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

/*
 * Inventory::Inventory()
 * Constructor for Inventory class.
 */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/*
 * Inventory::sell()
 * Decrements an item from inventory in stock, if possible.
 * Otherwise, prints an error.
 */
void Inventory::sell()
{
  m_in_stock--;
}

/*
 * Overloaded << operator for printing of an Inventory object.
 */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}