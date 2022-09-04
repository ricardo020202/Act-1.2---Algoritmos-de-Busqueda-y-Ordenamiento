// =================================================================
//
// File: search.h
// Author: Pedro Perez
// Description: This file contains the implementations of the
//				sequential and binary search algorithms.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================
#ifndef SEARCH_H
#define SEARCH_H

#include "header.h"
#include <vector>

// =================================================================
// Performs a sequential search for an element within a vector.
//
// @param A, a vector of T elements.
// @param key, the element to search.
// @return the index of the searched element, -1 in case the element
//		   is not found in the vector and the number of searches.
// @complexity O(n)
// =================================================================
template <class T>
std::pair<int, int> sequentialSearch(const std::vector<T> &v, T key) {
	int count{};
	for (int i = 0; i < v.size(); i++){
		++count;
		if (v[i] == key){
			return std::pair<int, int>(i, count);
		}
	}
	return std::pair<int, int>(-1, count);
}

// =================================================================
// Performs a binary search for an element within a vector
//
// @param A, a vector of T elements.
// @param key, the element to search.
// @return the index of the searched element, -1 in case the element
//		   is not found in the vector and the number of searches.
// @complexity O(log n)
// =================================================================
template <class T>
std::pair<int, int> binarySearch(const std::vector<T> &v, T key) {
	int low, high, mid, count{};
	low = 0;
	high = v.size() - 1;
	while (low <= high){
		mid = low + ((high - low) / 2); // mid = (high + low) / 2;
		++count;
		if (key == v[mid]){
			return std::pair<int, int>(mid, count);
		}else if (key < v[mid]){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	return std::pair<int, int>(-1, count);
}

// =================================================================
// Performs a binary search for an element within a vector
//
// @param A, a vector of T elements.
// @param low, lower limit of the search.
// @param high, upper limit of the search.
// @param key, the element to search.
// @return the index of the searched element, -1 in case the element
//		   is not found in the vector.
// =================================================================
template <class T>
int binaryRSearch(const std::vector<T> &v, int low, int high, T key) {
	int mid;
	if (low > high){
		return -1;
	}else{
		mid = low + ((high - low) / 2); // mid = (high + low) / 2;
		if (key == v[mid]){
			return mid;
		}else if (key < v[mid]){
			return binaryRSearch(v, low, mid - 1, key);
		}else{
			return binaryRSearch(v, mid + 1, high, key);
		}
	}
}

#endif /* SEARCH_H */
