// @file utils.h
//
//  \date Created on: Sep 23, 2017
//  \author Gopalakrishna Hegde
//
//   Description:
//
//
//

#ifndef INC_UTILS_H_
#define INC_UTILS_H_
#include "common_types.h"
// #include <cblas.h>

void PrintMat(char *name, const float *ptr, int H, int W, int layout);
void RandInitF32(float *p_data, int N);
void SeqInitF32(float *p_data, int N);
void PrintTensor(const char* tensorName,const float *data, TensorDim dim);
int TensorSize(TensorDim dim);
int TensorCompare(const float *t1, const float *t2, TensorDim dim);
#endif  // INC_UTILS_H_
