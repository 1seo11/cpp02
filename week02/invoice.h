#ifndef INVOICE_H
#define INVOICE_H
#include "product.h"
#include "company.h"

class Invoice
{
    // Product�� ��� �ʵ�� ������ ���� ����.
private:
    int invoiceNumber;
    double invoiceTotal;
    Company company;  // has-a
public:
    Invoice(int invoiceNumber, string name, string phone); // composition
    //Invoice(int invoiceNumber, Company company); // aggregation O
    ~Invoice();
    void add(int quantity, Product product);  // use-a
    void print() const;
    //void print(Company company) const;
};
#endif