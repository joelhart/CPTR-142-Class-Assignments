
#include "Brand.h"

//Accessor for brandName
string Brand::getName() {
    return brandName;
}

//Add a product to the Product list (vector)
void Brand::addProduct(Product* newProduct) {
    productPtrs.push_back(newProduct);
}