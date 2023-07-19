#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - Print a name
 * @name: The name to print
 * @f: Function pointer to print function
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - Iterate through an array
 * @array: Array to iterate through
 * @size: Size of the array
 * @action: Function pointer to apply on each array element
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - Get the index of an integer in an array
 * @array: Array to search in
 * @size: Size of the array
 * @cmp: Function pointer for comparison
 *
 * Return: Index of the first element comparison function ,
 *         or -1 if no elements match the comparison function.
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif
