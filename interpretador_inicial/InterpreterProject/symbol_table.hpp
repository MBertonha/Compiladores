#ifndef SYMBOL_TABLE_HPP_INCLUDED
#define SYMBOL_TABLE_HPP_INCLUDED
#include <cstdio>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

// informa��es da tabela
struct info
{
    string lexeme;
    int value;
};

// refer�ncia � tabela de s�mbolos
typedef vector<info> table;

// a tabela de s�mbolos
table symbols;

bool is_there(string);
int key_insertion(string);
bool value_insertion(int, int);
int get_value(int);
int get_index(string);

#endif // SYMBOL_TABLE_HPP_INCLUDED
