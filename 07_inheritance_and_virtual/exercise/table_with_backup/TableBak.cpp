// TableBak.cpp
#include <string>
using namespace std;
#include "TableBak.h"

TableBak::TableBak() : TableBak(10) {
}

TableBak::TableBak(int size) : Table(size) {
        // 완성하시오
}

TableBak::TableBak(const TableBak& tablebak) : Table(tablebak) {
        // 완성하시오
}

const TableBak& TableBak::operator=(const TableBak& tablebak) {
        // 완성하시오
}

TableBak::~TableBak() {
        // 완성하시오
}

void TableBak::restore() {
        // 완성하시오
}

void TableBak::backup() {
        // 완성하시오
}
