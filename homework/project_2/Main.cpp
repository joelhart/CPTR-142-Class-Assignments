#include "Store.h"
#include "Brand.h"
#include "Product.h"
#include <cassert>
#include <iostream>
#include <fstream>

// I updated this because it was the only thing I missed on my project 2 Grade.

using namespace std;

int main() {

    Store theStore;

    ifstream infs;
    string junk;
    string brandName;
    string productName;
    string UPC;
    infs.open("Inventory.txt");

    if (!infs.is_open()) {
        cerr << "Could not open file";
        return 1;
    }
    getline(infs,junk,'\n');
    while (!infs.eof()) {

        getline(infs, UPC, '\t');
        if(UPC.size() == 0) {
            break;
        }
        getline(infs, brandName, '\t');
        getline(infs, productName, '\n');

        Brand* brand;
        brand = new Brand(brandName);
        theStore.addBrand(brand, brandName);

        Product* product;
        product = new Product(productName, UPC);
        product->setBrand(brand);
        theStore.addProduct(product, UPC, productName);
    }
    cout << theStore.getProduct().size() << endl;
    cout << theStore.getBrand().size() << endl;
    cout << theStore.getBrandViaName("Riceland")->getName() << endl;
    cout << theStore.getProductViaName("Riceland American Jazmine Rice")->getName() << endl;
    cout << theStore.getProductViaUPC("035200264013")->getName() << endl;
    cout << theStore.getProduct().at(0)->getName() << endl;
    cout << theStore.getProduct().at(0)->getUPC() << endl;
    cout << theStore.getProduct().at(0)->getBrand()->getName() << endl;
}