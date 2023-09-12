#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog with the following elements:
 * @name: Name of the dog (char *)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (char *)
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(struct dog *d);

#endif /* DOG_H */
