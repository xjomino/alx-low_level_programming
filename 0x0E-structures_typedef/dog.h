#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure definition of dog
 * @name: character string
 * @age: integer
 * @owner: charcter string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
#endif
