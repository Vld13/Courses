#include<stdio.h>
#include"func.h"


int main()
{
	int choice, s_size, write_size, read_size;
	int res;
	char *fname = "list.bin"; 

  enum ACTIONS{ADD=1,DELETE,SEARCH,VIEW,EXIT};
  struct Person man;

	s_size = sizeof(struct Person);
  
	while(1)
	{
    choice = startMenu();

		switch(choice)
		{
			case ADD:
        write_size = writeFile(fname,man,s_size);
				//printf("write_size = %d\n",write_size);
        break;
      
			case DELETE:
				break;

		  case SEARCH:
				res = searchPerson(fname, man);
				break;

			case VIEW:
	      read_size = viewAllPersons(fname,man,s_size);
				//printf("read_size = %d\n",read_size);
				break;

			case EXIT:
				return 0;

			default:
				puts("Incorrect enter !");
				break;
		}
	}

	return 0;
}
