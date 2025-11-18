#include "../main.h"

class Product {
private:
    char* m_productName;
    double m_price;
    int m_quantity;
public:
    Product();
    Product(const char*, double, int);
    Product(const Product&);
    ~Product();

    void setProductName(const char*);
    void setPrice(double);
    void setQuantity(int);

    char* getProductName() const;
    double getPrice() const;
    int getQuantity() const;

    double totalValue() const;
    void restock(int);
    double maxPrice(double, double) const;

    Product mergeProduct(Product) const;
};