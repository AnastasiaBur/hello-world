#define TOTO int			//TOTO a; -> int a;
#define TOTO(x) int x		//TOTO(a) -> int a
#define TOTO(x) #x			//int TOTO(a) -> int a


#include "file.h"			//includes prototypes from file.h


#ifdef	TOTO			//if TOTO is defined
#ifndef TOTO			//if TOTO is not defined

int main()				//do this	
{
}

#endif						//othervise do this


//to prevent infinite loops of inclusion, use #ifndef
#ifndef __FT_TEST2_H__
# define __FT_TEST2_H__

#include "test2.h"

#endif


{
	typedef int toto;
	toto a;
	a = 0;
	return (a);
}

typedef int*	int_p;
#define	INT_P	int*

INT_P	a, b, c;			//= *a, b, c
int_p	a, b, c;			//= *a, *b, *c



struct	s_point;
//.............
struct	s_point
{
	int x;
	int y;
};

int		main()
{
	struct s_point	a;
	
	a.x = 10;
	a.y = 42;
	return(0)
}

typedef	struct	s_point
{ /*...*/}		t_point			//t_point	a; instead of struct s_point a;

t_point	*ptr;
//...
(*ptr).x = 10;
//or
ptr->x = 10;



enum	e_list;
//............
enum	e_list
{
	val1,	//0		//val1 = 4,		//val1 = 4,		//the values
	val2,	//1		//5				//val2 = 7,		//can't be equal
	val3	//2		//6				//8				//to each other
};

int		main()
{
	enum e_list	a;

	a = val1;
}



union	u_test
{
	int		i;
	char	c;
	float	f;
};











