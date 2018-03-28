#!/usr/bin/python3


def habard (n):
    mat = [[0 for x in range(n)] for y in range(n)]
    for i in range(n):
        mat[i][i] = 1
    