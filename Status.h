/*
 * =====================================================================================
 *
 *       Filename:  Status.h
 *
 *    Description:  Status head file 
 *
 *        Version:  1.0
 *        Created:  05/14/2019 09:34:51 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef STATUS_H
#define STATUS_H 

#define TRUE 1
#define FALSE 0
#define YES 1
#define NO 0
#define OK 1
#define ERROR 0
#define SUCCESS 1
#define UNSUCCESS 0
#define INFEASIBLE -1

#ifndef _MATH_H
#define OVERFLOW -2
#define UNDERFLOW -3
#endif

#ifndef NULL
#define NULL ((void*)0)
#endif 

typedef int Status;

#define Wait(x) \
{\
    double _Loop_NUM_;
    for(_Loop_NUM_ = 0.01;_Loop_NUM_ <= 100000.0 * x; _Loop_NUM_ += 0.01)\
        ;\
}

#define PreddEnter \
{\
    fflush(stdin);\
    printf("Press Enter ...");\
    getchar();\
    fflush(stdin);\
}

#endif 
