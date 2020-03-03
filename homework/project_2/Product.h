
#ifndef PRODUCT_H
#define PRODUCT_H

#include "Brand.h" 
#include <string>
#include <map>

using namespace std;

class Product;
class Product {
    public: 
        Product();
        Product(string name, string UPC, Brand* brandPtr);
        Brand* getBrand();
        string getName();
        string getUPC();

    private:
        Brand* brandPtr = nullptr;
        string productName;
        string UPC;
        map<string, Brand*> productMap;
};

Product::Product() {
    productName = "a";
    UPC = "1";
}

Product::Product(string name, string UPC, Brand* brandPtr) {
    productName = name;
    this->UPC = UPC;
    this->brandPtr = brandPtr;
}

#endif