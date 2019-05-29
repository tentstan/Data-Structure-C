/*
 * =====================================================================================
 *
 *       Filename:  BinaryTree.h
 *
 *    Description:  BinaryTree head file 
 *
 *        Version:  1.0
 *        Created:  05/28/2019 10:11:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef BINARYTREE_H
#define BINARYTREE_H 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../../../Status.h"
#include "../../../Scanf.c"

typedef char TElemType;
typedef struct BiTNode
{
    TElemType data;
    struct BiTNode* lchild;
    struct BiTNode* rchild;
}BiTNode;

typedef BiTNode* BiTree;
typedef BiTree SElemType_Sq;

#inculde "../../../stack_and_queue/impl/SequenceStack/SequenceStack.h"

typedef struct 
{
    BiTree left;
    BiTree right;
    int n;
}Node;

void InitBiTree(BiTree* T);
void ClearBiTree(BiTree* T);
void DestroyBiTree(BiTree* T);
Status BiTreeEmpty(BiTree T);
Status CreateBiTree(FILE* fp,BiTree* T);
int BiTreeLength(BiTree T);
int BiTreeDepth(BiTree T);
Status Root(BiTree T,TElemType* e);
TElemType Value(BiTree p);
void Assign(BiTree p,TElemType value);
TElemType Parent(BiTree T,TElemType e);
TElemType LeftChild(BiTree T,TElemType e);
TElemType RightChild(BiTree T,TElemType e);
TElemType LeftSibling(BiTree T,TElemType e);
TElemType RightSibling(BiTree T,TElemType e);
BiTree LocationBiTree_1(BiTree T,TElemType e);
BiTree LocationBiTree_2(BiTree T,TElemType e);
Status InsertBiTree(BiTree T,TElemType e,BiTree T0,int LR);
Status DeleteBiTree(BiTree T,TElemType e,int LR);
void LevelOrderTraverse(BiTree T,void(Visit)(TElemType));
void PreOrderTraverse_1(BiTree T,void(Visit)(TElemType));
Status PreOrderTraverse_2(BiTree T,Status(Visit)(TElemType));
void InOrderTraverse_1(BiTree T,void(Visit)(TElemType));
Status InOrderTraverse_2(BiTree T,Status(Visit)(TElemType));
Status InOrderTraverse_3(BiTree T,Status(Visit)(TElemType));
void PostOrderTraverse(BiTree T,void(Visit)(TElemType));
void PrintTree(BiTree T);
