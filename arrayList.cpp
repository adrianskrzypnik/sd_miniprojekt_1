#include <iostream>
#include "randomNumberGenerator.h"
#include "arrayList.h"

using namespace std;

arrayList::arrayList() {
    length_of_list = 1;
    count_of_elements_inside_list = 0;
    index = 0;
    array_list = new int[length_of_list];
}

int arrayList::get_length() const {
    return length_of_list;
}

arrayList::~arrayList() {
    delete[] array_list;
}

void arrayList::to_double_length() {
    int *tmp_array_list = new int[length_of_list * 2];
    for (int i = 0; i < length_of_list; i++)
        tmp_array_list[i] = array_list[i];

    delete[] array_list;
    array_list = tmp_array_list;
    length_of_list *= 2;
}

void arrayList::add_to_start(int val) {
    if (length_of_list == count_of_elements_inside_list) to_double_length();

    for (int i = count_of_elements_inside_list; i > 0; i--)
        array_list[i] = array_list[i - 1];

    array_list[0] = val;
    count_of_elements_inside_list++;
}

void arrayList::add_to_end(int val) {
    if (length_of_list  == count_of_elements_inside_list) to_double_length();
    array_list[count_of_elements_inside_list] = val;
    count_of_elements_inside_list++;
}

int arrayList::get_number_of_elements_inside_list() const {
    return count_of_elements_inside_list;
}

int arrayList::get_element(int idx) const {
    return array_list[idx];
}

int arrayList::find(int searching_val) const {
    for (int i = 0; i < count_of_elements_inside_list; i++) {
        if (array_list[i] == searching_val)
            return array_list[i];
    }
    return -1;
}

void arrayList::add_to_random_pos(int val, int index) {
    if (length_of_list == count_of_elements_inside_list)
        to_double_length();

    for (int i = count_of_elements_inside_list; i > index; i--)
        array_list[i] = array_list[i - 1];

    array_list[index] = val;
    count_of_elements_inside_list++;
}

void arrayList::remove_at_index(int index) {
    if (index < 0 || index >= count_of_elements_inside_list) {
        cout << "Index out of bounds." << endl;
        return;
    }
    for (int i = index; i < count_of_elements_inside_list - 1; i++)
        array_list[i] = array_list[i + 1];
    count_of_elements_inside_list--;
}

void arrayList::remove_from_start() {
    if (count_of_elements_inside_list == 0) {
        cout << "List is empty." << endl;
        return;
    }
    for (int i = 0; i < count_of_elements_inside_list - 1; i++)
        array_list[i] = array_list[i + 1];
    count_of_elements_inside_list--;
}

void arrayList::remove_from_end() {
    if (count_of_elements_inside_list == 0) {
        cout << "List is empty." << endl;
        return;
    }
    count_of_elements_inside_list--;
}



void arrayList::clear() {
    for (int i = 0; i < length_of_list; i++) {
        array_list[i] = 0; // or any other default value you prefer
    }
    count_of_elements_inside_list = 0; // Reset the count of elementsa
}
