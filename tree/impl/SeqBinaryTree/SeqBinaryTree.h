/*
 * =====================================================================================
 *
 *       Filename:  SeqBinaryTree.h
 *
 *    Description:  SeqBinaryTree head file 
 *
 *        Version:  1.0
 *        Created:  05/14/2019 02:25:33 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef SEQBINARYTREE_H
#define SEQBINARYTREE_H 

#include <stdio.h>
#include <math.h>

#include "../../../Scanf.c"
#include "../../../Status.h"

#define MAX_TREE_SIZE 100

typdef char TElementType_Sq;
typedef TElementType_Sq SqBiTree[MAX_TREE_SIZE];

typedef struct 
{
    int level;
    int order;
}Position;

void InitBitree_Sq(SqBiTree T);
void ClearBiTree_Sq(SqBiTree T);
void DestroyBiTree_Sq(SqBiTree T);
Status BiTreeEmptr_Sq(SqBiTree T);
Status CreateBiTree_Le_Sq(FILE* fp,SqBiTree T);
Status CreateBiTree_Pre_Sq(FILE* fp,SqBiTree T,int i);
int BiTreeLength_Sq(SqBiTree T);
int BiTreeDepth_Sq(SqBiTree T);
Status Root_Sq(SqBiTree T,TElementType_Sq *e);
TElementType_Sq Value_Sq(SqBiTree T,Position s);
Status Assign_Sq(SqBiTree T,Position s,TElementType_Sq value);
TElementType_Sq Parent_Sq(SqBiTree T,TElementType_Sq e);
TElementType_Sq LeftChild_Sq(SqBiTree T,TElementType_Sq e);
TElementType_Sq RightChild_Sq(SqBiTree T,TElementType_Sq e);
TElementType_Sq LeftSibling_Sq(SqBiTree T,TElementType_Sq e);
TElementType_Sq RightSibling_Sq(SqBiTree T,TElementType_Sq e);
void LevelOrderTraverse_Sq(SqBiTree T,void(Visit)(TElementType_Sq));
void PreOrderTraverse_Sq(SqBiTree T,void(Visit)(TElementType_Sq),int i);
void InOrderTraverse_Sq(SqBiTree T,void(Visit)(TElementType_Sq),int i);
void PostOrderTraverse_Sq(SqBiTree T,void(Visit)(TElementType_Sq),int i);
void Print_Sq(SqBiTree T);

#endif
