#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type that defines a dog
 * @name: ism
 * @age: 3mor
 * @owner: who own a god
 *
 * Description: lil klab lili jaya fil most9bl
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

