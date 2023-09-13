#include <stddef.h>

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: The array to search in
 * @size: The number of elements in the array
 * @cmp: A pointer to the comparison function
 *
 * Return: Index of the first matching element; -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int)) {
    if (array != NULL && cmp != NULL && size > 0) {
        int i;
        for (i = 0; i < size; i++) {
            if (cmp(array[i]) != 0) {
                return i;  /* Found a match, return the index */
            }
        }
    }
    return -1;  /* No element matches or size <= 0 */
}
