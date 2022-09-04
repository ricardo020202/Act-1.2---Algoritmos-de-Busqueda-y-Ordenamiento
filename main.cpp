// =================================================================
//
// File: main.cpp
// Author: José Ricardo Rosales Castañeda
// Date: 30/08/2022
//
// =================================================================
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include "header.h"
#include "search.h"
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

using namespace std;

int main(int argc, char* argv[]) {
	//variables, vectors and files needed for program to execute
	int num_of_data, num_of_searches, num_of_comparisons_bubble, num_of_comparisons_selection, num_of_comparisons_insertion;
	vector<int> data_vec, search_data_vec;
	string data, searched_data;
	ifstream input_file(argv[1], ios::in);
	ofstream output_file(argv[2], ios::out);

	//error management
	if (argc != 3){
		cout<<"Error: The number of arguments is bigger than needed."<<argv[0]<<"\nFormat: <exe> <input.txt> <output.txt>";
		return -1;
	}else if (input_file.fail()){
		cout<<"Error: Cant open input file. ";
		return -1;
	}else if (output_file.fail()){
		cout<<"Error: Cant create output file. ";
		return -1;
	}

	input_file>>num_of_data;

	//reading the vector of data
	for (size_t i{}; i < num_of_data; ++i) {
		getline(input_file, data, ' ');
		data_vec.push_back(stoi(data));
	}

	//copies of the vector of data
	vector<int> data_vec_copy = data_vec;
	vector<int> data_vec_copy_2 = data_vec;

	//sorting the vector of data
	num_of_comparisons_bubble = bubbleSort(data_vec);
	num_of_comparisons_selection = selectionSort(data_vec_copy);
	num_of_comparisons_insertion = insertionSort(data_vec_copy_2);

	output_file<<num_of_comparisons_bubble<<" "<<num_of_comparisons_selection<<" "<<num_of_comparisons_insertion<<endl<<endl;

	//filtering the vector of data
	input_file>>num_of_searches;

	pair<int, int> results{};

	for (size_t i{}; i < num_of_searches; ++i){
		getline(input_file, searched_data, ' ');
		search_data_vec.push_back(stoi(searched_data));

		results = sequentialSearch(data_vec, search_data_vec[i]);
		output_file<<results.first<<" "<<results.second<<" ";

		results = binarySearch(data_vec, search_data_vec[i]);
		output_file<<results.second<<"\n";
	}

	input_file.close();
	output_file.close();
}