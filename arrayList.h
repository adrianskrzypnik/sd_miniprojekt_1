#pragma once

class arrayList {
    int *array_list;
    int length_of_list;
    int count_of_elements_inside_list;
    int index;

public:
    arrayList();
    ~arrayList();
    void add_to_start(int);
    void add_to_end(int);
    void to_double_length();
    void remove_from_end();
    void remove_at_index(int);
    void remove_from_start();
    void add_to_random_pos(int, int);
    int find(int) const;
    int get_number_of_elements_inside_list() const;
    int get_length() const;
    int get_element(int) const;
    void clear();
};