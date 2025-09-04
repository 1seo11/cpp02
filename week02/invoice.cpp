#include "invoice.h"

Invoice::Invoice(int invNum)
	: invoiceNumber(invNum), invoiceTotal(0.0)
{
}
Invoice::~Invoice()
{
}
void Invoice::add(int quantity, Product product)
{
	invoiceTotal += quantity * product.getPrice();
}
void Invoice::print() const
{
	cout << "û�� ��ȣ: " << invoiceNumber << endl;
	cout << "û�� �ݾ�: " << invoiceTotal << endl;
}