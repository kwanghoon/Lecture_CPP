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
        this->Table::operator=(tablebak);
        if (this != & tablebak) {
                this->sizebak = tablebak.sizebak;
                delete[] this->pbak;
                this->pbak = new string[this->sizebak];
                for (int i = 0; i < this->sizebak; i++) 
                        this->pbak[i] = tablebak.pbak[i];
        }
        return *this;
}

TableBak::~TableBak() {
	if (this->pbak != NULL)
		delete[] this->pbak;
}

void TableBak::restore() {
        if (this->p != NULL) delete[] this->p;

        this->p = new string[this->sizebak];
        this->size = this->sizebak;
        for (int i = 0; i < this->sizebak; i++) {
                this->p[i] = this->pbak[i];
        }
}

void TableBak::backup() {
        if (this->pbak != NULL) delete[] this->pbak;

        this->pbak = new string[this->size];
        this->sizebak = this->size;
        for (int i = 0; i < this->size; i++) {
                this->pbak[i] = this->p[i];
        }
}
