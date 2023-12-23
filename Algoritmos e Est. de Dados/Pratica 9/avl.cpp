/*
 * avl.cpp
 *
 *  Created on: 3 de nov de 2017
 *      Author: ramide
 */

#include "avl.h"
#include <iostream>

using namespace std;

// Realiza a inserção como na BST, mas na volta da recursão,
// testa se está balanceada, e se não estiver, balanceia
BinaryTree::Node *AVLTree::insert(BinaryTree::Node *root, int key) {
  root = BinaryTree::insert(root, key);

  if (!balanced(root))
    root = rebalance(root);

  return root;
}

// Realiza a remoão como na BST, mas na volta da recursão,
// testa se está balanceada, e se não estiver, balanceia
BinaryTree::Node *AVLTree::remove(BinaryTree::Node *root, int key) {
  if (root == NULL)
    return NULL;

  root = BinaryTree::remove(root, key);

  if (root != NULL && !balanced(root))
    root = rebalance(root);

  return root;
}

// Implementação de removeMax(), usada pela remoção.
BinaryTree::Node *AVLTree::removeMax(BinaryTree::Node *root, int &max) {

  root = BinaryTree::removeMax(root, max);

  if (root != NULL && !balanced(root))
    root = rebalance(root);

  return root;
}

// Faz o balanceamento da árvore no ponto root
// Deve ser feita chamada na volta da recursão (subindo a árvore)
// no primeiro nó que estiver desbalanceado
BinaryTree::Node *AVLTree::rebalance(Node *root) {
  ASSERT(!balanced(root), "Already balanced!");

  if (leftHeavy(root)) { // Desbalanceada à esquerda de root (L*)

    if (rightHeavy(root->left)) // Desbalancada à esquerda/direita (LR) -> duas
                                // rotações
      root->left = rotateLeft(root->left); // 1a rotação -> LL

    root = rotateRight(root); // LL -> 2a rotação (ou única, se já fosse LL)

  } else { // Desbalanceada à direita de root (R*)

    if (leftHeavy(root->right)) // Desbalancada à direita/esquerda (RL) -> duas
                                // rotações
      root->right = rotateRight(root->right); // 1a rotação -> RR

    root = rotateLeft(root); // RR -> 2a rotação (ou única, se já fosse RR)
  }

  ASSERT(balanced(root), "Rebalance failed!");
  return root;
}

int AVLTree::validate(Node *root, int &min, int &max) {
  int valid = BinaryTree::validate(root, min, max);

  return valid && balanced(root);
}

// Realiza a rotação a esquerda sobre "root" retornando a nova raiz
BinaryTree::Node *AVLTree::rotateLeft(Node *root) {
  // TODO siga as ilustrações do material
  Node *x = root->right;
  root->right = x->left;
  x->left = root;
  root = x;
  // chame updateH() nos nós modificados ao final
  updateH(root->left);
  updateH(root);
  return root;
}

// Realiza a rotação a direita sobre "root" retornando a nova raiz
BinaryTree::Node *AVLTree::rotateRight(Node *root) {
  // TODO siga as ilustrações do material
  Node *x = root->left;
  root->left = x->right;
  x->right = root;
  root = x;

  // chame updateH() nos nós modificados ao final
  updateH(root->right);
  updateH(root);

  return root;
}

// Exibição da árvore AVL
void AVLTree::show(Node *root) {
  // TODO
  // Exibe a árvore em ordem (in-order)
  // Deve exibir o valor da chave, a altura e o fator de balancemento (BF()) por
  // nó da árvore Formato: (<valor>, <altura>, <BF>), separado por espa�os,
  // exemplo: (1, 0, 0) (3, 2, -1) (2, 0, 1) ... (10, 3, -1)
  cout << " (" << root->key << ", " << H(root) << ", " << BF(root) << ") ";
}