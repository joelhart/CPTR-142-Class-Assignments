
#include "Store.h"

//Makes adding a brand possible
void Store::addBrand(Brand* newBrand, string newBrandName) {
    if (brandSet.count(newBrand) == 1) {
        brandViaName.emplace(newBrandName, newBrand);
        brandSet.insert(newBrand);
    }
}

//Making adding a product possible
void Store::addProduct(Product* newProduct, string newProductUPC, string newProductName) {
    productVector.push_back(newProduct);
    productViaName.emplace(newProductName, newProduct);
    productViaUPC.emplace(newProductUPC, newProduct);
}

//Accessor for brand via name(see below)
Brand* Store::getBrandViaName(string brandNameInput) {
    return brandViaName.at(brandNameInput);
}

//Accessor for name via brand (reverse of above)
Product* Store::getProductViaName(string productNameInput) {
    return productViaName.at(productNameInput);
}

//Accessor for getting product from UPC
Product* Store::getProductViaUPC(string productUPCInput) {
    return productViaUPC.at(productUPCInput);
}

//Accessor to get the brand
set<Brand*> Store::getBrand() {
    return brandSet;
}

// accessor to return the vector storing products
vector<Product*> Store::getProduct() {
    return productVector;
}