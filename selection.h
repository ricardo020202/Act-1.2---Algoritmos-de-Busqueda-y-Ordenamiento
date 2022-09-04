// =================================================================
//
// File: selection.h
// Author: Pedro Perez
// Description: This file contains the implementation of the
//				bubble sort.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================
#ifndef SELECTION_H
#define SELECTION_H

#include "header.h"
#include <vector>

// =================================================================
// Performs the selection sort algorithm on an array.
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// @return the number of swaps.
// @complexity O(n^2)
// =================================================================
template <class T>
int selectionSort(T *arr, int size) {
	int pos;
	int counter{};

	for(int i = size - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(arr[j] > arr[pos]){
				pos = j;
			}
		}

		if (pos != i){
			++counter;
			swap(arr, i, pos);
		}
	}
	return counter;
}

// =================================================================
// Performs the selection sort algorithm on a vector.
//
// @param A, a vector of T elements.
// @return the number of swaps.
// @complexity O(n^2)
// =================================================================
template <class T>
int selectionSort(std::vector<T> &v) {
	int pos;
	int counter{};

	for(int i = v.size() - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(v[j] > v[pos]){
				pos = j;
			}
		}

		if (pos != i){
			++counter;
			swap(v, i, pos);
		}
	}
	return counter;
}

#endif /* SELECTION_H */
