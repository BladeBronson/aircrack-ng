

/* If station is away more than some time consider that person is gone */
#define CONSIDER_PERSON_IS_GONE_THRESHOLD		600 //10 minutes
/* If station is here for a while consider that person is already settled */
#define CONSIDER_PERSON_IS_SETTLED_THRESHOLD	300 //10 minutes

enum person_state { 
	LETS_GREET_THIS_PERSON, 
	THIS_PERSON_IS_ALREADY_HERE, 
	THIS_PERSON_IS_NOT_AROUND, 
	THIS_PERSON_IS_ALREADY_GREETED 
};
