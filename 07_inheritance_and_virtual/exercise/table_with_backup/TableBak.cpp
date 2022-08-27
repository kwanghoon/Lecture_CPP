// TableBak.cpp
#include <string>
using namespace std;
#include "TableBak.h"

TableBak::TableBak() : TableBak(10) {
}

TableBak::TableBak(int size) : Table(size) {
	this->sizebak = 0;
	this->pbak = NULL;
}

TableBak::TableBak(const TableBak& tablebak) : Table(tablebak) {
	this->sizebak = tablebak.sizebak;
	this->pbak = NULL;
	if (this->sizebak != 0) {
		this->pbak = new string[this->sizebak];
		for (int i = 0; i < this->sizebak; i++)
			this->pbak[i] = tablebak.pbak[i];
	}
}

const TableBak& TableBak::operator=(const TableBak& tablebak) {

}

TableBak::~TableBak() {
	if (this->pbak != NULL)
		delete[] this->pbak;
}

TableBak::restore() {
  
}

TableBak::backup() {
}
