
#ifndef BRAND_H
#define BRAND_H

#include "Product.h"
#include <vector>
#include <string>

using namespace std;

class Brand;
class Brand {
    public:
        Brand();
        Brand(string name, vector<Product*> productPtrs);
        string getName();
        void addProduct(Product* newProduct);
    
    private:
        string brandName;
        vector<Product *> productPtrs;
};

Brand::Brand() {
    brandName = "b";
}

Brand::Brand(string name, vector<Product*> productPtrs) {
    brandName = name;
    this->productPtrs = productPtrs;
}

#endif