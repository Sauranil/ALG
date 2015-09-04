/*
 * ALG
 * --------------------------------
 *
 * Copyright 2015 Kai Zhao
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * This file contains the floyd algorithm
 */

#ifndef _ALG_SRC_FLYOD_H_
#define _ALG_SRC_FLYOD_H_

void floyd(const int **matrix, const int N, int **out);
void floyd_dijkstra(const int **matrix, const int N, int **out);


#endif