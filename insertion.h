// =================================================================
//
// File: insertion.h
// Author: Pedro Perez
// Description: This file contains the implementation of the
//				insertion sort.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================
#ifndef INSERTION_H
#define INSERTION_H

#include "header.h"
#include <vector>

// =================================================================
// Performs the insertion sort algorith on an array.
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// @return the number of swaps.
// @complexity O(n^2)
// =================================================================
template <class T>
int insertionSort(T *arr, int size) {
	int counter{};
	for(int i = 1; i < size; i++){
		for(int j = i; j > 0 && arr[j] < arr[j - 1]; j--){
			swap(arr, j, j - 1);
			++counter;
		}
	}
	return counter;
}

// =================================================================
// Performs the insertion sort algorith on a vector.
//
// @param A, a vector of T elements.
// @return the number of swaps.
// @complexity O(n^2)
// =================================================================
template <class T>
int insertionSort(std::vector<T> &v) {
	int counter{};
	for(int i = 1; i < v.size(); i++){
		for(int j = i; j > 0 && v[j] < v[j - 1]; j--){
			swap(v, j, j - 1);
			++counter;
		}
	}
	return counter;
}

#endif /* INSERTION_H */
