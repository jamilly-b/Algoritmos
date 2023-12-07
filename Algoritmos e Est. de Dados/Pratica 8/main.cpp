/*
 * main.cpp
 *
 *  Created on: 30 de out de 2017
 *      Author: ramide
 */

#include <iostream>
#include <chrono>
#include <stdlib.h>

#include "bst.h"
#include "avl.h"

using namespace std;

void searchRemoveShow(BinaryTree &tree, int value, int show) {

	int found = tree.search(value);

	if (found) tree.remove(value);

	int valid = tree.validate();

	cout    << "Value: " << value
			<< " Found/removed = " << (found ? "YES" : "NO ")
			<< " [" << (valid ? "valid" : "invalid")<< "]";

	if (show) tree.show();

	cout << endl;
}

int main() {
	int values [10] = {10, 35, 22, 16, 1, 45, 17, 88, 62, 7}; // ordem de inserção
	int sorted [10] = {1, 7, 10, 16, 17, 22, 35, 45, 62, 88}; // ordem natural, para testes
	int size = 10;

	BinaryTree * tree = new BinaryTree();
	//BinaryTree * tree = new AVLTree();

	try {

		for (int i = 0; i < size; i++) {
			//int value = rand() % size;
			int value = values[i];			// Teste BST
			//int value = sorted[i];		// Teste AVL

			tree->insert(value);
		}

		cout << "Tree is valid: " << (tree->validate() ? "yes" : "no") << endl;
		tree->show();
		cout << endl;

		cout << "Testing Successor and Predecessor:" << endl;
		for (int i = 1; i < size - 1; i++) {
			int val = sorted[i];
			int pred = sorted[i - 1];
			int succ = sorted[i + 1];

			cout << "Successor   of " << val << " == " << succ << "? " << ((tree->successor(val) == succ)?"YES":"NO") << endl;
			cout << "Predecessor of " << val << " == " << pred << "? " << ((tree->predecessor(val) == pred)?"YES":"NO") << endl;
		}

		cout << "Testing Search and Remove:" << endl;
		for (int i = 0; i < size; i++) {
			int val = sorted[i];

			searchRemoveShow(*tree, val, 1);
		}


	} catch (const char * msg) {
		cout << "ERRO: " << msg << endl;
		tree->show();
		cout << endl;
	}

	delete tree;
}

