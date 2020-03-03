
#include "Product.h"

//Accessor for productName
string Product::getName() {
    return productName;
}

//Accessor for UPC
string Product::getUPC() {
    return UPC;
}

//Accessor for brandPtr
Brand* Product::getBrand() {
    return brandPtr;
}