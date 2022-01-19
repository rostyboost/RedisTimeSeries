/*
 * Copyright 2018-2021 Redis Labs Ltd. and Contributors
 *
 * This file is available under the Redis Labs Source Available License Agreement
 */
#include "consts.h"
#include "generic_chunk.h"

#ifndef ABSTRACT_ITERATOR_H
#define ABSTRACT_ITERATOR_H

typedef struct AbstractIterator
{
    DomainChunk *(*GetNext)(struct AbstractIterator *iter);
    void (*Close)(struct AbstractIterator *iter);

    struct AbstractIterator *input;
} AbstractIterator;

#endif //ABSTRACT_ITERATOR_H
