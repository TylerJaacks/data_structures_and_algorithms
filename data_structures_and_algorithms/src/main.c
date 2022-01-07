#include "data_structures/dynamic_array.h"

int main() {
    dynamic_array_t *dynamicArray = malloc(sizeof(dynamic_array_t));

    initialize_dynamic_array(dynamicArray);

    insert_element(dynamicArray, 1);
    insert_element(dynamicArray, 2);
    insert_element(dynamicArray, 3);
    insert_element(dynamicArray, 4);
    insert_element(dynamicArray, 5);

    insert_element(dynamicArray, 6);

    return 0;
}
