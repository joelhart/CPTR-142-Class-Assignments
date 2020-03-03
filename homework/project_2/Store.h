
#ifndef STORE_H
#define STORE_H

#include "Product.h"
#include "Brand.h"
#include <string>
#include <vector>
#include <map>
#include <set>

class Store;

class Store {
    public:
        set<Brand*> getBrand();
        Brand* getBrandViaName(string brandNameInput);
        vector <Product*> getProduct();
        Product* getProductViaName(string productNameInput);
        Product* getProductViaUPC(string productUPCInput);
        void addBrand(Brand* newBrand, string newBrandName);
        void addProduct(Product* newProduct, string newProductUPC, string newProductName);

    private:
        string brandNameInput;
        string productNameInput;
        string productUPCInput;
        // This is where the maps are vectors are used for storing Products and brands
        set<Brand*> brandSet;
        vector<Product*> productVector;
        map<string, Product*> productViaName;
        map<string, Product*> productViaUPC;
        map<string, Brand*> brandViaName;
};

#endif