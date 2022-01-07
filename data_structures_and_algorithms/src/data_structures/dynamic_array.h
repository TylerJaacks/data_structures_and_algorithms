//
// Created by tylerjaacks on 1/6/22.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_DYNAMIC_ARRAY_H
#define DATA_STRUCTURES_AND_ALGORITHMS_DYNAMIC_ARRAY_H

#include <stddef.h>
#include <malloc.h>
#include <assert.h>

#include "common.h"

#define INITIAL_CAPACITY 5

typedef struct {
    uint8_t *data;
    uint8_t size;
    uint8_t capacity;
} dynamic_array_t;

void initialize_dynamic_array(dynamic_array_t  *dynamicArray) {
    dynamicArray->data = calloc(INITIAL_CAPACITY, sizeof(uint8_t));
    dynamicArray->capacity = INITIAL_CAPACITY;
    dynamicArray->size = 0;
}

void initialize_dynamic_array_with_capacity(dynamic_array_t  *dynamicArray, uint8_t capacity) {
    dynamicArray->data = calloc(capacity, sizeof(uint8_t));
    dynamicArray->capacity = capacity;
    dynamicArray->size = 0;
}

void initialize_dynamic_array_with_array(dynamic_array_t *dynamicArray, uint8_t *array, uint8_t size) {
    initialize_dynamic_array_with_capacity(dynamicArray, (2 * size));

    for (int i = 0; i < size; i++) {
        dynamicArray->data[i] = array[i];
    }

    dynamicArray->size = size;
}

void shrink_dynamic_array(dynamic_array_t *dynamicArray) {
    // TODO: Shrink the array duh.
}

void resize_dynamic_array(dynamic_array_t *dynamicArray) {
    uint8_t currentCapacity = dynamicArray->capacity;
    uint8_t newCapacity = 2 * currentCapacity;
    uint8_t currentSize = dynamicArray->size;

    uint8_t *newArray = calloc(newCapacity, sizeof(uint8_t));

    for (int i = 0; i < currentSize; i++) {
        newArray[i] = dynamicArray->data[i];
    }

    dynamicArray->capacity = newCapacity;
    dynamicArray->data = newArray;
}

void insert_element(dynamic_array_t *dynamicArray, uint8_t element) {
    if (dynamicArray != NULL) {
        if (dynamicArray->size == dynamicArray->capacity) {
            resize_dynamic_array(dynamicArray);
        }

        dynamicArray->data[dynamicArray->size] = element;
        dynamicArray->size = dynamicArray->size + 1;
    }
}

void remove_element(dynamic_array_t* dynamicArray, uint8_t element) {
    // TODO: Remove an element from dynamic_array_t.
}

void insert_element_at_index(dynamic_array_t *dynamicArray, uint8_t element, uint8_t index) {
    if (dynamicArray != NULL) {
        if (dynamicArray->size == dynamicArray->capacity) {
            resize_dynamic_array(dynamicArray);
        }

        // TODO: Rearrange Array.
    }
}

void delete_at_index(dynamic_array_t *dynamicArray, uint8_t index) {
    if (dynamicArray != NULL) {
       // TODO: Remove at an index and rearrange the array.
    }
}

#endif //DATA_STRUCTURES_AND_ALGORITHMS_DYNAMIC_ARRAY_H