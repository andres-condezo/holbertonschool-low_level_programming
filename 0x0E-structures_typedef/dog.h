#ifndef DOG_h
#define DOG_h

/**
 * struct dog - dog data.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 *
 * Description:  An struct for save dog information.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
