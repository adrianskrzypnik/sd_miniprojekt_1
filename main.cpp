#include <iostream>
#include "arrayList.h"
#include "randomNumberGenerator.h"
#include "tests.h"

using namespace std;

void Array_list();
void Singly_Linked_list();
void Double_linked_list();



int main() {



    cout << "hello";
    int choice;
    cout << "Choose a data structure: \n===================" << endl;
    cout << "1) Array List \n"
         << "2) Linked List \n===================" << endl;
    cin >> choice;

    cout << "\n\n";
    switch (choice) {
        case 1: {
            Array_list();
            break;
        }
        case 2:
        {
            Singly_Linked_list();
            break;
        }
        default:
            cout << "ERROR";
    }
}

void Array_list() {
    arrayList arrayList1;
    int choice, variable, seed;
    long long duration = 0;

    do {
        cout << "===================\n1) Add to array \n"
             << "2) Remove from array \n"
             << "3) Find in array \n"
             << "4) Display array \n"
             << "5) Max capacity of the array \n"
             << "6) Current number of elements in the array \n"
             << "7) Clear array\n==================="<< endl;
        cin >> choice;
        cout << "\n\n";

        switch (choice) {
            case 1: {
                cout << "===================\n1) Adding from the front \n"
                     << "2) Adding from the back \n"
                     << "3) Adding at random positions \n"
                     << "4) Generate random data for the array \n===================" << endl;
                cin >> choice;
                cout << "\n\n";

                switch (choice) {
                    case 1: {
                        cout << "How many elements to add: ";
                        cin >> variable;
                        for (int i = 0; i < variable; i++) {
                            cout << "Enter value: " << endl;
                            cin >> choice;
                            arrayList1.add_to_start(choice);
                        }
                        cout << "\n\n";
                    }
                        break;

                    case 2: {
                        cout << "How many elements to add: ";
                        cin >> variable;
                        for (int i = 0; i < variable; i++) {
                            cout << "Enter value: " << endl;
                            cin >> choice;
                            arrayList1.add_to_end(choice);
                        }
                        cout << "\n\n";
                    }
                        break;

                    case 3: {
                        cout << "How many elements to add: ";
                        cin >> variable;
                        for (int i = 0; i < variable; i++) {
                            cout << "Enter value: " << endl;
                            cin >> choice;
                           //arrayList1.add_to_random_pos(choice);
                        }
                        cout << "\n\n";
                    }
                        break;

                    case 4: {
                        cout << "===================\n1) Randomize to the front \n"
                             << "2) Randomize to the back \n"
                             << "3) Randomize at random positions \n===================" << endl;
                        cin >> choice;
                        cout << "How many elements do you want to add to the array?: ";
                        cin >> variable;
                        cout << "Type seed (0-7): ";
                        cin >> seed;
                        switch (choice) {
                            case 1: {

                                Test test1(seed);
                                duration = test1.arrayListAddToFront(arrayList1, variable);

                                cout<<endl<<"Time: "<<duration<<endl;

                                cout << "\n\n";
                                break;
                            }
                            case 2: {

                                Test test1(seed);
                                duration = test1.arrayListAddToBack(arrayList1, variable);

                                cout<<endl<<"Time: "<<duration<<endl;


                                cout << "\n\n";
                                break;
                            }

                            case 3: {

                                Test test1(seed);
                                duration = test1.arrayListAddToRandom(arrayList1, variable);

                                cout<<endl<<"Time: "<<duration<<endl;

                                cout << "\n\n";
                                break;
                            }
                            default:
                                cout << "ERROR" << endl;
                                cout << "\n\n";
                                break;

                        }
                        break;
                    }
                }
                break;
            }

            case 2: {
                cout << "Choose from where you want to remove elements: \n==================="
                     << "1) From the front \n"
                     << "2) From the back \n"
                     << "3) From random positions \n===================" << endl;
                cin >> choice;
                cout << "\n";
                cout << "How many elements do you want to remove?\n";
                cin >> variable;
                cout << "Type seed (0-7)\n";
                cin >> seed;
                cout << "\n\n";
                switch (choice) {
                    case 1: {
                        start = clock();

                        Test test1(seed);
                        duration = test1.arrayListRemoveFromFront(arrayList1, variable);

                        cout<<endl<<"Time: "<<duration<<endl;

                        cout << "\n\n";
                        break;
                    }
                    case 2: {

                        Test test1(seed);
                        duration = test1.arrayListRemoveFromBack(arrayList1, variable);

                        cout<<endl<<"Time: "<<duration<<endl;

                        cout << "\n\n";
                        break;
                    }
                    case 3: {

                        Test test1(seed);
                        duration = test1.arrayListRemoveFromRandom(arrayList1, variable);

                        cout<<endl<<"Time: "<<duration<<endl;

                        cout << "\n\n";
                        break;
                    }
                    default: {
                        cout << "ERROR" << endl;
                        cout << "\n\n";
                        break;
                    }
                }
                break;
            }

            case 3: {
                cout << "Type new seed for generating random number (8-15(\n";
                cin >> seed;

                Test test1(seed);
                duration = test1.arrayListFindRandomNumber(arrayList1);

                cout<<endl<<"Time: "<<duration<<endl;

                cout << "\n\n";
                break;
            }

            case 4: {
                for (int i = 0; i < arrayList1.get_number_of_elements_inside_list(); i++)
                    cout << arrayList1.get_element(i) << " ";
                cout << "\n\n";
                break;
            }

            case 5:
            {
                cout << "Max capacity of the array: " << arrayList1.get_length() << endl;
                cout << "\n\n";
                break;
            }

            case 6:
            {
                cout << "Current number of elements in the array: " << arrayList1.get_number_of_elements_inside_list() << endl;
                cout << "\n\n";
                break;
            }


            case 7: {
                arrayList1.clear();
                cout << "Array cleared.\n\n";
                break;
            }

            default:
                return;
        }
    } while (1);
}

void Singly_Linked_list() {
    SinglyLinkedList list;
    int choice, variable, seed;
    long long duration = 0;

    do {
        cout << "===================\n1) Add to array \n"
             << "2) Remove from array \n"
             << "3) Find random number in array \n"
             << "4) Display array \n"
             << "5) Current of the array \n"
             << "6) Clear array\n===================" <<endl;
        cin >> choice;
        cout << "\n\n";

        switch (choice) {
            case 1: {
                cout << "===================\n1) Adding from the front \n"
                     << "2) Adding from the back \n"
                     << "3) Adding at random positions \n"
                     << "4) Generate random data for the array \n===================" << endl;
                cin >> choice;
                cout << "\n\n";

                switch (choice) {
                    case 1: {
                        cout << "How many elements to add: ";
                        cin >> variable;
                        for (int i = 0; i < variable; i++) {
                            cout << "Enter value: " << endl;
                            cin >> choice;
                            list.prepend(choice);
                        }
                        cout << "\n\n";
                    }
                        break;

                    case 2: {
                        cout << "How many elements to add: ";
                        cin >> variable;
                        for (int i = 0; i < variable; i++) {
                            cout << "Enter value: " << endl;
                            cin >> choice;
                            list.append(choice);
                        }
                        cout << "\n\n";
                    }
                        break;

                    case 3: {
                        cout << "How many elements to add: ";
                        cin >> variable;
                        for (int i = 0; i < variable; i++) {
                            cout << "Enter value: " << endl;
                            cin >> choice;
//                            linked_list1.add_to_random_pos(choice);
                        }
                        cout << "\n\n";
                    }
                        break;

                    case 4: {
                        cout << "===================\n1) Randomize to the front \n"
                             << "2) Randomize to the back \n"
                             << "3) Randomize at random positions \n===================" << endl;
                        cin >> choice;
                        cout << "How many elements do you want to add to the array?: ";
                        cin >> variable;
                        cout << "Type seed (0-7): ";
                        cin >> seed;
                        switch (choice) {
                            case 1: {

                                Test test1(seed);
                                duration = test1.singlyLinkedListAddToFront(list, variable);

                                cout<<endl<<"Time: "<<duration<<endl;

                                cout << "\n\n";
                                break;
                            }
                            case 2: {

                                Test test1(seed);
                                duration = test1.singlyLinkedListAddToBack(list, variable);

                                cout<<endl<<"Time: "<<duration<<endl;

                                cout << "\n\n";
                                break;
                            }

                            case 3: {

                                Test test1(seed);
                                duration = test1.singlyLinkedListAddToRandom(list, variable);

                                cout<<endl<<"Time: "<<duration<<endl;


                                cout << "\n\n";
                                break;
                            }
                            default:
                                cout << "ERROR" << endl;
                                cout << "\n\n";
                                break;

                        }
                        break;
                    }
                }
                break;
            }

            case 2: {
                cout << "Choose from where you want to remove elements: \n===================\n"
                     << "1) From the front \n"
                     << "2) From the back \n"
                     << "3) From random positions \n===================" << endl;
                cin >> choice;
                cout << "\n";
                cout << "How many elements do you want to remove?\n";
                cin >> variable;
                cout << "Type seed (0-7)\n";
                cin >> seed;
                cout << "\n\n";
                switch (choice) {
                    case 1: {

                        Test test1(seed);
                        duration = test1.singlyLinkedListRemoveFromFront(list, variable);

                        cout<<endl<<"Time: "<<duration<<endl;


                        cout << "\n\n";
                        break;
                    }
                    case 2: {

                        Test test1(seed);
                        duration = test1.singlyLinkedListRemoveFromBack(list, variable);

                        cout<<endl<<"Time: "<<duration<<endl;

                        cout << "\n\n";
                        break;
                    }
                    case 3: {

                        Test test1(seed);
                        duration = test1.singlyLinkedListRemoveFromRandom(list, variable);

                        cout<<endl<<"Time: "<<duration<<endl;

                        cout << "\n\n";
                        break;
                    }
                    default: {
                        cout << "ERROR" << endl;
                        cout << "\n\n";
                        break;
                    }
                }
                break;
            }

            case 3: {
                cout << "Type new seed for generating random number (8-15(\n";
                cin >> seed;

                Test test1(seed);
                duration = test1.singlyLinkedListFindRandomNumber(list);

                cout<<endl<<"Time: "<<duration<<endl;

                cout << "\n\n";
                break;
            }

            case 4: {

                list.printAll();

                cout << "\n\n";
                break;
            }

            case 5:
            {
                cout << "Current size of the array: " << list.returnSize() << endl;
                cout << "\n\n";
                break;
            }


            case 6: {
                list.clear();
                cout << "Array cleared.\n\n";
                break;
            }

            default:
                return;
        }
    } while (1);
}


