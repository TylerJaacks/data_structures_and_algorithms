//
// Created by tylerjaacks on 1/6/22.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_COMMON_H
#define DATA_STRUCTURES_AND_ALGORITHMS_COMMON_H

#include <inttypes.h>

typedef union {
    uint8_t uint8;
    uint16_t uint16;
    uint32_t uint32;
    uint64_t uint64;

    int8_t i8;
    int16_t i16;
    int32_t i32;
    int64_t i64;
} types_t;

#endif //DATA_STRUCTURES_AND_ALGORITHMS_COMMON_H
