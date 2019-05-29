/*
 * =====================================================================================
 *
 *       Filename:  SequenceStack.h
 *
 *    Description:  SequenceStack head file 
 *
 *        Version:  1.0
 *        Created:  05/28/2019 12:12:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef SEQUENCESTACK_H
#define SEQUENCESTACK_H 

#include <stdio.h>
#include <stdlib.h>

#include "../../../Status.h"

#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10

#if !defined MAZE_H                 &&  \
    !defined EXPRESSOIN_H           &&  \
    !defined BINARYTREE_H           &&  \
    !defined CHILDSIBINGTREE_H      &&  \
    !defined Question_8             
typedef int SElemType_Sq;
#endif

typedef struct 
{
    SElemType_Sq* base;
    SElemType_Sq* top;
    int stacksize;
}SqStack;

Status InitStack_Sq(SqStack* S);
Status DestroyStack_Sq(SqStack* S);
Status ClearStack_Sq(SqStack* S);
Status StackEmpty_Sq(SqStack S);
int    StackLength_Sq(SqStack S);
Status GetTop_Sq(SqStack S,SElemType_Sq* e);
Status Push_Sq(SqStack* S,SElemType_Sq e);
Status Pop_Sq(SqStack* S,SElemType_Sq* e);
Status StackTraverse_Sq(SqStack S,void(Visit)(SElemType_Sq));

#endif 
