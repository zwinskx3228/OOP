#include "book.h"

// ����������� ��� ���������
Book::Book() : name(""), author(""), price(0.0f) {
    cout << "�������� ����� (�������)" << endl;
}

// ����������� � �����������
Book::Book(const string& n, const string& a, float p) : name(n), author(a), price(p) {
    cout << "�������� �����: " << name << endl;
}

// ����������
Book::~Book() {
    cout << "�������� �����: " << name << endl;
}

// ������ ��������
void Book::setBook(const string& n, const string& a, float p) {
    name = n;
    author = a;
    price = p;
}

// ����
void Book::print() const {
    cout << "�����: " << name
        << "\t�����: " << author
        << "\t�i��: " << price << " ���" << endl;
}

// �������
string Book::getName() const { return name; }
string Book::getAuthor() const { return author; }
float Book::getPrice() const { return price; }
