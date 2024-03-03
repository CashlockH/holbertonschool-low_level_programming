#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_
/**
 * struct dog - Short description
 * @name: First member
 * @owner: Second member
 * @age: asdjfhsj
 * Description: Longer description
 */
struct dog
{
char *name;
char *owner;
float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _SAMPLE_HEADER_H_ */
